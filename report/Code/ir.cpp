/*
Infrared reading distance via light intensity
*/
void detectProximity(){
  leftIr = getIrReading(leftIrId);
  rightIr = getIrReading(rightIrId);
}

