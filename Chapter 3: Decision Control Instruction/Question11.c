/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters.
Characters ASCII Values | 
A – Z | 65 – 90
a – z | 97 – 122
0 – 9 | 48 – 57
special symbols | 0 - 47, 58 - 64, 91 - 96, 123 - 127 */

#include<stdio.h>

int main(){
    char character;
    int ascii_value;
    printf("Enter the character: "); scanf("%c", &character);
    /*Logic Of The Code
    -----------------------
    We need to assign the character to an int variable to store the ASCII Value.
    */
    ascii_value = character;
    if(ascii_value>=65 && ascii_value<=90){
        printf("Capital Letter\n");
    } else if (ascii_value>= 97 && ascii_value<=122){
        printf("Small Letters\n");
    } else if (ascii_value>= 48 && ascii_value<= 57){
        printf("Numbers\n");
    }else if (
    (ascii_value>=0 && ascii_value<=47) || 
    (ascii_value>=58 && ascii_value<=64) || 
    (ascii_value>=91 && ascii_value<=96) ||
    (ascii_value>=123 && ascii_value<=127)
    ){
        printf("Special Symbols\n");
    }else{
        printf("Error\n");
    }

    return 0;
}
