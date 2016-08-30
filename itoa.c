#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void itoa(int n, char s[]);
void itoa2(int n, char s[], int minf); //version 2.0 for question 3-6
void main(){
    int n = -24698;
    char s[20];
//    itoa(n, s);
//    printf("%s\n", s);
    itoa2(n, s, 8);
    printf("%s\n", s);
}
void itoa(int n, char s[]){
    int i, sign;
//    sign = (n > 0) ? 1 : -1;
    if((sign = n) < 0)
        n = -n;
    do{
        s[i++] = (n % 10) + '0';
        printf("%s\n", s);
    } while(n /= 10);
    if(sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
void itoa2(int n, char s[], int minf){
    int i, sign;
    if((sign = n) < 0)
        n = -n;
    do{
        s[i++] = (n % 10) + '0';
        printf("%s\n", s);
    } while((n /= 10) || (i < minf));
    if((sign < 0) || (i < minf))
        s[i++] = '-';
    while(i < minf)
        s[i++] = 32;
    s[i] = '\0';
    reverse(s);
}
void reverse(char s[]){
    int i, j, temp;
    for(i = 0, j = strlen(s)-1; i < j; ++i, --j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
