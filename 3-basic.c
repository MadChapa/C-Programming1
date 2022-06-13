/* The distance between two cities (in Km)is input through the keyboard . wap to convert and print this distance in meters, feet, incihes and centimeter. */
#include<stdio.h>
#include<conio.h>>
int main()
{
    float dist_km,meter, feet, inch, centi;
    printf("\n Enter the distance in km");
    scanf("%f", &dist_km);

    meter=dist_km*1000;
    feet=meter*3.28084;
    inch=feet*12;
    centi=inch*2.54;

    printf("\n Conversion of distance into meter is: %f", meter);
    printf("\n Conversion of distance into feet is: %f", feet);
    printf("\n Conversion of distance into inch is: %f", inch);
    printf("\n Conversion of distance into centimeter is: %f", centi);





    return 0;
}
