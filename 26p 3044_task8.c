#include<stdio.h>
int main()

{

double principal = 250000.00;
float rate = 8.5;
int time = 3;
double I = (principal*rate*time)/100.0;
double A = principal+I;
double INSTALLMENT = A/(time*12.0);

printf("=======================BANK LOAN INTEREST SUMMARY=====================\nPrincipal amount:\tPKR %.2lf\nAnnual Interest Rate:\t%.2f%%\nLoan Duration:\t\t%d Years(36 Months)\n--------------------------------------------------------------------------\nTotal Accured Interest:\tPKR %.2lf\nTotal Payable Amount:\tPKR %.2lf\nMonthly Installment:\tPKR %.2lf",principal,rate,time,I,A,INSTALLMENT);

return 0;

}