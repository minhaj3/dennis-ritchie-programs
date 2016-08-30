//Write a function htoi(s), which converts a string of hexadecimal digits
//(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
//through 9, a through f, and A through F.
#include<stdio.h>
#include<strings.h>
int htoi(char s[]);
void main(){
    char s[] = "0X1A";
    printf("%d", htoi(s));
}
int htoi(char s[]){
    int i, n;
    i = n = 0;
    if(s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
       ++i;
    while(s[++i] != '\0'){
        if(s[i] >= '0' && s[i] < '9')
            n = n * 16 + (s[i] - '0');
        else if(s[i] >= 'a' && s[i] <= 'f')
            n = n * 16 + (s[i] - 'a' + 10);
        else if(s[i] >= 'A' && s[i] <= 'F')
            n = n * 16 + (s[i] - 'A' + 10);
        else
            return -1;
    }
    return n;
}
