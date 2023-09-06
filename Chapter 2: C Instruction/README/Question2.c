/*Write a program to receive cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates(r, q)*/
#include<stdio.h>
#include<math.h>

int main(){
    float x, y, q, r;
    printf("Enter the Cartesian Co-Ordinates: ");
    scanf("%f %f", &x, &y);
    /*
    Process to convert Cartesian Co-Ordinates to Polar Co-Ordinates:
    P(x, y): Cartesian Co-ordinates, P(r, q): Polar Co-Ordinates
    Step 1: Finding value of r
        r^2 = x^2 + y^2
        r = sqrt(x^2 + y^2)
    Step 2: Finding value of q
        tan(q) = y/x
        q = tan^(-1)(y/x)
    */
    r = sqrt(pow(x, 2) + pow(y, 2));
    q = atan(y/x);
    printf("The polar Co-ordinates are : (%f, %f)", r, q);
    return 0;
}