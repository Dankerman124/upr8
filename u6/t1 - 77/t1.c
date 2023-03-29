#include <stdio.h>
#include <stdlib.h>


int arraySum(int a[],int n)
{
 int sum = 0; int i;
 for(i = 0; i < n; i++)
 {
  sum = sum + a[i];       
 }   
 return sum;
}

int main()
{
 int a[7];
 int i;
 int sum;
 
 for(i = 0; i < 7; i++)
{
 printf("\nArray[%d] = ", i);
 scanf("%d", &a[i]);         
}

sum = arraySum(a, 7);
printf("The total sum of the numbers in the array is %d\n", sum);

system("pause");
return 0;    
}
