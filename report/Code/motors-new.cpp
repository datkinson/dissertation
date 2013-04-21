//full rotation divided by degrees turned per step
const int fullTurn = 360/1.8;
void moveForward(int distance){
  digitalWrite(leftDirection, LOW);//fwd left motor direction
  digitalWrite(rightDirection, HIGH);//fwd right motor direction
  for (int j = 0; j < distance; j++){
    digitalWrite(leftStep, HIGH);//Step left wheel forwards
    digitalWrite(rightStep, HIGH);//Step right wheel forwards
    delay(defaultDelay);//wait
    digitalWrite(leftStep, LOW);//Stop left wheel
    digitalWrite(rightStep, LOW);//Stop right wheel
    delay(defaultDelay);//wait
  }
}
