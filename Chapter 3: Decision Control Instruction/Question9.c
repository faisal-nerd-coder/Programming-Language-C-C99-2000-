/*Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0). */

#include<stdio.h>

int main(){
    int x, y;
    printf("Enter point(x, y): ");
    scanf("%d %d", &x, &y);
    /*Logic Behind The Code
    -----------------------
    If (x, y) = (0, 0) : Point lies on the origin
    If (x, y) = (x=0, y>0) : Point lies on Y-Axis
    If (x, y) = (x>0, y=0) : Point lies on X - Axis
    */
   if(x == 0 && y == 0){
    printf("Point is at origin\n");
   }else if (x == 0 && y > 0){
    printf("Point (%d, %d) is at Y-Axis\n");
   }else if (x>0 && y == 0 ){
    printf("Point(%d, %d) lies on X-Axis\n");
   }else{
    printf("Lol!!\n");
   }

    return 0;
}