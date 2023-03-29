#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br;
    int br2;
    int n;
    int arr[10];
    float average;
    int sum;
    br = 0;
    br2 = 0;
    sum = 0;
    
    do
    {
     br++;
     printf("\nEnter a random number: ");
     scanf("%d", &n);
     
     if (n % 2 == 0)
     {
      br2++;
      arr[br2] = n;    
      sum = sum + n;
     }
     
    } while(br2 < 10);
    
    average = (float)sum / 10;
    
    printf("\nThe total amount of numbers is %d.\n", br);
    printf("\nThe average of the even numbers is %.2f.\n", average);
    
system("pause");
return 0;    
}
