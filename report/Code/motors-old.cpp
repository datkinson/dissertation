//full rotation divided by degrees turned per step
const int fullTurn = 360/1.8;
//Make a motor object using the stepper library
//on the correct pins
Stepper motorL(fullTurn, 40,41,42,43);
Stepper motorR(fullTurn, 50,51,52,53);
void moveForward(int distance){
  for (int i = 0; i < distance; i++){
    // step one step:
    motorL.step(-1);
    motorR.step(-1);
    delay(defaultDelay);
  }
}
