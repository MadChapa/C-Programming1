// Example of Macro Expansion

// #include<stdio.h>
// #include<conio.h>
// #define x 234
// int main()
// {
//     int a;
//     a=4*x;
//     printf("%d\n",a);

//     #undef x  // undef use garisake paxi teha vanda tala ko code run hudaina 

//     printf("%d",x);

// }



// conditional Compilation 

// #include<stdio.h>
// #include<conio.h>
// #define x 234
// int main()
// {
//     #ifdef x            // #ifndef: use garni vanea output Hi aauxa 
//     printf("Hello");

//     #else
//     printf("Hi");
//     #endif            // conditional compilation lai end pani garnu parxa

// }



// #include<stdio.h>
// #include<conio.h>
// #define x -2
// int main()
// {
//     #if x>100           // #ifndef: use garni vanea output Hi aauxa 
//     printf("Hello");

//     #elif x<0
//     printf("bye");

//     #else
//     printf("Hi");
//     #endif            // conditional compilation lai end pani garnu parxa

// }


// Pragma Directives


#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1   // suru mah function1 execute hunxa ani main hunxa 
#pragma exit fun2       // last mah fun2 execute hunxa vaneko ho 
int main()
{
    printf("\n Inside main");
    return 0;
}
void fun1()
{
    printf("\n Inside fun1");

}
void fun2()
{
    printf("\n Inside fun2");

}