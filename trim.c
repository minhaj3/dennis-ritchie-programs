#include<stdio.h>
#include<string.h>
void main(){
    int n;
    char s[] = "hello world         ";
    n = trim(s);
    printf("%d", n);
}
int trim(char s[]){
    int i;
    for(i = strlen(s)-1; i >= 0; --i){
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            break;
    }
    s[i+1] = '\0';
    return i;
}
