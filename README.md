<h1 align="center">
	42cursus ft_printf()
</h1>

![ftprintf](https://github.com/MarkosComK/42-Printf/assets/67120870/59ce02c6-dd73-4893-9459-7be599ded8f6)

<p align="center">
	<b><i>Development repo for 42cursus ft_printf project</i></b><br>
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---
<br>
<div align="center">
	<img src="https://github.com/MarkosComK/42-Printf/assets/67120870/432e5973-f6ef-402b-b2b6-8808e8c03f73">
</div>

## This is a project in daily use. If you want to see the project that i have been evaluated in 42school click in releases at the right side!

## 🗣️ About

> _The aim of this project is to code a printf() function that will behave as close as possible from the original printf() from &lt;stdio.h&gt;

<br>

# 🧐 Great Resources for ft_printf()

[42-Gitbook](https://42-cursus.gitbook.io/guide)

[C++ printf() reference](https://cplusplus.com/reference/cstdio/printf/#google_vignette) 

[Oracle Docs](https://docs.oracle.com/cd/E19253-01/817-6223/chp-fmt-1.2/index.html)

For detailed information, refer to the [subject of the project](https://github.com/MarkosComK/42-Printf/files/15138450/en.subject.pdf)


	🚀 This project consists of recode the usetul printf() from <stdio.h> 


- Supported conversions %: c, s, p, i, d, u, x, X
- Supported flags: # + (space)
- Supported options: - 0 . width

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions


``make`` to compile.

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!");
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
cc main.c libftprintf.a && ./a.out
```
Output should be:
```
Testing ft_printf!
```

## Testing

* [ft_printf_test](https://github.com/cacharle/ft_printf_test)

#### WHY NOT ASSEMBLY?

++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>.>---.++++++++++++.++.+++
+++.--.<<++.>>------.------------.+++++++++++++.<<.>>++++++.------------
.-------. +++++++++++++++++++.<<.>>----------------.+++++.+++++++++.---
----------.--.+ ++++++++++++++++.--------.+++++++++++++.<<.>>----------
-------------.+++.+++ ++++.---.----.+++++++++++++++++.---------------
--.-.<<.>>+++++.+++++.<<.>-------...