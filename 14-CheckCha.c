/*if a characater is entered through the keyboard, wap to determine whether the character is a capital letter 
, a digit or a special symbol. */

#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("\n Enter the Character :");
    scanf("%c",&ch);
    ascii=ch;

    printf("Ascii vslue of %c is: %d\n",ch,ascii);

    //To check capital letter

    if (ascii>=65 && ascii<=90)
    {
        printf("\n You Entered  Capital Letter\n");
    }
     //To check small letter

    else if(ascii>=97 && ascii<=122)
    {
        printf("\n You Entered  Small Letter\n");
    }
        //To check digit

    else if (ascii==0 && ascii<=9)
    {
        printf("\n You Entered digit\n");
    }
    //for special symbols
    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 
    || ascii>=123 && ascii<=127)
    {
        printf("\n You entered Special symbol\n");
    }
    return 0;

}