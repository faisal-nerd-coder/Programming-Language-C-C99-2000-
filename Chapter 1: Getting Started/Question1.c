/*Temperature of a city in Fahrenheit is input through the keyboard. Write a program to convert this temperature 
into centigrade degrees*/

#include<stdio.h>

int main(){

    float fahrenheit_temperature, celsius_temperature;
    // (F-32)/9 = C/5 : Formula for converting Fahrenheit to Celsius
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit_temperature);
    // Conversion formula in C, Note: C follows BODMAS
    celsius_temperature = 5*((fahrenheit_temperature-32)/9);
    printf("Temperature in Celsius: %f\n", celsius_temperature);

    return 0;
}