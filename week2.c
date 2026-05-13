#include <stdio.h>
int main()
{
    //float studentGPA; int result = 5; char final_grade;

    //int radius = 67;
    //printf("Circumference = %f\nArea = %f\n\n", 3.142 * radius * 2, 3.142 * radius * radius);

    //float tempC = 37.5;
    //printf("Celcius = %f\nFarenheit = %f\n\n", tempC, tempC * 1.8 + 32);

    /*float a=-1, b=2, c=3, d=7.5, e=10.5, mean, vari;
    mean = (a+b+c+d+e) / 5;
    vari = ((a-mean)*(a-mean) + (b-mean)*(b-mean) + (c-mean)*(c-mean) +
            (d-mean)*(d-mean) + (e-mean)*(e-mean)) / 5;
    printf("The five numbers are %f, %f, %f, %f, %f.\n", a, b, c, d, e);
    printf("The mean is %f and the variance is %f.", mean, vari);*/

    float a = -3, b = 4, c = 3;
    float slope = -a/b, yinter = -c/b;
    printf("The value of a is %f.\n", a);
    printf("The value of b is %f.\n", b);
    printf("The value of c is %f.\n", c);
    printf("The slope is %f.\n", slope);
    printf("The y-intercept is %f.\n", yinter);

    return 0;
}
