#include<stdio.h>
void main(){
    int i, j;
    j = 0;
    int c[26];
    char temp = ' ';
    for(i = 65; i <= 90; ++i)
        c[j++] = i;
    for(i = 0; i < 26; ++i)
        printf("%c ", c[i]);
    printf("%d", temp);
}
