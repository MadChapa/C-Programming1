// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int sub1,sub2,sub3,sub4,sub5,per;
//     printf("\n Enter the marks obtained by student in five subjects:");
//     scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
//     per=(sub1+sub2+sub3+sub4+sub5)*100/500;

//     if (per>=60)
//     {
//         printf("\n First Division");
//     }
//     else
//     {
//         if (per>=50)
//         {
//             printf("\n Second Division");
//         }
//         else
//         {
//             if (per>=40)
//             {
//                 printf("\n Third Division");
//             }

//             else
//             {
//                 printf("\n Fail");
//             }
            
//         }
        
//     }
//     return 0;
// }


//Alternative Way:

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int sub1,sub2,sub3,sub4,sub5,per;
//     printf("\n Enter the marks obtained by student in five subjects:");
//     scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
//     per=((sub1+sub2+sub3+sub4+sub5)/500)*100;

//     if (per>=60)
//     {
//         printf("\n First Division");
//     }
//     if ((per>=50)&&(per<60))
//     {
//         printf("\n Second Division");
//     }
    
//     if ((per>=40)&&(per<50))
//     {
//         printf("\n Third Division");
//     }
//     if (per<40)
//     {
//         printf("\n Fail");
//     }
    
    
//     return 0;
// }


// using else if ladder 

#include<stdio.h>
#include<conio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,per;
    printf("\n Enter the marks obtained by student in five subjects:");
    scanf("%d%d%d%d%d", &sub1,&sub2,&sub3,&sub4,&sub5);
    per=((sub1+sub2+sub3+sub4+sub5)/500)*100;

    if (per>=60)
    {
        printf("\n First Division");
    }
    else if (per>=50)
    {
        printf("\n Second Division!");
    }
    else if (per>=40)
    {
        printf("\n Third Division!");
    }
    else
     printf("\n Fail");
    
    
    return 0;
}