#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    float x = 0.0;
    float f;
    float h;
    printf("Vvedite shag: \n");
    scanf("%f",&h);

    printf("\n");
    do {
        if (x > 2)
            x = 2;
        if (x<=1)
        f = sqrt(x + 1) - sqrt(x) - 0.5;
    else
        f = exp(-x-(1/x));
    printf("%f %f\n", x, f);
    x = x + h;
    } while (x<(2 + (h/2)));
    /*for(x;x < (2+(h/2)); h)
    {
        if (x>2)
            x = 2;
        if (x<=1)
        f = sqrt(x+1) - sqrt(x) - 0.5;
    else 
        f = exp(-x-(1/x));
    printf("%f %f\n", x, f);
    x = x + h;
    }*/
    
}