#include <stdio.h>
#include <conio.h>
main()
{
    float Base,height,area;
    
    printf("enter Base:");
    scanf("%f",&Base);
    printf("enter height:");
    scanf("%f",&height);
    area= 0.5*Base*height;
    printf("Area is: %4f",area);
}