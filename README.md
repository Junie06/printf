##0x11. C - printf
**This is a team project on creating a custom made c standard library printf function.
It will handle a wide range of specifiers.**

#Technologies
Ubuntu 20.4 LTS

#Tasks
0. Write a function that produces output according to a format. 
Prototype: int _printf(const char *format, ...); 
Returns: the number of characters printed (excluding the null byte used to end output to strings). 
You need to handle the following conversion specifiers:
c
s
%

1. Handle the following conversion specifiers:d, i

2. Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary

3. Handle the following conversion specifiers: u, o, x, X
4. Use a local buffer of 1024 chars in order to call write as little as possible.
5. Handle the following custom conversion specifier:
S : prints the string.
6. Handle the following conversion specifier: p.
7. Handle the following flag characters for non-custom conversion specifiers: +, space, #
8. Handle the following length modifiers for non-custom conversion specifiers: l, h
9. Handle the field width for non-custom conversion specifiers.
10. Handle the precision for non-custom conversion specifiers.
11. Handle the 0 flag character for non-custom conversion specifiers.
12. Handle the - flag character for non-custom conversion specifiers.
13. Handle the following custom conversion specifier:
r : prints the reversed string
14. Handle the following custom conversion specifier:
R: prints the rot13'ed string
15. All the above options work well together.
