#include <stdio.h>
#include <stdlib.h>

int main()
{
    float AB;
    int xA;
    int yA;
    
    float BC;
    int xB;
    int yB;
    
    float AC;
    int xC;
    int yC;
    
    float perimeter;
    
    printf("\nEnter the coordinates for A:\n");
    printf("\nX = ");
    scanf("%d", &xA);
    printf("\nY = ");
    scanf("%d", &yA);
    
    printf("\nEnter the coordinates for B:\n");
    printf("\nX = ");
    scanf("%d", &xB);
    printf("\nY = ");
    scanf("%d", &yB);
    
    printf("\nEnter the coordinates for C:\n");
    printf("\nX = ");
    scanf("%d", &xC);
    printf("\nY = ");
    scanf("%d", &yC);
    
    AB = (float)sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    BC = (float)sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
    AC = (float)sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
    
    perimeter = AB + BC + AC;
    
    printf("\nAB = %0.2f", AB);
    printf("\nBC = %0.2f", BC);
    printf("\nAC = %0.2f", AC);
    printf("\nThe perimeter of the triangle is %.2f\n", perimeter);
 
 system("pause");
 return 0;   
}
