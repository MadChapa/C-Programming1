/* if a five digit number is input through the keyboard wap to calculate the sum of it's digits.
(Hint: use the modulus operator) */

#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0, count;
    printf("\n Enter a five digit Number:");   /*let input num=12345 */
    scanf("%d",&num);

count=num%10;    //count=12345%10   count=5
num=num/10;       // num=12345/10    num=1234
sum=sum+count;    // sum= 0+5        sum=5

count=num%10;     //count=1234%10    count=4
num=num/10;        //num=1234/10      num=123
sum=sum+count;     // sum= 5+4         sum=9

count=num%10;      //count= 123%10     count=3
num=num/10;        //num=123/10      num=12
sum=sum+count;      // sum= 9+3     sum=12

count=num%10;       //count=12%10        count=2
num=num/10;         // num=1/10           num=1
sum=sum+count;       //sum=12+2            sum=14

count=num%10;          //count=1%10     count=1
num=num/10;            //num= 1/10      num=0
sum=sum+count;         // sum=14+1      sum=15
printf("\n Sum of the 5 digits= %d",sum);


    return 0;
}