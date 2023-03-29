#include <stdio.h>
#include <stdlib.h>
int main()
{
    float miles;
    float kilometers;
    
    
    printf("Convert miles to kilometers.\n");
    printf("Enter a distance in miles = ");
    scanf("%f", &miles);
    kilometers = miles * 1.609344;
    printf("Its equal to %.2f kilometers \n", kilometers);
    system("pause");
    return 0;   
}
