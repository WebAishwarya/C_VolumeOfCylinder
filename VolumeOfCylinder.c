#include <stdio.h>

int main() 
{
    float radius = 5;
    float height = 20;
    float VolumeOfCylinder;
    
    VolumeOfCylinder = 3.14 * radius * radius * height;
    
    printf("Value of radius is : %.2f\nValue of height is : %.2f\n\n", radius,height);
    printf("Volume of the cylinder : %.2f\n", VolumeOfCylinder);
    
    return 0;
}
