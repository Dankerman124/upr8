#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y;
    float b;
    float k;
    float x;
    
    printf("\nEnter B: ");
    scanf("%f", &b);
    printf("\nEnter X: ");
    scanf("%f", &x);
    printf("\nEnter K: ");
    scanf("%f", &k);
    
    y = b * x + k;
    printf("y = %.2f\n", y);
    
    
 system("pause");
 return 0;   
}
