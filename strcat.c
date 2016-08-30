#include<stdio.h>
void strcat(char s[], char t[]);
void main(){
    char s[] = "hello world";
    char t[] = "how are you";
//    printf("%s\n",s);
    strcat(s, t);
    printf("%s\n",s);
}
void strcat(char s[], char t[]){
    int i, j;
    i = j = 0;
    while(s[i] != '\0')
        ++i;
//    printf("%d\n",i);
    while((s[i++] = t[j++]) != '\0');
//    printf("%c\n",s[11]);
//    printf("%d\n",j);
}
