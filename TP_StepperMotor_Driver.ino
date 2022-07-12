
// ON DOIT FAIRE UNE ROTATION COMPLETE DU ROTOR : 360°

  //On inclu la biblio
#include <Stepper.h>

  //On défini le nombre de pas total de notre moteur
//const int nbPas = 4096;
const int nbPas = 2048;
const int In_1 = 8;  // In1
const int In_2 = 9;  // In2
const int In_3 = 10;  // In3
const int In_4 = 11;  // In4

// On définit le nombre de pas et les pins en lien avec le moteur
Stepper myStepper(nbPas, In_1, In_2, In_3, In_4);

// 6=1 9=2 10=3 11=4

void setup() {
  myStepper.setSpeed(9); // 20 RPM
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(nbPas);
  delay(1000);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-nbPas);
  delay(1000);
}
