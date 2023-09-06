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
