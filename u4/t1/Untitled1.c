#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xC;
    int yC;
    int r;
    int xP;
    int yP;
    int answer;
    int Rad;
    
    printf("\nEnter the circle X coordinate:\n");
    printf("\nX = ");
    scanf("%d", &xC);
    
    printf("\nEnter the circle Y coordinate:\n");
    printf("\nY = ");
    scanf("%d", &yC);
    
    printf("\nEnter the radius of the circle:\n");
    printf("\nR = ");
    scanf("%d", &r);
    
    printf("\nEnter the point X coordinate:\n");
    printf("\nX = ");
    scanf("%d", &xP);
    
    printf("\nEnter the point Y coordinate:\n");
    printf("\nY = ");
    scanf("%d", &yP);
    
    answer = (xP - xC) * (xP - xC) + (yP - yC) * (yP - yC);
    Rad = r * r;
    
    if(answer <= Rad)
    {
    printf("\nThe point is within the area of the circle.");
    }
    else
    {
    printf("\nThe point is not within the area of the circle.");
    }
    
    system("pause");
    return 0;   
}
