#include <Arduino.h>
#include <WiFi.h>
const char * ssid = "virus";
const char * password = "elec1929";
 



/**
 * @brief Esta es la iioo
 * 
 * 
*/

void setup() {
 pinMode(2,OUTPUT); //Coloco el pin 2 como salida
 Serial.begin(115200);
 Serial.println("Inicializando el dispositivo");
 WiFi.begin(ssid, password);

 Serial.println("Estableciendo vinculo con el AP.");
 while (WiFi.status() != WL_CONNECTED)
 {
  Serial.print(".");
  delay(1000);
 }
 Serial.println("\r\n Conexion establecida");
 
}
/**
 * @brief Esta funcion con bucle infinito
 prueba
*/
void loop() {
  digitalWrite(2,HIGH);//Led enciede
  delay(500);//espero 500ms
  digitalWrite(2,LOW);//apago led
  delay(500);//espero 500ms
}

