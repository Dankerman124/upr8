#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float areaCircle;
    float areaTriangle;
    float answer;
    float pp = 3.14;
    
    printf("\nEnter R: ");
    scanf("%f", &r);
    
    areaCircle = pp*r*r;
    areaTriangle = 3*r*r * sqrt(3);
    
    answer = areaTriangle - areaCircle;
    printf("\nThe Triangle area = %0.2f", areaTriangle);
    printf("\nThe Circle area = %0.2f", areaCircle);
    printf("\nThe Answer is %0.2f\n", answer);
    system("pause");\
    return 0;
     
}
