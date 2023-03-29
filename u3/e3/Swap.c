#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    
    printf("\n Enter A: ");
    scanf("%d", &a);
    printf("\n Enter B: ");
    scanf("%d", &b);
    
    c = a;
    a = b;
    b = c;
    
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    system("pause");
    return 0;
}
