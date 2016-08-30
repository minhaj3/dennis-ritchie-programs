#include<stdio.h>
void main(){
    int c;
    while((c = getchar()) != 'a'){
        if(c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }
}
