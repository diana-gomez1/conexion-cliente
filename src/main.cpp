#include <Arduino.h>
/**
 * @brief Esta es la 
 * 
 * 
*/
void setup() {
 pinMode(2,OUTPUT); //Coloco el pin 2 como salida
}
/**
 * @brief Esta funcion con bucle infinito
*/
void loop() {
  digitalWrite(2,HIGH);//Led enciede
  delay(500);//espero 500ms
  digitalWrite(2,LOW);//apago led
  delay(500);//espero 500ms
}

