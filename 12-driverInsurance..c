#include<stdio.h>
#include<conio.h>
int main()
{
    char ms, sex;
    int age;

    printf("\n Enter the maritial status, sex and age of the driver:\n");
    scanf("%c%C%d",&ms,&sex,&age);


if ((ms=='M')|| (ms=='U'&& sex=='M' && age>30)||(ms=='U' && sex=='F' && age>25))
{
    printf("\n Driver should be insured");
}
else
{
    printf("\n Driver should not be insured");
}

}
