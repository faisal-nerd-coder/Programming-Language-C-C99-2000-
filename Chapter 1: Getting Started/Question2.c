/*The length and breadth of a rectangle and radius of a circle are input through keyboard. write a program to 
calculate area and perimeter of the rectangle, and the area and the circumference of the circle*/

#include<stdio.h>

int main(){
    float length, breadth, radius, area_rectangle, perimeter, area_circle, circumference, pie;
    printf("Length, Breadth, Radius : ");
    scanf("%f %f %f", &length, &breadth, &radius);
    // Area Of Rectangle : L x B, Perimeter : 2(L+B)
    // Area of Circle : (pie x R^2), Circumference : 2 x pie x R
    // pie : 3.14
    pie = 3.14;
    area_rectangle = length*breadth;
    perimeter = 2*(length+breadth);
    area_circle = pie*(radius*radius);
    circumference = 2*pie*radius;
    printf("Area of Rectangle: %.2f\nPerimeter of Rectangle: %.2f\nArea of Circle: %.2f\nCircumference of Circle: %.2f\n",
            area_rectangle, perimeter, area_circle, circumference);
    // %.2f : Indicates decimal valus upto two places, /n : Gives a new line
    return 0;
}