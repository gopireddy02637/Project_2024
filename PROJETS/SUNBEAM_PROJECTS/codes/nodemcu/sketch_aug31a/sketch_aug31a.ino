#include <DHT.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <PubSubClient.h>
#include<string.h>

const int BUZZERPIN=D6;

#define DHTPIN D2
#define DHTTYPE DHT11
 
int Fire_digital = D1;

int mq135 = A0; // smoke sensor is connected with the analog pin A0 
 
DHT dht(DHTPIN, DHTTYPE);

const char *ssid = "B.GOPI";
const char *password = "rajeya123";

/* broker details */
WiFiClient wifiClient;
PubSubClient client(wifiClient);

const char *broker = "192.168.1.3";

/*..............................................................................mqtt......................................................*/
/* callback to receive the messages */
void callback(char* topic, byte* payload, unsigned int length) {
  char* payload1;
  Serial.println("Message received on topic: " + String(topic));

  /* converting byte *payload to char *message */

  for (int index = 0; index < length; index++) {
    payload1[index] = (char) payload[index];
  }
String token= strtok(payload1, ",");
String(temp)=token;
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      Serial.println( "temperature "+ String(token) ); //printing each token
      token = strtok(NULL, ",");
      String(hum)=token;
      Serial.println( "humidity " + String(hum) ); //printing each hum
      token = strtok(NULL, ",");
      String(fire)=token;
      Serial.println( "fire_dectection " + String(fire) ); //printing each fire
      token = strtok(NULL, ",");
      String(air)=token;
      Serial.println( "air_qulity " + String(air) ); //printing each token
   }

}
/*.........................................................................REST........................................................*/
void send_temperature_to_server(float temp ,float hum, float fire , float air){
   String data = "temp=" + String(temp) + "&hum=" + String(hum) + "&fire=" + String(fire) + "&air=" + String(air);
   String url = "http://192.168.1.3:4000/update?" +String(data); 
  
  WiFiClient client;
  HTTPClient http;

  Serial.println("Sending a POST request");

  
  http.begin(client, url);

   
  int status_code = http.POST("");
  Serial.println("Status Code: " + String(status_code));

  if (status_code > 0) {
    if (status_code == HTTP_CODE_OK) {  
      Serial.println("successfully sent the request");
    } else {
      Serial.println("Error while processing the request");
    }
  } else {
    Serial.println("Error while sending request");
  }
  
  /* end sending the request */
  http.end();
  }
void setup() {
  Serial.begin(115200);
  Serial.flush();
  
  pinMode(Fire_digital , INPUT);
  pinMode(mq135, INPUT);
  
  dht.begin();
  pinMode(BUZZERPIN,OUTPUT);
  /* decide the input pin (where the temp sensor is connected) */
 
  WiFi.mode(WIFI_STA);

  Serial.println("Connecting to WiFi");
  WiFi.begin(ssid, password);

   while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");

   }
  Serial.println("");
  Serial.print("Connected to the WiFi: ");

  
  Serial.println(WiFi.localIP());
  
  /* set broker */
  client.setServer(broker, 1883);
   
}


void loop() {

  if (!client.connected()) {

    Serial.print("connected to the broker");
    
    /* wait till the NodeMCU is connected to the broker */
    while (!client.connected()) {
      Serial.print(".");
      
      /* connect to the broker */
      client.connect("NodeMCU"); 
      client.setCallback(callback);
     

      delay(500);
    }
    Serial.println("");
    Serial.println("subscribing for the industrial_parameters topic");
    client.subscribe("industrial_parameters");
  }
  client.loop();
  
  float temp=dht.readTemperature();
  String T= String(temp);
  Serial.println("Temperature " + String(T));
  float hum=dht.readHumidity();
  String H= String(hum);
  Serial.println("hum " + String(H));
  
  float air=  analogRead(mq135); 
  String A= String(air);
  Serial.println("gas_sensor " + String(A));
  
  int fire= digitalRead(Fire_digital );
   String F= String(fire);
  Serial.println("flame_sensor " + String(fire));
  send_temperature_to_server(temp, hum , fire , air );
  delay(1000);
  
  if(temp >= 32 ){
        digitalWrite(BUZZERPIN,HIGH);
        Serial.println("TEMPERATUR  SOUND ");
  }
  else{
         digitalWrite(BUZZERPIN,LOW);
         Serial.println("NO SOUND FOR TEMP ");
  }
   if(hum >= 80 ){
        digitalWrite(BUZZERPIN,HIGH);
        Serial.println("HUMIDITY SOUND ");
  }
  else{
         digitalWrite(BUZZERPIN,LOW);
         Serial.println("NO SOUND FOR HUM ");
  }
   if(air >= 900 ){
        digitalWrite(BUZZERPIN,HIGH);
        Serial.println("AIR_QULITY  SOUND ");
  }
  else{
         digitalWrite(BUZZERPIN,LOW);
         Serial.println("NO SOUND FOR AIR ");
  }
   if(fire >= 50 ){
        digitalWrite(BUZZERPIN,HIGH);
        Serial.println("flame  SOUND ");
  }
  else{
         digitalWrite(BUZZERPIN,LOW);
         Serial.println("NO SOUND FOR fire");
  }
  
 

}
