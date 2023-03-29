#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 int d;
 int y;
 
 printf("\nEnter a number: ");
 scanf("%d", &n);
 d = n % 5;
 
 if (n % 5 == 0)
 {
       printf("\nThe number can be divided by 5.\n");
 }
 else
 {
   do
   {
       n = n + 1;
   } while( n % 5 != 0)
 }
 
 printf("\nThe number closest to the one you entered that can be divided by 5 is %d.\n", n);
 system("pause");
 return 0;   
}
