#include<stdio.h>
/*void main(){
    char c;
    c = getchar();
    while(c!=EOF){
        putchar(c);
        c = getchar();
    }
}
*/
void main(){
    int c,result;
    while((result = (c = getchar()) != EOF)){
        putchar(c);
        printf("%d\n",result);
    }
    printf("\t\"\"\"");
}

/*
void main(){
    printf("%d",EOF);
}
*/
