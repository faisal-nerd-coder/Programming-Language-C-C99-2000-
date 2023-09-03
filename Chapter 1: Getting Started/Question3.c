/*Paper of size A0 has demension 1189mm X 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half
paralled to its shorter sides. Thus, paper of size A1 would have dimension 841mm X 594mm. Write a program to
calculate and print paper sizes A0, A1, A2, ... A8*/

#include<stdio.h>

int main(){
    int initial_length = 1189, initial_breadth = 841;
    /* All measurements in mm.
    L A0 = 1189, B A0 = 841, 
    L A1 = B A0, B A1 = L A0/2, 
    L A2 = B A1, B A2 = L A1/2, 
    ...
    ...
    ...
    L A8 = B A7, B A8 = L A7/2
    */
   int counter;
   for(counter=0;counter<9;counter++){
    printf("Dimension of A %d: %d mm x %d mm\n", counter, initial_length, initial_breadth);
    int temp = initial_length;
    initial_length = initial_breadth;
    initial_breadth = temp/2;
   }
    return 0;
}