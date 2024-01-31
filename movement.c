float motionProfiling(float minSpeed, float maxSpeed, float acc, float currentDeg, float distance){
  if (maxSpeed < minSpeed){
    maxSpeed = minSpeed; 
  }
  if (acc == 0){
    acc = INFINITY; //sets acceleration to infinity to avoid dividing by 0 - no limit
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
   // uhhhhh what  
    if (err >  -1.0*sqrt(avgSpeed/acc){
      speed = acc*(err^2) - minSpeed;
    } else if (err = -2.0*sqrt(avgSpeed/acc){
      speed = acc*(err^2) - maxSpeed;
    } else {
      speed = -1.0*maxSpeed;
    }
  }
  else if (err > 0){
    if (err = 
    
  }
  
}
  
