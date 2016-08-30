#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
void escape(char s1[], char s2[]);
void main(){
    char s1[] = "hello\t\tworld";
    char s2[20];
//    *s1 = "hello   world";
    printf("s1: %s\ts2: %s\n", s1, s2);
    escape(s1, s2);
    printf("s1: %s\ts2: %s\n", s1, s2);
}
void escape(char s1[], char s2[]){
    int i, j;
    for(i = j = 0; i < strlen(s1); ++i, ++j){
//        if(s1[i] == '\t')
//            s2[j] = '\\',s2[++j] = 't';
//        else if(s1[i] == '\n')
//            s2[j] = '\\', s2[++j] = 'n';
//        else
//            s2[j] = s1[i];
        switch(s1[i]){
            case '\t':
                s2[j] = '\\';
                s2[++j] = 't';
                break;
            case '\n':
                s2[j] = '\\';
                s2[j] = 'n';
                break;
            default:
                s2[j] = s1[i];
                break;
        }
    }
    s2[j] = '\0';
}
