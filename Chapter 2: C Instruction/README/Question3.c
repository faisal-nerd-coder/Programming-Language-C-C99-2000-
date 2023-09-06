/*Two numbers are input through keyboard in two locations C and D. Write a program to interchange the contents
 of C and D.*/

 #include<stdio.h>

 int main(){
    int a, b, temp;
    printf("Enter value of a, b: ");
    scanf("%d %d", &a, &b);
    printf("Location of a: %d and b: %d\n", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Replaced value of a: %d, b: %d, at locations a: %d, b: %d\n", a, b, &a, &b);
    return 0;
 }
