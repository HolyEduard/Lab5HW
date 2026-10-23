#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define _USE_MATH_DEFINES 
#include<math.h>
#define M_PI 3.14159265358979323
double f(double x,double y, double z);
int main(){
    double x = 3.251,y = 0.325,z = 0.466 * pow(10,-4);
    printf("%.6lf",f(x,y,z));
    return 0;
}
double f(double x,double y, double z){
  double up = y * (atan(z)-M_PI/6);
  double down = fabs(x) + 1 / (pow(y,2) +1);
  double c = pow(2,pow(y,x)) + pow(pow(3,x),y) - up/down;
  return c;
}
