/*Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.v(Hint: Use sqrt( ) and pow( ) functions)*/

#include<stdio.h>
#include<math.h>

int main(){
    int x1 = 0, y1 = 0, x2, y2, distance, radius;
    printf("Enter the points(x, y): "); scanf("%d %d", &x2, &y2);
    printf("Enter the radius(r): "); scanf("%d", &radius);
    /*Logic Of Program
    -------------------
    If distance between point(x, y) and (0, 0) > radius : Point outside the circle
    If distance between point(x, y) and (0, 0) < radius : Point inside the circle
    ----
    Distance Formula = D = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    */
   distance = sqrt(pow((x2 - x1), 2) + ((y2 - y1), 2));
   if(distance>radius){
    printf("Point(%d, %d) is outside the circle", x2, y2);
   }else if (distance == radius){
    printf("Point(%d, %d) is on the circumference", x2, y2);
   }else{
    printf("Point(%d, %d) is inside the circle", x2, y2);
   }
    return 0;
}