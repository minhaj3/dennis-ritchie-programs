#include<stdio.h>
void main(){
    int i,c,out = 555,temp = 9;
    //out = scanf("");
    //temp = printf("%d",out);
    //printf("\n%d\n", temp);
    for(i = 0; i <= 150; i++)
        printf("%d\t%c\n",i,i);
    while(scanf("%d", &c) != 0){
        printf("%c\n", c);
    }
}
