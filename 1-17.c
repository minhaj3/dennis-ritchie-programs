#include<stdio.h>
#define MAXLINE 1000
#define MAX 80
int getline(char line[], int maxline);
void main(){
    char line[MAXLINE], longest[MAXLINE];
    int len;
    while((len = getline(line, MAXLINE)) > 0){
        if(len > MAX){
            printf("%s\n", line);
        }
    }
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
