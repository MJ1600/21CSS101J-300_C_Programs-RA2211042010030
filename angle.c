#include <math.h>

 #define PI 3.1416
 #define MAX 180
 
int main ( )
 {
 int angle;
 float x,y;
 angle = 0;
 printf(ā Angle Cos(angle)\n\nā);
 while(angle <= MAX)
 {
 x = (PI/MAX)*angle;
 y = cos(x);
 printf(ā%15d %13.4f\nā, angle, y);
 angle = angle + 10;
 }
 }
