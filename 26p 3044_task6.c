#include<stdio.h>
int main()
{

float radius = 7.5;
float pi = 3.14159;
float diameter = 2*radius;
float circumference = 2*pi*radius;
float area = pi*radius*radius;


printf("\tCIRCLE GEOMETRY REPORT\nGiven radius:\t\t\t%.3f cm\nCalculated diameter:\t\t%.3f cm\nCalculated circumference:\t%.3f cm\nCalculated area:\t\t%.3f sq.cm",radius,diameter,circumference,area);

return 0;

}