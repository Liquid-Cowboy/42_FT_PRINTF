# ✒️ Ft_printf

The **Ft_printf** attempts to replicate **standard input and output**'s (stdio.h) printf function by delving into it's structure. The new main concept introduced in this project is the use of **variadic functions**:
## Variadic functions
Variadic functions are functions that accept a variable number of arguments (*denoted by an elipsis* (...)).
Such as 
```C  
int printf(const char *restrict format, ... );
```
To do this, we need to use a variable and at least 3 macros defined in the **stdarg.h** library.  
|   stdarg.h    |   description   |
| ----- | ---- |
| va_list | Special data type that acts as a pointer or cursor to the list of variable arguments. We usually name it **ap** for **argument pointer**. |
| va_start | Takes two arguments: a va_list and the argument before the ellipsis (in our case that would be **restrict format**). Will initialize the va_list object.
| va_arg | Takes two arguments: the (already initialized) **va_list object** and a **data type**. It then checks the **next argument** of that data type on the va_list and **returns** it's value. It also then **updates** to get the next arguments (preventing fallback on already checked arguments).|
| va_copy | While this macro is not used in our **ft_printf** implementation, it's useful to know that it clones an already initialized va_list to another one, if we do want to have fallback and check the va_list a second time (then we would check the cloned list).|
