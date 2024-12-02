# **Printf Project**

## **Table of Content**
1. **Project Overview**
2. **Purpose**
3. **Main Features**
4. **Intended Audience**
5. **Supported Specifiers**
6. **Compilation Instructions**
7. **Language**
8. **Challenges**
9. **Reference**
10. **Contributors**

---

## **Project Overview**

The **Printf Project** is a custom implementation of the standard C library function `printf`. This project aims to mimic the behavior of `printf` by handling specific format specifiers while also giving developers insights into **variadic functions** and low-level system calls.

---

## **Purpose**

The purpose of this project is to:

- **Strengthen understanding** of C programming concepts such as variadic functions, memory allocation, and system calls.
- **Build a foundational understanding** of how standard library functions are implemented.
- **Foster collaboration** through team-based development.

---

## **Main Features**

- **Custom implementation** of the `printf` function.
- **Support** for a subset of `printf` conversion specifiers.
- **Extensive testing** to ensure reliability and consistency.

---

## **Intended Audience**

This project is designed for:

- **Holberton students** learning the intricacies of C programming.
- **Developers** interested in understanding how functions like `printf` are implemented under the hood.

---

## **Supported Specifiers**

### **What is a format specifier?**

A format specifier is a special sequence of characters used in formatted input and output functions (like `printf`, `scanf`) to define how data should be formatted and displayed or read.

| **Format Specifier** | **Description**                    | **Example Output**   |
|-----------------------|------------------------------------|-----------------------|
| `%c`                 | Prints a single character         | Input: `%c` -> H     |
| `%s`                 | Prints a string of characters     | Input: `%s` -> Hello |
| `%%`                 | Prints a literal `%` character    | Input: `%%` -> %     |
| `%d`                 | Prints a signed decimal integer   | Input: `%d` -> 42    |
| `%i`                 | Prints a signed integer (identical to `%d`) | Input: `%i` -> 42 |

---

## **Compilation Instructions**

All the files that were used are compiled using:  
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

---

## **Language**

The creation of the `printf()` function is being done using the **C programming language**. As a low-level language, C gives us the ability to build and control functions from the ground up while defining their specific outputs.  

Currently, we are in the foundational phase of learning C, and this project serves as a way to test our understanding by implementing `printf()` entirely from scratch.

---

## **Challenges**

- **Understanding** the behavior of variadic functions.
- **Handling edge cases** for format specifiers.
- **Maintaining consistency** with the standard library function's output.

---

## **Reference**

For more details, refer to the `man 3 printf` documentation.

---
## **Contributors**
- **Joseph Gleason**  
- **Manuel Santana**  
- **Gustavo Guevara**
