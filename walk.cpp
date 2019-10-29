#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  float pi = 2.0*asin(1.0);
  float theta = 0.0;
  float x = 0.0;
  float y = 0.0;
  float distancia;
  
  srand48(8);
  distancia = sqrt(pow(x,2)+pow(y,2));
  while (distancia<100){  
    theta = drand48()*2.0*pi;
    x = x + cos(theta);
    y = y + sin(theta);
    std::cout << x << " " << y << std::endl;
    distancia = sqrt(pow(x,2)+pow(y,2));
    
  }
  
  return 0;
}

