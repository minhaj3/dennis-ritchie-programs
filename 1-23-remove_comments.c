#include<stdio.h>
#define IN 1 //inside double or single quotes
#define OUT 0
void main(){
    int i,state,c;
    state = OUT;
    while((c = getchar()) != 'm'){
        if((c == '\"' || c == '\'') && state == OUT){
            state = IN;
        }
        else if((c == '\"' || c == '\'') && state == IN){
            state = OUT;
        }
        if(c == '/' && state == OUT){
            if((c = getchar()) == '/'){
                for(c = getchar() ; c != '\n' ; c = getchar());
                c = getchar();
            }
            else if((c = getchar()) == '*'){
                printf("#2");;
                while(1){
                    printf("#1");
                    c = getchar();
                    if(c == '*'){
                        if((c = getchar()) == '/'){
                            c = getchar();
                            break;
                        }
                    }
                }
            }
            c = getchar();
        }
        putchar(c);
    }
}
