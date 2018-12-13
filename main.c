#include <stdio.h>
#include <stdlib.h>

int main()
{

float a,b;
float c;

printf("Enter the value of the numerator: ");
scanf("%d",&a);

printf("Enter the value of the denominator: ");
scanf("%d",&b);

if (b == 0)
printf("ERROR: Cannot divide by zero\n");
else
{
    c = (a / b);
    printf("%.2f", c);
}

    return 0;
}
