#include<stdio.h>
/*
void main(){
    int c,nl,nt,nb;
    nl = nt = nb = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        else if(c == '\t')
            ++nt;
        else if(c == ' ')
            ++nb;
    }
    printf("%d\t%d\t%d\n", nl, nt, nb);
}
1.9*/
void main(){
    int c,nb;
    nb = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++nb;
            continue;
        }
        else if(nb >= 1){
            printf(" ");
            putchar(c);
            nb = 0;
        }
        else{
            putchar(c);
        }
    }
}
