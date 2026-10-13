// C++ code
//

#include <Servo.h>

Servo servoBase;
Servo servoBras;
Servo servoPince;

void setup() {
  servoBase.attach(2);
  servoBras.attach(3);
  servoPince.attach(1);
}

void loop() {
  // Position initiale
  servoBase.write(90);
  servoBras.write(90);
  servoPince.write(90);
  delay(1000);

  // Position 2
  servoBase.write(45);
  servoBras.write(60);
  servoPince.write(30);
  delay(1000);

  // Position 3
  servoBase.write(135);
  servoBras.write(120);
  servoPince.write(150);
  delay(1000);

  // Retour à la position initiale
  servoBase.write(90);
  servoBras.write(90);
  servoPince.write(90);
  delay(1000);
}