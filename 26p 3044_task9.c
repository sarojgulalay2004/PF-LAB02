#include<stdio.h>
int main()
{
    
    double basic_salary = 85000.00;
    float HRA = (0.20*basic_salary);
    float MA =  (0.10*basic_salary);
    float gross_salary = basic_salary+HRA+MA; 
    float income_tax_deduction = (0.05*gross_salary);
    float net_salary =  gross_salary-income_tax_deduction;
    
    
    printf("=======================MONTHLY SALARY SLIP========================\nBasic Salary:\t\t\tPKR %.2lf\nHouse Rent Allowance(20%%):\tPKR %.2f\nMedical Allowance(10%%):\t\tPKR %.2f\n------------------------------------------------\nGross Salary:\t\tPKR %.2f\nTax Deduction(5%%):\tPKR %.2f\n------------------------------------------------\nNet Payable Salary:\tPKR %.2f\n====================================================",basic_salary,HRA,MA,gross_salary,income_tax_deduction,net_salary);
    
    return 0;
}