#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;
 int b;
 int c;   
 float d;
 
 printf("Enter A: ");
 scanf("%d", &a);
 printf("\nEnter B: ");
 scanf("%d", &b);
 printf("\nEnter C: ");
 scanf("%d", &c);
 d = (float)(a+b+c)/3;
 printf("D = %0.2f\n", d);
 system("pause");
 return 0;
}
