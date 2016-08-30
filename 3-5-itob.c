#include<stdio.h>
#include<string.h>
void reverse(char s[]);
void itob(int n, char s[], int b);
void main(){
    int n = -17;
    char s[20];
    itoa(n, s, 16);
    printf("%s", s);
}
void itob(int n, char s[], int b){ //mostly incomplete, do not have support for a-z in base 16
    int i, sign;
//    sign = (n > 0) ? 1 : -1;
    if((sign = n) < 0)
        n = -n;
    do{
        s[i++] = (n % b) + '0';
        printf("%s\n", s);
    } while(n /= b);
    if(sign < 0)
        s[i++] = '-';
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
