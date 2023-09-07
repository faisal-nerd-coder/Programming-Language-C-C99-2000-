/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three 
points fall on one straight line.*/

#include<stdio.h>

int main(){
    int x, y, x1, y1, x2, y2, x3, y3, slope1, slope2;
    printf("\nEnter (x1, y1):"); scanf("%d %d", &x1, &y1);
    printf("\nEnter (x2, y2):"); scanf("%d %d", &x2, &y2);
    printf("\nEnter (x3, y3):"); scanf("%d %d", &x3, &y3);
    /*Logic Behind The Code 
    ----------------------------
    Both the slopes must be equal to eachother for three lines to be in a straight line.
    Formula For Finding Slopes
    slope1 = (y2-y1)/(x2-x1), slope2 = (y3-y2)/(x3-x3)
    */
   slope1 = (y2-y1)/(x2-x1); 
   slope2 = (y3-y2)/(x3-x3);
   if(slope1==slope2){
    printf("Points (%d, %d), (%d, %d) and (%d, %d) lies on the same straight line.\n", x1, y1, x2, y2, x3, y3);
   }else {
    printf("Points (%d, %d), (%d, %d) and (%d, %d) does not lie on the same straight line.\n", x1, y1, x2, y2, x3, y3);
   }
    return 0;
}