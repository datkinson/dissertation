//full rotation diveded by degrees turned per step
const int fullTurn = 360/1.8;

void moveForward(int distance){
  Serial.println("Moving Forward");
  digitalWrite(leftDirection, LOW); //forward left motor deirection
  digitalWrite(rightDirection, HIGH); //forward right motor deirection
  for (int j = 0; j < distance; j++){
    digitalWrite(leftStep, HIGH); //Step left wheel forwards
    digitalWrite(rightStep, HIGH); //Step right wheel forwards
    delay(defaultDelay); // wait
    digitalWrite(leftStep, LOW); //Stop left wheel
    digitalWrite(rightStep, LOW); //Stop right wheel
    delay(defaultDelay); // wait
  }
}

void moveBackward(int distance){
  digitalWrite(leftDirection, HIGH); //reverse left motor deirection
  digitalWrite(rightDirection, LOW); //reverse right motor deirection
  for (int j = 0; j < distance; j++){
    digitalWrite(leftStep, HIGH); //Step left wheel backwards
    digitalWrite(rightStep, HIGH); //Step right wheel backwards
    delay(defaultDelay); // wait
    digitalWrite(leftStep, LOW); //Stop left wheel
    digitalWrite(rightStep, LOW); //Stop right wheel
    delay(defaultDelay); // wait
  }
}

void turnLeft(int distance){
  Serial.println("Turning Left");
  digitalWrite(leftDirection, HIGH); //reverse left motor deirection
  digitalWrite(rightDirection, HIGH); //forward right motor deirection
  for (int j = 0; j < distance; j++){
    digitalWrite(leftStep, HIGH); //Step left wheel backwards
    digitalWrite(rightStep, HIGH); //Step right wheel forwards
    delay(defaultDelay); // wait
    digitalWrite(leftStep, LOW); //Stop left wheel
    digitalWrite(rightStep, LOW); //Stop right wheel
    delay(defaultDelay); // wait
  }
}

void turnRight(int distance){
  Serial.println("Turning Right");
  digitalWrite(leftDirection, LOW); //forward left motor deirection
  digitalWrite(rightDirection, LOW); //reverse right motor deirection
  for (int j = 0; j < distance; j++){
    digitalWrite(leftStep, HIGH); //Step left wheel forwards
    digitalWrite(rightStep, HIGH); //Step right wheel backwards
    delay(defaultDelay); // wait
    digitalWrite(leftStep, LOW); //Stop left wheel
    digitalWrite(rightStep, LOW); //Stop right wheel
    delay(defaultDelay); // wait
  }
}

