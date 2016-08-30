#include<stdio.h>
void squeeze(char s[], char c);
void squeeze2(char s1[], char s2[]);
void main(){
    char s[] = "hello world";
    char s2[] = "world";
//    printf("%s\n",s);
    squeeze(s, 'l');
    printf("%s\n",s);
    squeeze2(s, s2);
    printf("%s\n",s);
}
void squeeze(char s[], char c){ //v1.0
    int i, j;
    for(i = j = 0; s[i] != '\0'; ++i){
        if(s[i] != c)
            s[j++] = s[i];
    }
//    printf("%d\n",j);
    s[j] = '\0';
}
void squeeze2(char s1[], char s2[]){ //v2.0   ex.2-4
    int i;
    for(i = 0; s2[i] != '\0'; ++i){
        squeeze(s1, s2[i]);
    }
}
