#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x;
    float y;
    x = 12;
    y = 6;
    float part1;
    float part2;
    float part3;
    float part4;
    float finalUp;
    float answer;
    float answer2;
    
    part1 = 1 / (pow(x,2) + 1);
    part2 = pow(y,2) / (pow(y,2) - 1);
    part3 = 5 / (pow(x,2) - pow(y,2));
    part4 = 1 / (pow(x,2) - pow(y,2));
    finalUp = part1 + part2 + part3;
    answer = finalUp / part4;
    answer2 = (1 / (pow(x,2) + 1) + pow(y,2) / (pow(y,2) - 1) + 5 / (pow(x,2) - pow(y,2))) / (1 / (pow(x,2) - pow(y,2)));
    
    printf("The solution to the problem is %.2f.\n", answer);
    printf("The solution to the problem is %.2f.\n", answer2);
    system("pause");
    return 0;      
}
