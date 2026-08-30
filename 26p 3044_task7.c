#include<stdio.h>
int main()

{

float vi = 12.5;
float a = 3.2;
float t = 6.0;
float vf = vi+(a*t);
float s = (vi*t)+(0.5*a*t*t);

printf("--------------KINEMATICS MOTION REPORT---------------------\nInitial velocity (vi):\t%.2f m/s\nAcceleration (a):\t%.2f m/s^2\nTime Elapsed(t):\t%.2f\n-----------------------------------------------------------------\nCalculated final velocity (vf):\t%.2f m/s\nCalculated Distance (s):\t%.2f m", vi,a,t,vf,s);

return 0;

}