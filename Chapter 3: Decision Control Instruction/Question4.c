/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed 
number and to determine whether the original and reversed numbers are equal or not.*/

#include<stdio.h>

int main(){
    int entred_integer, reversed_number, last_digit, sum, temp;
    printf("Enter any 5 digit number : ");scanf("%d", &entred_integer);
    /* Logic Behind The Program
    ------------------------------
    Step 1: Number is entered and stored.
    Step 2: Getting the last digit of the number.
    Step 3: Adding it up to the form a new reversed number.
    */
   sum = 0;
   temp = entred_integer;
   while (temp!=0){
    last_digit = temp%10;
    temp/=10;
    sum = sum*10 + last_digit;
   }
   // Checking whether the old entered number and new sum is same or not!!
   if (sum == entred_integer){
    printf("Entered number and reversed number are same.\n");
   }else{
    printf("Entered number and printed number are not same.\n");
   }

    return 0;
}