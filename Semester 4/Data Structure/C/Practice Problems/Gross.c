// WAP to find gross salary
#include <stdio.h>

int main()
{
    float baseSalary, TA_per, DA_per, pf_per;
    char name[20];
    printf("Enter Employee Name:- ");
    scanf("%s",name);

    printf("Enter base salary:- ");
    scanf("%f", &baseSalary);

    printf("Enter Travel allowance in percentage:- ");
    scanf("%f", &TA_per);

    printf("Enter Daily allowance in percentage:- ");
    scanf("%f", &DA_per);

    printf("Enter provident fund in percentage:- ");
    scanf("%f", &pf_per);
    
    float DA,Pf,TA;
    DA = baseSalary*(DA_per/100);

    TA = baseSalary*(TA_per/100);

    Pf = baseSalary*(pf_per/100);

    float gross_Salary = baseSalary + DA + TA + Pf;

    printf("Employee name: %s\nGross salary: %.2f\nDaily allowance: %.2f\nTravel allowance: %.2f\nPF: %.2f",name,gross_Salary,DA,TA,Pf);
    
    return 0;
}
