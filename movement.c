float motionProfiling(float minSpeed, float maxSpeed, float acc, float currentDeg, float distance){
  if (maxSpeed < minSpeed){
    maxSpeed = minSpeed; 
  }
  if (acc == 0){
    acc = INFINITY; //sets acceleration to infinity to avoid dividing by 0
  }
  bool negative = false;
  float speed = minSpeed;
  if (dist < 0){
    dist *= -1.0;
    currentDeg *= -1.0;
    negative = true;
  }
  float err = dist-curretDeg;
  avgSpeed = (maxSpeed - minSpeed)/2.0;

  if (err < 0){
    
  }
  
}
  
