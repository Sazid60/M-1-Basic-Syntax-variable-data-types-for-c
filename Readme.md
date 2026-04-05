## M-1-Basic-Syntax-variable-data-types-for-c

### why c?

- Its too structured and mother of programming language
- There is no built in library or function so we can learn from 0.

### 1-1 Introduction

- what we will learn?
  1. Basic Structure of C
  2. Print in C 
  3. Taking Input in C
  4. Variable and Data Types
  5. Data Types Limitation
  6. Variable naming Rules

### 1-2 Structure Of C Programming 

- it has two parts 
  1. **Head Part** - hold the header files (saves time and make us avoid some complicated code running behind the scene) 
  2. **Main Part** - Holds the main code

### 1-2 First C Program 
- c programming syntax 
```c
# include <stdio.h>
int main ()

{
    printf("hello world"); // we have not wrote the function of printing its coming from header file 
    return 0;
}
```
- the *stdio* means the *standard input and output* 

### Running Our First C Code

```c
# include <stdio.h>
int main () // this is the main function and its a function return type

{
    printf("hello world"); // we have not wrote the function of printing its coming from header file 
    return 0; // return 0 means the code has run successfully
}
```
- c programming starts to execute from main function 

### Printing in C 

```c
#include<stdio.h>
int main()
{
    printf("I am Sazid\n"); // for printing with brake \n is used 
    printf("demon\n");
    printf("dem\ton");
    return 0;
}
```

- for printing with brake **\n** is used
- for the *Tab Space* we can use *\t*