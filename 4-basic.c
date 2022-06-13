/* if the marks obtained  by a student in five different subjects are input through the keyboard.
 write a [rogram] to find out the aggregate marks and percentage marks obatined by the student .
 Assume that the maximum marks that can be obtained by a student in each subject is 100.*/

 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int math, ssp, is, cg, tele, agg;
     float per;
     printf("\n Enters the marks obtained by student in each subject:");
     scanf("%d,%d,%d,%d,%d",&math,&ssp,&is,&cg,&tele);

     agg=(math+ssp+is+cg+tele);
     per=(agg/500.0)*100;

     printf("\n Aggregate marks obtained by student in five subject is: %d",agg);
     printf("\n percentage marks obtained by student is: %f",per);

     return 0;



 }