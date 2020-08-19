#include <Arduino.h>

#define LEDPIN 33               //GPIO del LED rojo integrado
//También es posible utilizar el flash de la cámara, en el GPIO 4

void setup() {
  pinMode(LEDPIN,OUTPUT);       //Se declara el GPIO 33 como salida
                                //De no declararlo no se puede utilizar
  digitalWrite(LEDPIN,LOW);     //Por convención se apaga el LED antes de iniciar
  delay(1000);                  //Pausa de un segundo para iniciar el parpadeo
}

void loop() {
  digitalWrite(LEDPIN,HIGH);    //Se prende el LED
  delay(500);                   //Pausa de medio segundo
  digitalWrite(LEDPIN,LOW);     //Se apaga el LED
  delay(500);                   //Pausa de medio segundo
}