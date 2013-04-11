//Magic numbers
int sonarLower = 0;
int sonarUpper = 400;

int getSonarReading(int trigger, int echo){
  int duration, distance;
  digitalWrite(trigger, HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  return(distance);
}

void detectProximity(){
  leftSonar = getSonarReading(sonar1TrigPin, sonar1EchoPin);
  rightSonar = getSonarReading(sonar2TrigPin, sonar2EchoPin);
  Serial.print("Left: ");
  Serial.print(leftSonar);
  Serial.print(" - Right: ");
  Serial.println(rightSonar);
  if (leftSonar < proximityThreshold){
    turnRight(arbritraryMovement);
  }
  if (rightSonar < proximityThreshold){
    turnLeft(arbritraryMovement);
  }
}
bool validateSonar(){
  if(leftSonar < sonarUpper && leftSonar > sonarLower){
    if(rightSonar < sonarUpper && rightSonar > sonarLower){
      return true;
    }else{
      return false;
    }
  }
}
