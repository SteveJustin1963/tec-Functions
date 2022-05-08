
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    //Taylor series
    y = 1 - x*x/2 + x*x*x*x/24;
    
    printf("The value of sin(%f) is %f.", x, y);
    
    return 0;
}
