#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[100];
    char *n;
    char facNumber[9];
    printf("Enter your name: ");
    n = fgets(name, 100, stdin);
    printf("\nEnter your Facnumber: ");
    scanf("%s", &facNumber);
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("Your name is %s\n", n);
    printf("You are %d years old.\n", age);
    printf("Your fac number is %s\n", facNumber);
    system("pause");
    return 0;   
}
