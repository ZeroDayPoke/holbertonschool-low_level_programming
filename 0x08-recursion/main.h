#ifndef MAIN_H_
#define MAIN_H_

/**
 * librars below
 */
#include <unistd.h>

/**
 * prototype functions below
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _rooter_up(int n, int intCheck);
int is_prime_number(int n);
int divisor_incrementor(int n, int divisor);
int wildcmp(char *s1, char *s2);
int is_palindrome(char *s);
int _strlen_r(char *s);
char *_puts_recursion_2(char *s);
char *_print_rev_recursion_2(char *s, int sLen);
int paliPower(char *s, int sLen, int i);

#endif
