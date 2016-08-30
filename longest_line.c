#include<stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void main(){
    char line[MAXLINE], longest[MAXLINE];
    int len, max;
    max = 0;
    while((len = getline(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
        printf("length = %d and string: %s", max, longest);
    return 0;
}
int getline(char s[], int lim){
    int i,c;
    for(i = 0; i <= lim && (c = getchar()) != 'm' && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
