/*Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 ) */

#include<stdio.h>

int main(){
    int number = 1, remainder, armstrong_number, temp;
    /*Algorithm For The Program
    -------------------------------
    STEP 1: Generating the numbers from 1 - 500. Using a while loop
    STEP 2: Setting up another while loop for getting us the check for armstrong number
    STEP 3: Taking the last digit of the generated number, Getting the product till it provides the 
            cube of the remainder.
    STEP 4: Summing it up to get the sum
    STEP 5: Repeating STEP 3, STEP 4 - Till the desired repetation is done and the generater number
            turn zero
    STEP 6: Checking if the product generated is equal to the generated number using while loop in
            STEP 2
    */
   while(number>=1 && number<=500){
    temp = number;
    armstrong_number = 0;
    while (temp!=0){
     remainder = temp%10;
     armstrong_number = armstrong_number + remainder*remainder*remainder;
     temp = temp/10;
    }
    // Checking if the number fit the criteria for Armstrong's Number
    if (number == armstrong_number){
        printf("%d: Armstrong Number\n", armstrong_number);
        number++;
    }else{
        number++;
    }
   }
    return 0;
}