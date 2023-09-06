/*If a five-digit number is input through the keyboard, write a program o calculate the sun of it digit.*/

#include<stdio.h>

int main(){
    int received_number, sum, last_digit;
    printf("Enter any Five Digit number : ");
    scanf("%d", &received_number);
    sum = 0;
    while(received_number!=0){
        /*
        Step 1: Getting the last digit - Using Modular Division by 10.
        Step 1: Eliminiting the last digit - Using Regular Division by 10. 
        Step 3: Adding up the sum.
        */
        last_digit = received_number%10;
        received_number = received_number/10;
        sum+=last_digit;
    }printf("Sum: %d\n", sum);
    return 0;
}