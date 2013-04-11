//Magic numbers
int irLower = 0;
int irUpper = 400;

int getIrReading(){
  return(distance);
}

void detectProximity(){
  leftIr = getIrReading(leftIrId);
  rightIr = getIrReading(rightIrId);
  Serial.print("Left: ");
  Serial.print(leftIr);
  Serial.print(" - Right: ");
  Serial.println(rightIr);
  if (leftIr < proximityThreshold){
    turnIr(arbritraryMovement);
  }
  if (rightIr < proximityThreshold){
    turnLeft(arbritraryMovement);
  }
}
bool validateIr(){
  if(leftIr < irUpper && leftIr > irLower){
    if(rightIr < irUpper && rightIr > irLower){
      return true;
    }else{
      return false;
    }
  }
}
