# import the flask package
from flask import Flask, request
import database
import paho.mqtt.client as mqtt
import mysql.connector


# create a server instance
app = Flask(__name__)


@app.route("/update", methods=["POST"])
def RECVING():
  S = request.args.get("temp")
  print(f"SENSORS ARE: {S}")
  h = request.args.get("hum")
  print(f"SENSORS ARE: {h}")
  f= request.args.get("fire")
  print(f"SENSORS ARE: {f}")
  a = request.args.get("air")
  print(f"SENSORS ARE: {a}")
  database.parameter(temp=S,hum=h,fire=f,air=a)
  database.thinkspeak(temp=S,hum=h,fire=f,air=a)


  return "data is recorded"
  
app.run(host="0.0.0.0", port=4000, debug=True)

topic="industrial_parameters"
# create client instance
client = mqtt.Client()


# connect to the broker
client.connect("localhost",1883, 60)

@app.route("/result")

def result():
  connection =  mysql.connector.connect(
    host="localhost", user='root', database='monitoring', password="MANAGER", auth_plugin='mysql_native_password')
  # get cursor
  cursor = connection.cursor()
  query = """SELECT temp FROM industrial_parameters ORDER BY id DESC LIMIT 1"""
  query1 = """SELECT hum FROM industrial_parameters ORDER BY id DESC LIMIT 1"""
  query2 = """SELECT fire FROM industrial_parameters ORDER BY id DESC LIMIT 1"""
  query3 = """SELECT air FROM industrial_parameters ORDER BY id DESC LIMIT 1"""
  cursor.execute(query)
  temp = cursor.fetchone()[0];
  cursor.execute(query1)
  hum = cursor.fetchone()[0];
  cursor.execute(query2)
  fire = cursor.fetchone()[0];
  cursor.execute(query3)
  air = cursor.fetchone()[0];
  cursor.close()
  print(temp,hum,fire,air)
  data = "temp,hum,fire,air".format({temp},{hum},{fire},{air})
  client.publish("topic",data)
