import mysql.connector
import urllib.request
import random


def parameter(temp, hum, fire, air):
      # open connection
  connection =  mysql.connector.connect(
      host="localhost", user='root', database='monitoring', password='MANAGER' , auth_plugin='mysql_native_password')

  # get cursor
  cursor = connection.cursor()

  query= f"insert into industrial_parameters ( temp,hum,fire,air) values({temp},{hum},{fire},{air})"


  # execute query
  cursor.execute(query)

  # commit the changes to disk
  connection.commit()

  # close the connection
  connection.close()


def thinkspeak(temp, hum, fire, air):
    URL='http://api.thingspeak.com/update?api_key=AQ6E8VA3Q23KUDUU'
    HEADER='&field1={}&field2={}&field3={}&field4={}'.format(temp, hum, fire, air)
    NEW_URL=URL+HEADER
    print(NEW_URL)
    data=urllib.request.urlopen(NEW_URL)
    print(data)
    
if __name__=="__main__":
    while True:
        thinkspeak()


