#include<stdio.h>
unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
int bitcount(unsigned x);
void main(){
    short int n;
    unsigned short r;
    n = 63;
    r = getbits(n, 4, 2);
    printf("%d\n", r);
    invert(n, 3, 2);
    printf("%d\n", bitcount(170));
}
unsigned getbits(unsigned x, int p, int n){
    return (x >> (p+1-n)) & ~(~0 << n);
}
unsigned setbits(unsigned x, int p, int n, unsigned y){ //incomplete
    return 0;
}
unsigned invert(unsigned x, int p, int n){ //incomplete, currently returns only 1's at given field, 00001100 for (x, 3, 2)
    unsigned short a;
    a = (~(~0 << n) << p-n+1);
//    b = ~(a & x);
    printf("%d\n", a);
    return a;
}
//bit based manipulation is difficult
int bitcount(unsigned x){
    int n;
    for(n = 0; x != 0; x >>= 1){
        if(x & 1)
            ++n;
    }
    return n;
}
