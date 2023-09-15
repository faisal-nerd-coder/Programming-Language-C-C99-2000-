/*Write a program to find the range of a set of numbers. Range 
is the difference between the smallest and biggest number in 
the list.*/

#include<stdio.h>
int main(){
    int min, max, number, range, counter = 1;
    printf("Enter min & max: "); scanf("%d %d", &min, &max);
    range = max - min;
    while (counter<range){
        number = min + counter;
        printf("%d, ", number);
        counter++;
    }
    return 0;
}