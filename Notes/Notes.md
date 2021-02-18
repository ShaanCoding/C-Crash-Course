# C Crash Course

## Introduction

- C is a compiled programming language
- C is one of the oldest of all languages
- C is not OOP, it is also statically typed
- C is dangerous but helps you learn the details and behind the skills
- C is hard - hardest learning curve next to assembly
- C is low level - Console apps and working with memory directly
- C has the same programming language used in other languages
  - Variables & data types
  - Operators
  - Control flow statements
  - Arrays & Strings
  - Functions
  - Structs
  - Some additional stuff: Pointers & Memory Management

## Linux Terminals

- We will be showing you a basic command line run-down of all the commands of how to build and access C files.

- To figure out where you are in the file structure, type `cd`
- We can do `pwd` which shows the absolute path of where we are
- To show all files in the folder type `ls`
- There is something in the terminal called a flag, which is a variable added via a hyphen i.e `ls -l` or `ls -a`
- You can also combine these flags i.e `ls -la`
- If you want to change directories do `cd`, to go back do `cd ..`
- There is another shortcut that we should know called ~ which represents the home directory
- We can also change directories using relevant paths greater than just doing a folder up
  - I.e cd ../../ and if you press tab twice it'll show possibilities
- `clear` clears the window
- `touch` creates a file i.e `touch filename.c`
- To move a file `mv filename.c ..` - move file directory
- To make a new directory use the `mkdir` command
- To delete a folder `rm -r folder`
- To delete a file `rm file` 
- You can make multiple folders at once `mkdir folder1 folder2`
- You can also echo stuff, i.e `echo "hello world"`
- You can direct inputs into a file via `echo "Hello World" > output`
- You can read the contents of a file via `cat`, use `cat filename`
- If you want to append to a file, use two `>>` signs
- There is another way to look through files called `less`

## Basic Input & Output

- So when creating a C file, we need to give it a name and the file extension .c
- We reference the file name when compiling through `gcc`
- We need to worry about the shell of the C program, we need some boilerplate for all our programs

```c
#include <stdio.h>

int main() {
  return 0;
}
```

- The return 0 means everything runs okay
- Then to compile we do `gcc -o desiredFileName filename.c`
- This gives us a file called `a.out`
- To run it we do `./a.out`


- Typically the first file you'll make is a hello world program, using the `printf()` function
- `printf("Hello World!\n");`
- For every time we change our file we need to manually compile 

- The syntax of making a variable is identical we do `datatype identifyer assignment value`
- `int x = 50;`
- `int y;` This is just a decleration
- `y = 10;` This is initalization
- `printf("%s World\n", "Hello");` - this prints the varaible
- %d or %i signed decimal integer
- %c character
- %e scientific notation (mantissa / exponent)
- E Scientific notation (using E character)
- f decimal floating point
- g Uses the short of %e or %f
- G uses the shorter of %E or %f
- o signed octal
- s string of characters
- u unsigned decimal integer
- x unsigned decimal integer
- X unsigned decimal integer (capital letters)
- p pointer address
- n nothing printed
- % character

- If you append 19 before %s 19%s you limit it to 19 characters

## User Inputs

- Now to do user inputs we need to use a function called `scanf`
- this is similar to printf but is slightly difference
- This takes two things, which are called arguments
  - scanf("%d, &variable")
    - So it specifies the data type
    - The variable it should be stored to
    - The &sign is needed which is called the address-of-operator (which gives us a pointer)

- The only exception of this is when working with arrays where we don't use an & sign.

## Strings

- Strings in C are a huge pain and are painful to get used to
- `"Hello World!"
- This is a string, but to store this in C, we have to use a character array
- `char name[20]` //char array of 20 characters
- NOTE: We need to reserve 1 character for the NULL terminator '\0'

## Variable & Data Types

- C is a statically typed language, this means a variable is locked to a specific data type.
- A benefit of a statically typed language is you get errors when it compiles rather than logical errors.

- Implicit type conversion
  - This is just important to know the basics of this
  - It is possible for C to implicitly change the type of value to meet some expectation
  - i.e int zero = .99999999;
  - This is interesting as it'll automatically cast it to 0.

- Explicit type casting


## Operators

- Plus & Minus (+ -)
- Arithmetic + - / *
- Increment / Decrement ++ --
- Assignment = += -= /= *= %=
- Comparison == != < > <= >=
- Logical Operators && || !
- Conditional Operators ? :

## Conditional Operator

- An if statement evaluates to a true or a false statement
- If it is true it is executed, if it isn't it isn't evaluated
- We can also have an else statement

### Logical Operators

- ! (not)
- && and
- || or

#### Case Statements

```c
    switch (menuChoice)
    {
    case 0:
        printf("Case 0\n");
        break;
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    case 3:
        printf("Case 3\n");
        break;
    default:
        printf("Case Default\n");
        break;
    }
  ```

  - Alternatively you can do multiple cases with just stacking lines

```c
    switch (menuChoice)
    {
    case 0:
    case 1:
    case 2:
        printf("Case 0\n");
    break;
    case 3:
        printf("Case 3\n");
        break;
    default:
        printf("Case Default\n");
        break;
    }
  ```

## Loops

- A for loop needs three things to stay functional
  - Initalization
  - Comparison
  - Update of function

```c
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
```

- Unfortunately .size or .length doesn't exist for arrays in C
- To calculate the size of an array we use the sizeOf function
- sizeOf(array) / sizeof(ages[0])

## While-Loops

```c
while(condition)
{

}
```

```c
do 
{

} while(condition)
```