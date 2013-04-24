//Magic numbers
int leftIrId = 0;
int rightIrId = 1;
int irLower = 0;
int irUpper = 400;

int getIrReading(int sensor){
  return(distance);
}

void detectIrProximity(){
  leftIr = getIrReading(leftIrId);
  rightIr = getIrReading(rightIrId);
  /*
  if (leftIr < proximityThreshold){
    turnRight(arbritraryMovement);
  }
  if (rightIr < proximityThreshold){
    turnLeft(arbritraryMovement);
  }
  */
  if(validateIr){
    return true;
  }else{
    detectIrProximity();
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

void convertIrToDistance(){
  leftIr = 3*pow((leftIr - 3),4);
  rightIr = 3*pow((rightIr - 3),4);
}
