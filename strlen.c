#include<stdio.h>
int strlen(char s[]);
void main(){
    char s[] = "hello world";
    printf("%d",strlen(s));
}
int strlen(char s[]){
    int i;
    for(i = 0; s[i] != '\0'; i++);
//    printf("%d\n", i);
    return i;
}
