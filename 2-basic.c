/* Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary , and the houde rent allowances is 20% of basic salary. WAP to calculate his gross salary.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float basic_salary, dearness_allowances, rent_allowances, gross_salary;
    printf("Enter basic salary\n");
    scanf("%f", &basic_salary);

    dearness_allowances=0.4*basic_salary;
    rent_allowances=0.2*basic_salary;
    gross_salary=basic_salary+dearness_allowances+rent_allowances;

    printf("\n Dearness allowances is: %f", dearness_allowances);

    printf("\n House rent allowances is: %f", rent_allowances);


    printf("\n Gross salary is: %f", gross_salary);

    getch();
    return 0;
}
