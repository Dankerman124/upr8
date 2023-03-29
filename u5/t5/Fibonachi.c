#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int F1 = 0;
    int F2 = 1;
    int F;
    int i;
    
    printf("\nEnter the total amount of numbers: ");
    scanf("%d", &N);
    
    printf("%d, %d, ", F1, F2);
    
    for(i = 3; i <= N; i++)
    {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
        printf("%d, ", F);       
    }
    
    
system("pause");
return 0;    
}
