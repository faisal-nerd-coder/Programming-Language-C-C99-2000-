/*Any year is input through the keyboard. Write a program to determine whether the year is a 
leap year or not.(Hint: Use the % (modulus) operator.*/

#include<stdio.h>

int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    /*
    Logic Of Code
    ----------------
    Entered yeard must be fully divisible by 4, are Leap Years 
    Except for centuries,
    Those centuries must be fully divisible by 400, are Leap Years.
    */
   if(year%4==0){
    if (year%100==0){
        if(year%400==0){
            printf("%d is a leap year!!\n", year);
        }else{
            printf("%d is not a leap year!!\n", year);
        }
    }else{
        printf("%d is a leap year!!\n", year);
    }
   }else{
    printf("%d is not a leap year!!\n", year);
   }

    return 0;
}