#include<stdio.h>
#define YEAR 2001
void main(){
    enum years {test1 = 2009, test2, test3, test4, test5};
    int year = test4;
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
}
