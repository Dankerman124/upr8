#include <stdio.h>
#include <stdlib.h>

void print(int a[])
{
      int arr[5][5];
      int i;
      int j;
      int k = 0;
      int l;
      int n = 0;
  
      for(i = 0; i < 5; i++)
       {
           for(j = 0; j <5; j++) 
            {
                 arr[i][j] = a[k];  
                 k++; 
            }
       }
   
       for(i = 0; i < 5; i++)
       {
             for(j = 0; j < 5; j++)
             {
                  for(l = i+1; l < 5; ++l)
                  {
                       if (arr[i][j] > arr[l][j])
                       {
                       n = arr[i][j];
                       arr[i][j] = arr[l][j];
                       arr[l][j] = n;      
                       }
                  }
             }
       }
       
        for(i = 0; i < 5; i++)
       {
             printf(" (");
             
             for(j = 0; j < 5; j++)
             {
                   printf("%d, ", arr[i][j]);
             }
             printf(")\n");
       }       
}



int main()
{
    
   int a[25];
   int i;
   
    for(i = 0; i < 25; i++)
    {
         printf("\nArray[%d] = ", i);
         scanf("%d", &a[i]);         
    }

print(a);
 
system("pause");
return 0;    
}
