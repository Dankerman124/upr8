#include <stdio.h>
#include <stdlib.h>
int main()
{
    float velocity_mph;
    float velocity_kmph;
    float MILES_INTO_KILOMETERS;
    MILES_INTO_KILOMETERS = 1.60934;
    
    printf("\nEnter the speed of the plane in miles per hour: ");
    scanf("%f", &velocity_mph);
    velocity_kmph = velocity_mph * MILES_INTO_KILOMETERS;
    printf("\nThe speed of the plane in kilometers per hour is %.2f\n", velocity_kmph);
    system("pause");
    return 0;   
}
