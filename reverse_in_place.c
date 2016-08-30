#include<stdio.h>
void main(){
    char s[] = "hello world";
    printf("%s\n", s);
    reverse(s);
    printf("%s\n", s);
}
#include<string.h>
void reverse(char s[]){
    int i, j, temp;
    for(i = 0, j = strlen(s)-1; i < j; ++i, --j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
