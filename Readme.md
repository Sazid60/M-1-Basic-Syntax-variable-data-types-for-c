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

### Variable and Data Type

1. *int* -> -100, 0, 100
2. *float* -> -2.5, 5.46
3. *char* -> 'a', 'A', '@', 'H'
4. *boolean* -> True or False

### Variables in C 

```
data-type variable name 
```

```c
#include<stdio.h>
int main()
{
    int num; // declaring avariable will be stored in memory and we will assign data. 
    num=10;
    // or we can also write 
    int num1 = 10; 
    num1 = 20;
    float f = 3.56;
    char c = 'i am sazid';
    return 0;
}
```
- variable is stored in memory and value is assigned and the code will be executed line by line 

- *int* holds *4 byte space* in memory, *float* holds *4 byte space* in memory, *char* holds *1 byte space* in memory
- *1 byte* means *8 bit*. 010101(here is 6 bit) as compute understand 0 and 1 these are bit. 
- *1024 bit* means *1 kb*
- *1024 kb* means *1 mb*
- *1024 mb* means *1 gb*
- *1024 gb* means *1 tb*

## print a variable 

```c
#include<stdio.h>
int main()
{
    int num; // declaring avariable will be stored in memory and we will assign data. 
    num=10;
    // or we can also write 
    int num1 = 10; 
    num1 = 20;
    float f = 3.56;
    char c = 'i am sazid';
    printf("num1"); // we cant print like this 
    return 0;
}
```
- we cant print like this **We need format specifier** for printing variables 
1. *int* -> %d
2. *float* -> %f
3. *char* -> %c

```c
#include<stdio.h>
int main()
#include<stdio.h>
int main()
{
    int num; // declaring avariable will be stored in memory and we will assign data. 
    num=10;
    // or we can also write 
    int num1 = 10; 
    num1 = 20;
    float f = 3.56;
    char c = 'i am sazid';
    // printf("num1"); // we cant print like this 
    printf("%d", num1);
    printf("%f", f);
    printf("%2f", f);
    printf("%c", c);
    return 0;
}
```
