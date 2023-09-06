# Programming-Language-C-C99-2000-
C is a programming language developed at AT & T Bell Lab of USA in 1972 by Dennis Ritchie.

History Of Langauge C -

1978: Published by Brian Kernighan & Dennis Ritchie.

1983: ANSI for a committee, X3J11 to establish a standard specification in C.

1989: ANSI standards were completed and ratified as ANSI X3.159-1989 "Programming Language C" also referred as ANSI C or c89.

1995: ISO published an extension to ANSI C, referred as ISO C.

2000: ANSI adopted ISO C, Referred as C99.

All the programes or codes in this repository are based on C99 Standard.
# Chapter 1: Summary

## Notes

* 3 top reasons for learning C
    - Good base for learning C++, c#, or Java Later.
    - Unix, Linux, Windows, Gaming frameworks are written in C.
    - Embeded systems programs are written in C.
* Constants = Literals -> Cannot Change
* Variables = Identifiers -> May Change
* Types of variables and constants:
      - Primary
      - Secondary.
* 3 types in Primary :
      - Integer
      - Real(Float)
      - Character.
* Ranges
    - 2-bytes integers: -32768 to +32767.
    - 4-bytes integers: -2147438648 to +2147438647.
    - Floats : -3.4 x 10^38 to +3.4 x 10^38.
* In a char constant, both quotes must slant to the left, like 'A'.
* Variable has two meanings:
    - It is a entity whose value can change.
    - It is a name given to a location in memeory.
* Variable names are case-sensitive and must begin with an alphabate.
* Total Keywords = 32. Example char, int, float, etc.
* printf() is a function that can print multiple constants and variables.
* Format specifiers in printf(), scanf() : int - %i, float - %f, char - %c.
* main() is a fucntion that must always return an integer value.
* 0 - if it meets success, 1 - if it encounters any failure.
* void main() is wrong, Correct form is int main().
* use /**/ or // for a comment in a program
* & is 'Address of' operator and must be used before a variable in scanf().
# Chapter 2: C Instructions

## Notes

* C offers 3 types of instructions:
    - Type Declaration
    - Arithmetic Declaration
    - Control
* Declaration and assignment can be combined. Ex. int a = 5;
* 3 types pf Arithmetic Instruction:
    - Integer Mode
    - Real Mode
    - Mixed Mode
* Rules of arithmetic instructions:
    - If one operand is float, result is a float.
    - Result is int only if both operands are ints.
* a = pow(2, 5); would store 2^5 in a. Remeber to add #include<math.h>
* Every operator has 1) Priority 2) Associativity
* Associativity comes into play when prirority cannot decide which operation to perform first. Associativity is either L to R or R or L. (+, -, *, /, %) has L to R, (=) has R to L associativity.
* Format String of printf() can contain:
      - Format Specifiers - %c, %d, %f.
      - Excape Sequences - \n, \t, many others.
      - Any other character.
  * Format string of scanf() can contain only format specifiers.
  * Control Instructions control the sequence of exceution of instruction in a program.
  * 4 types of control instruction:
        - Sequence
        - Decision
        - Repetition
        - Case 
