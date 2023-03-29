#include <stdio.h>
#include <stdlib.h>
int main()
{
    float C;
    float F;
    
    printf("Convert Celcius to Fahrenhait.\n");
    printf("Enter a temperature in Celcius = ");
    scanf("%f", &C);
    F = C*1.8 + 32;
    printf("Its equal to %.2f Fahrenheit.\n", F);
    system("pause");
    return 0;   
}
