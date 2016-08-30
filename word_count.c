#include<stdio.h>
#define IN 1
#define OUT 0
void main(){
    int c,nc,nl,nw,state;
    state = OUT;
    nc = nl = nw = 0;
    while((c = getchar()) != 'a'){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            ++nw;
            state = IN;
        }
    }
    printf("%d\t%d\t%d\n", nc, nl, nw);
}
