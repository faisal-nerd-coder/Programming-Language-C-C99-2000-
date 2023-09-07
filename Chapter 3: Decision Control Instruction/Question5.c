/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine
the youngest of the three.*/

#include<stdio.h>

int main(){
    int ram, shyam, ajay;
    printf("Enter age of Ram, Shyam, Ajay : ");scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram<shyam && ram<ajay){
        printf("Ram is youngest!!\n");
    } else if (shyam<ram && shyam<ajay){
        printf("Shayam is youngest!!\n");
    } else{
        printf("Ajay is youngest!!\n");
    }
    return 0;
}