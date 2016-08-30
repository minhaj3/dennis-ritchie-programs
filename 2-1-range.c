/*Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.*/
#include<stdio.h>
#include<limits.h>
void main(){
    int i;
    printf("Char:  %9d\tto\t%9d\n", CHAR_MIN, CHAR_MAX);
    printf("Short: %9d\tto\t%9d\n", SHRT_MIN, SHRT_MAX);
    printf("Int:   %9d\tto\t%9d\n", INT_MIN, INT_MAX);
    printf("Long:  %9d\tto\t%9d\n", LONG_MIN, LONG_MAX);
    printf("Signed char:    %9d\tto\t%9d\n", SCHAR_MIN, SCHAR_MAX);
    printf("\n");
    printf("Unsigned char:  %9d\n", UCHAR_MAX);
    printf("Unsigned short: %9d\n", USHRT_MAX);
    printf("Unsigned int:   %9X\n", UINT_MAX);
    printf("Unsigned Long:  %9X\n", ULONG_MAX);
    printf("\n");
//    printf("Float:      %9d\tto%9d\n", FLT_MIN, FLT_MAX);
//    printf("Double:     %9d\tto%9d\n", DBL_MIN, DBL_MAX);
//    printf("Float Exp:  %9d\tto%9d\n", FLT_MIN_EXP, FLT_MAX_EXP);
//    printf("Double Exp: %9d\tto%9d\n", DBL_MIN_EXP, DBL_MAX_EXP);
}
