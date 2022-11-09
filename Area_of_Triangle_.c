#include<stdio.h>
#include<math.h>
 
int main()
{
    float a, b, c, s, area;
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
 
    //Calculate area of triangle
    area = sqrt(s*(s-a)*(s-b)*(s-c));
 
    //Area with 2 digits of precision
    printf("%.2f
",area);
 
    return 0;
}