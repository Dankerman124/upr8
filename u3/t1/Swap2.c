#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    
    printf("\n Enter A: ");
    scanf("%d", &a);
    printf("\n Enter B: ");
    scanf("%d", &b);
    
    a = a - b;
    
    b = a + b;
    
    a = b - a;
    
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    system("pause");
    return 0;
}
