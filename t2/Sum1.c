#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    c = 0;
    
    printf("Enter value for A:\n");
    scanf("%d", &a);
    printf("Enter value for B:\n");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is = %d\n", c);   
    system("pause");
    return 0;
}
