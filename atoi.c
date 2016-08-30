#include<stdio.h>
#include<ctype.h> // for v2.0, isdigit() and isspace() func
int atoi(char s[]); //convert string to integer v1.0
int atoi2(char s[]); // v2.0
void main(){
    char s[] = "   -32767";
    printf("%d\n",atoi(s));
    printf("%d\n",atoi2(s));
}
int atoi(char s[]){
    short int i, n;
    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
int atoi2(char s[]){ // version 2.0
    int i, n, sign;
    for(i = 0; isspace(s[i]); ++i);
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        ++i;
    for(n = 0; isdigit(s[i]); ++i)
        n = n * 10 + (s[i] - '0');
    return n * sign;
}
