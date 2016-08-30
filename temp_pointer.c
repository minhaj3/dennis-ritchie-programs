#include<stdio.h>
void main(){
    int a[5];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    char *p;
    p = &a[0];
    p = p + 4; //pointer type is of char rather than int, so it will not go to the nest element by simply p=p+1,
                //because it will not do scaled addition or scaled arithmetic
                //but instead we will need to do addition of 4(size of int here)
    printf("%d\n", *p); //prints 3, the next element of a[2]
    printf("%d\n", p[8]); //prints the last element printed plus two elements (4 * 2), also pointer can also act as array
}
