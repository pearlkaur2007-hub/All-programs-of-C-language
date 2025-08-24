/*
WAPC to input radius and height of a cylinder. 
Calculate the volume of the cylinder.
*/
#include<stdio.h>
#define PI 3.142

int main()
{
    int radius; int height; float volume;
    printf("\nEnter radius and height of cylinder: ");
    scanf("%d %d", &radius, &height);
    volume= (PI*radius*radius*height);
    printf("\nVolume of cylinder: %f", volume);
    return 0;
}
