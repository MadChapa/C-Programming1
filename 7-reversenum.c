/* if a five digit number is input through the keyboard, wap to reverse the number */

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,reversenum=0, count;
    printf("\n Enter a five digit Number:");   /*let input num=12345 */
    scanf("%d",&num);

count=num%10;    //count=12345%10   count=5
num=num/10;       // num=12345/10    num=1234
reversenum=reversenum+count*10000;    // sum= 0+5        sum=5

count=num%10;     //count=1234%10    count=4
num=num/10;        //num=1234/10      num=123
reversenum=reversenum+count*1000;     // sum= 5+4         sum=9

count=num%10;      //count= 123%10     count=3
num=num/10;        //num=123/10      num=12
reversenum=reversenum+count*100;      // sum= 9+3     sum=12

count=num%10;       //count=12%10        count=2
num=num/10;         // num=1/10           num=1
reversenum=reversenum+count*10;       //sum=12+2            sum=14

count=num%10;          //count=1%10     count=1
num=num/10;            //num= 1/10      num=0
reversenum=reversenum+count*1;         // sum=14+1      sum=15
printf("\n Reverse of the five digit number= %d",reversenum);


    return 0;
}