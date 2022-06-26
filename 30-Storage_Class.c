// automatic storage classes 

// #include<stdio.h>
// int main()
// {
//      auto int a=10, b=20;
//      { 
//         auto int a=12,c=15;
//         printf("%d,%d,%d\n",a,b,c); // output: 12,20,15

//         {
//             auto int b=20,d=34;
//             printf("%d,%d,%d,%d\n",a,b,c,d); //output: 12,20,15,34

//         }
//        //  printf("%d%d%d%d",a,b,c,d);// undefined 


//      }
//      //printf("%d%d%d%d",a,b,c,d);
// }

//register storage classes 

// #include<stdio.h>
// int main()
// {
//     register int i;
//     for ( i = 1; i <=10; i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
    
// }

//static storage class

// #include<stdio.h>
// int increment();
// int main()
// {
//     increment();
//     increment();
//     increment();
//     return 0;

// }
// int increment()
// {
//     auto int i=1;   // i dies when control returns from increment()
//     static int j=1;  // j dies when execution of the program complete 
//     i=i+1;
//     j=j+1;
//     printf("%d,%d\n",i,j); 
// }


// External storage classes 

#include<stdio.h>
#include<conio.h>
int i;
void increment();
void decrement();
int main()
{
    printf("\n i=%d",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment()
{
    i=i+1;
    printf("\n On incrementing i=%d\n",i);
}
void decreent()
{
    i=i-1;
    printf("\n On decrementing i=%d\n",i);
}