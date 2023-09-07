/*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.*/

#include<stdio.h>

int main(){
    int integer;
    printf("Enter any number: ");
    scanf("%d", &integer);
    /* Logic Of Code:
    If the integer is not equal to 0, 
    And if the remainder is 0 after dividing the integer 
    by 2, then the number is even  or 
    else the number is odd.
    */
   if(integer!=0){
    if(integer%2==0){
        printf("%d is even!!\n", integer);
    }
    else{
        printf("%d is odd!!\n", integer);
    }
   }
   else{
    printf("0 is not an integer, Try again!!\n");
   }

    return 0;
}