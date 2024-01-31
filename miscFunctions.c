float getTrueDegrees(int theMotorEncoder){
  if (theMotorEncoder){
    return getMotorEncoder(right);
  }
  else{
    return getMotorEncoder(left)*-0.99;   
  }
}

float getAbsoluteDegrees(int theMotorEncoder){ 
  if (theMotorEncoder == true){
    return getTrueDegrees(theMotorEncoder) - absoluteRight;
  }
  else{
    return getTrueDegrees(theMotorEncoder) - absoluteLeft;
  }
} // wall/line squaring stuff

float getRelativeDegrees(){
  if (theMotorEncoder){
    return getAbsoluteDegrees(theMotorEncoder) - relativeBaseRight;
  }
  else{
    return getAbsoluteDegrees(theMotorEcoder) - relativeBaseLeft;
  }
}

void resetRelative(){
  relatievBaseLeft = getAbsoluteDegrees(LEFT);
  relativeBaseRight = getAbsoluteDegrees(RIGHT);
}

void resetMotors(){
  relativeBaseLeft = 0;
  relativeBaseRight = 0;
  absoluteLeft = getAbsoluteDegrees(LEFT);
  absoluteRight = getAbsoluteDegrees(RIGHT);
}

void setSpeeds(float rSpeed, float lSpeed){
  if (rSpeed>100){
    lSpeed *= 100/rSpeed;
    rSpeed = 100;
  }else if (rSpeed<-100){
    lSpeed *= -100/rSpeed;
    rSpeed = -100;
  }

  if (lSpeed>100){
    rSpeed *= 100/lSpeed;
    lSpeed = 100;
  } else if (lSpeed<-100){
    rSpeed *= -100/lSpeed;
    lSpeed = -100;
  }

  // !!finish and include the speed adjustment based on the ratio 
}

float degToCM(float deg){
  float cm = deg*wheelDiameter 
}



