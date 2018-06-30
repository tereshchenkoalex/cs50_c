#include <stdio.h>
#include <cs50.h>

#define pi 3.14159265359

float circle_area(float input);
float circle_perimeter(float input);

int main(void)
{
    printf("Please, enter the radius of a circle as positive float number: ");
    float r = GetFloat();
    float area_result;
    float perimeter_result;
    if (r > 0.0)
    {
    area_result = circle_area(r);
    printf("Area of the circle is: %.4f\n", area_result);
    perimeter_result = circle_perimeter(r);
    printf("Perimeter of the circle is: %.4f\n", perimeter_result);
}
    else
    printf("I said positive float number, and now I'm sad\n");
}


float circle_area(float input)
{
    float output = input * input * pi;
    return output;
}

float circle_perimeter(float input)
{
    float output = input * 2 * pi;
    return output;
}
