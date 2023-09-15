/*Write a program to find the octal equivalent of the entered number.*/

#include<stdio.h>

int main(){
    int entered_number, remainder, sum = 0, octal_number = 0;
    printf("Enter Any Number: "); scanf("%d", &entered_number);
    while (entered_number!=0){
        remainder = entered_number%8;
        sum = sum*10 + remainder;
        entered_number = entered_number/8;
    }
    while (sum!=0){
        remainder = sum%10;
        octal_number = octal_number*10 + remainder;
        sum = sum/10;
    }printf("Octal value : %d", octal_number);
    return 0;
}