
#include<Servo.h>

#define pinBase 12//define el pin de la base 
#define pinDerecho 11//define pin del motor derecho 
#define pinIzquierdo 10// defino motor izquierdo
#define pinMano 9//defino motor mano

Servo motorBase;//declaro el servo de la base 
Servo motorDerecho;//declaro el servo del motor derecho
Servo motorIzquierdo;//declaro el servo del motor izquierdo
Servo motorMano;//declaro el motor mano

void setup() {
  motorBase.attach(pinBase);
  motorDerecho.attach(pinDerecho);
  motorIzquierdo.attach(pinIzquierdo);
  motorMano.attach(pinMano);
  motorBase.write(0);
  motorDerecho.write(90);
  motorIzquierdo.write(60);
  motorMano.write(0);
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  motorBase.write(130);
  motorDerecho.write(70);
  motorIzquierdo.write(80);
  motorMano.write(40);
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  motorBase.write(90);
  motorDerecho.write(70);
  motorIzquierdo.write(40);
  motorMano.write(40);
  delay(2000);//espera dos segundos 
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos
  delay(2000);//espera dos segundos

}

void loop() {
  // put your main code here, to run repeatedly:

}
