# Structured Programming with C

This `README.md` provides a comprehensive overview of structured programming concepts and their implementation in the C programming language.

## Table of Contents

  - [Introduction to Structured Programming](https://www.google.com/search?q=%23introduction-to-structured-programming)
  - [Key Principles of Structured Programming](https://www.google.com/search?q=%23key-principles-of-structured-programming)
  - [Control Structures in C](https://www.google.com/search?q=%23control-structures-in-c)
      - [Sequence](https://www.google.com/search?q=%23sequence)
      - [Selection (Decision)](https://www.google.com/search?q=%23selection-decision)
      - [Iteration (Looping)](https://www.google.com/search?q=%23iteration-looping)
  - [Functions: The Cornerstone of C Structured Programming](https://www.google.com/search?q=%23functions-the-cornerstone-of-c-structured-programming)
  - [Examples](https://www.google.com/search?q=%23examples)
  - [Why Use Structured Programming?](https://www.google.com/search?q=%23why-use-structured-programming)
  - [Getting Started](https://www.google.com/search?q=%23getting-started)
  - [Contributing](https://www.google.com/search?q=%23contributing)

-----

## Introduction to Structured Programming

Structured programming is a programming paradigm aimed at improving the clarity, quality, and development time of a program by using control flow structures. It was a major advancement over the "goto-heavy" spaghetti code prevalent in earlier programming. The core idea is to break down a complex problem into smaller, more manageable sub-problems, and then solve each sub-problem using only a few well-defined control structures.

The C programming language, designed by Dennis Ritchie, is an excellent example of a language that fully supports and encourages the structured programming paradigm. Its simple syntax and powerful control structures make it a perfect tool for writing clean, efficient, and maintainable code.

## Key Principles of Structured Programming

1.  **Top-Down Design:** Start with the main problem and break it down into smaller, more manageable sub-problems. This process continues until each sub-problem is simple enough to be solved directly.
2.  **Modularity:** The program is divided into independent, self-contained modules (functions in C). Each module performs a specific task and has a clearly defined interface.
3.  **Use of Control Structures:** The flow of execution is managed using only three basic control structures: sequence, selection, and iteration. This eliminates the need for arbitrary jumps (`goto`), which can lead to confusing and hard-to-debug code.

## Control Structures in C

C provides a rich set of statements to implement the three fundamental control structures of structured programming.

### 1\. Sequence

This is the simplest control structure. Statements are executed one after the other in the order they appear.

```c
// Example of sequence
int a = 10;
int b = 20;
int sum = a + b;
printf("The sum is: %d\n", sum);
```

### 2\. Selection (Decision)

This allows the program to choose between different paths of execution based on a condition.

  - **`if` statement:** Executes a block of code if a condition is true.
  - **`if-else` statement:** Executes one block if a condition is true, and another if it's false.
  - **`if-else if-else` ladder:** Checks multiple conditions sequentially.
  - **`switch` statement:** A multi-way branch based on the value of a single variable.

<!-- end list -->

```c
// Example of selection
int age = 18;

if (age >= 18) {
    printf("You are eligible to vote.\n");
} else {
    printf("You are not eligible to vote yet.\n");
}
```

### 3\. Iteration (Looping)

This allows a block of code to be executed repeatedly as long as a condition is true.

  - **`for` loop:** Ideal for when you know the number of iterations in advance.
  - **`while` loop:** Repeats a block of code as long as a condition remains true.
  - **`do-while` loop:** Similar to `while`, but the block of code is guaranteed to execute at least once.

<!-- end list -->

```c
// Example of iteration
// A for loop to print numbers from 1 to 5
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
printf("\n");
```

## Functions: The Cornerstone of C Structured Programming

Functions in C are the primary means of achieving modularity and top-down design. A function encapsulates a specific task and can be called from other parts of the program.

  - **Function Declaration (Prototype):** Declares a function's return type, name, and parameters.
  - **Function Definition:** Contains the actual code that the function executes.
  - **Function Call:** Invokes the function to perform its task.

<!-- end list -->

```c
// Example demonstrating functions
#include <stdio.h>

// Function prototype
int add_numbers(int a, int b);

int main() {
    int result = add_numbers(5, 7); // Function call
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add_numbers(int a, int b) {
    return a + b;
}
```

## Examples

This repository contains various C programs that demonstrate structured programming principles.

  - `calculator.c`: A simple calculator program using functions and a `switch` statement.
  - `factorial.c`: Calculates the factorial of a number using a `for` loop.
  - `fibonacci.c`: Generates the Fibonacci sequence using a `while` loop.
  - `array_operations.c`: Demonstrates how to use functions to perform operations on arrays.

## Why Use Structured Programming?

  - **Improved Readability:** The linear flow of execution is easy to follow, making the code more understandable.
  - **Enhanced Maintainability:** Small, self-contained functions are easier to debug, modify, and reuse.
  - **Increased Productivity:** Breaking a problem into smaller parts allows for parallel development and faster bug fixing.
  - **Reduced Complexity:** The reliance on a few simple control structures keeps the program logic from becoming overly complex.

## Getting Started

To compile and run any of the C programs in this repository, you will need a C compiler like GCC.

1.  **Install GCC:**

      - On Linux, use your package manager: `sudo apt-get install build-essential`
      - On Windows, use MinGW or WSL.
      - On macOS, install Xcode Command Line Tools: `xcode-select --install`

2.  **Compile a C file:**

    ```bash
    gcc -o myprogram myprogram.c
    ```

3.  **Run the executable:**

    ```bash
    ./myprogram
    ```

## Contributing

If you'd like to contribute to this project, please feel free to open a pull request. We welcome new examples of C code that illustrate structured programming principles.