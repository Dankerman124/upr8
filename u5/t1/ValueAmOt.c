#include <stdio.h>
#include <stdlib.h>

int main()
{
float Value;
float AmOt;
int br;
br = 0;
float installments = 0;

printf("\nEnter the value of the products: ");
scanf("%f", &Value);
printf("\nEnter the yearly AmOt in percentages: ");
scanf("%f", &AmOt);

installments = Value * (AmOt / 100);

do
{
   br++;
   Value = Value - installments;
} while(Value > 0);

printf("\nIt will take a total of %d years to completely cover the costs.\n", br);

system("pause");
return 0;    
}
