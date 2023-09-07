/*Find the absolute value of a number entered through the keyboard.*/

#include<stdio.h>

int main(){
    int number, absolute_number = 0;
    printf("Enter any number: "); scanf("%d", &number);
    if(number<0){
        absolute_number = number*(-1);
        printf("Absolute Number: %d\n", absolute_number);
    }else{
        printf("Absolute Number: %d\n", number);
    }
    return 0;
}