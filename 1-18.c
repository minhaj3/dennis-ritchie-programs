#include<stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void remove_trailing_blank(char line[], int lim);
void main(){
    char line[MAXLINE], longest[MAXLINE];
    int len, max;
    max = 0;
    while((len = getline(line, MAXLINE)) > 0){
        remove_trailing_blank(line, len);
        printf("length = %d and string: %s\n", len, line);
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
void remove_trailing_blank(char line[], int lim){
    if(line[lim] == '\0' && line[lim-1] == '\n'){
        lim = lim - 2;
        for(; line[lim] == ' ' || line[lim] == '\t'; --lim){
            //printf("%d\t%c\n", i, line[i]);
            continue;
        }
        line[lim+1] = '\0';
    }
}
