#include <stdio.h>
#include <stdlib.h>


float arrayAVG(float a[], int n)
{
  int i;
  float avg = 0;
  for(i = 0; i < n; i++)
  {
    avg = avg + a[i];         
  }
  avg = avg / 7;
  return avg;
}

int main()
{
    float avg;
    int i;
    float a[7];
    
for(i = 0; i < 7; i++)
{
 printf("\nArray[%d] = ", i);
 scanf("%f", &a[i]);         
}

avg = arrayAVG(a, 7);
printf("\nThe average number in the array is %.2f\n", avg);
    
system("pause");
return 0;    
}
