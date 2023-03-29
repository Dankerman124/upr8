#include <stdio.h>
#include <stdlib.h>



int main(){
 int r, c, i, j;

 printf("input array rows: ");
 scanf("%d", &r);
 printf("input array columns: ");
 scanf("%d", &c);
 int arr[r][c];
 
 printf("input array elements\n"); 
 for(i = 0; i < r; i++){
       for (j = 0; j < c; j++){
     scanf("%d", &arr[i][j]);
     }

   }



for(i = 0; i < r; i++){
       for (j = 0; j < c; j++){
     if (arr[i][j]%2 == 0 && i == j && arr[i][j] < 10)
         {
                printf("%d ", arr[i][j]);         
                         }
     
     
     
     }

   }



 system("pause");







return 0;
}
