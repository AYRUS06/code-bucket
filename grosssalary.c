#include <stdio.h>

int main()
{
    float basic_salary, covid;
    float hra, da;
    float gross_salary;
    printf("enetr the basic salary of employee \n");
    scanf("%f", &basic_salary);
    printf("\nEnter the PERCAENTAGE OF HIS SALARY he wants to give to Covid Relief Funds Intiated by PM \n");
    scanf("%f", &covid);
    if (basic_salary < 500000)
    {
        hra = basic_salary * 0.1;
        da = basic_salary * 0.5;
    }
    else if (500000 <= basic_salary && basic_salary < 1000000)
    {
        hra = basic_salary * 0.2;
        da = basic_salary * 0.6;
    }
    else if (1000000 <= basic_salary && basic_salary< 15000000)
    {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.7;
    }
    else if (15000000 <= basic_salary)
    {
        hra = basic_salary * 0.3;
        da = basic_salary * 0.8;
    }
    gross_salary = basic_salary + hra + da - basic_salary * (covid / 100);
    printf("\nThe GROSS SALARY of Employee is : %f", gross_salary);
    return 0;
}