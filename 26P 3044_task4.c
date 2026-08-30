#include<stdio.h>
int main()
{
    int a = 42;
    char b = 'M';
    double c = 98.765432;
    float d = 3.141590;

       printf("TYPE NAME\tVARIABLE VALUE\t\tSIZE IN MEMORY\n------------------------------------------------------------\nCHAR\t\t\\'%c\'\t\t\t1 byte(s)\nINT\t\t%d\t\t\t4 byte(s)\nfloat\t\t%f\t\t4 byte(s)\nDOUBLE\t\t%lf\t\t8 byte(s)", b,a,d,c);

return 0;

}
