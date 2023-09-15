/*Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another.*/

#include<stdio.h>

int main(){
    int base, index, product = 1;

    printf("Enter Base and Index: "); scanf("%d %d", &base, &index);
    while (index>0)
    {   
        product = product*base;
        index--;
    }
    printf("Answer : %d\n", product);
    return 0;
}