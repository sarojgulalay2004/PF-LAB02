#include<stdio.h>
int main()
{
    
   float pf_marks = 88.0;
    int pf_credit_hours = 3;
   float calculus_marks = 76.5;
    int calculus_credit_hours = 3;
   float phy_marks = 82.0;
    int phy_credit_hours = 2;
    float total_weighted_score =(88.0*3)+(76.5*3)+(82.0*2); 
    int total_credit_hours = 3+3+2;
    float weighted_avg_perc = total_weighted_score/total_credit_hours;
    
    printf("====================SEMESTER ACADEMIC REPORT===================\nCourse\t\t\tCredit Hours\t\tObtained Marks\n-------------------------------------------------------\nProgramming Fundamental:\t%d\t\t\t%.2f\nCalculus:\t\t\t%d\t\t\t%.2f\nApplied Physics:\t\t%d\t\t\t%.2f\n-------------------------------------------------\nTotal Credits: %d\t\tWeighted Average: %.2f%%\n=================================================", pf_credit_hours,pf_marks,calculus_credit_hours,calculus_marks,phy_credit_hours,phy_marks,total_credit_hours,weighted_avg_perc);
    
    return 0;
}
