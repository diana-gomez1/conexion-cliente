#include <Arduino.h>
/**
 * @brief Esta es la 
 * 
 * 
*/
void setup() {
 pinMode(2,OUTPUT); //Coloco el pi 2 coo salida
}
/**
 * @brief Esta fcio co bcle ifiito
*/
void loop() {
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
}

