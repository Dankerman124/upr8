#include <stdio.h>
#include <stdlib.h>

int main()
{
    float suma;
    float lih;
    float installments;
    int br = 0;
    
    printf("\nEnter SUM: ");
    scanf("%f", &suma);
    printf("\nEnter Lih in percentages: ");
    scanf("%f", &lih);
    
    installments = suma * (lih / 100);
    do
    {
       br++;
       suma = suma + installments;
    } while ( suma < 1000000);
    
    printf("\nIt will take a total of %d years for the sum to reach 1,000,000.\n", br);
system("pause");
return 0;    
}
