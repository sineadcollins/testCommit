#include <stdio.h>

int main()
{//up to and including Task 10
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //Note change of %d to %f
    y = (x+5)/(x-1);//Changed x+2 to x+5
    printf("y: %f\n", y);
    return 0;
}
