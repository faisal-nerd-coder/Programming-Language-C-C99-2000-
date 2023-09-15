/* Write a program to find the factorial value of any number 
entered through the keyboard. */

#include<stdio.h>

int main(){
    int num, fact = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    int temp = num;
    if (num>0){
          while (temp>0){
            fact = fact*temp;
            temp--;
        }printf("Factorial of %d: %d/n", num, fact);
    }
    return 0;
}