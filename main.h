#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _printf(const char *format, ...);
int print_d(int num);
int print_str(char *str);
void print_b(unsigned int num, int *);
int print_space(int skip);
void print_ascii(unsigned int num, int *);
void decimaltoO(unsigned int num, int *);
void decimaltoH(unsigned int num, int *, char hex);
int print_rot13(char *str);
int print_rev_str(char *str);
#endif
