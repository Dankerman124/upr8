#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brPos = 0;
    int brNeg = 0;
    int N = 0;
    int inter;
    
    printf("\n Enter the total amount of integers: ");
    scanf("%d", &N);
    
    do
    {
          N--;   
          printf("\nEnter integer: ");
          scanf("%d", &inter);
          
          if ( inter > 0)
          {
               brPos++;
          }  
          else
          {
             brNeg++; 
          }
     
    } while ( N > 0);
    
    printf("\nThere are a total of %d positive numbers.\n", brPos);
    printf("\nThere are a total of %d negative numbers.\n", brNeg);
    
system("pause");
return 0;    
}
