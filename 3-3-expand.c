#include<stdio.h>
#include<ctype.h>
void expand(char s1[], char s2[]); //convert string to integer v1.0
void main(){
    char s1[] = "-A-ca-d3-k1-3";
    char s2[20];
    printf("s1: %s\ts2: %s\n", s1, s2);
    expand(s1, s2);
    printf("s1: %s\ts2: %s\n", s1, s2);
}
void expand(char s1[], char s2[]){
    int i, j;
    char k;
    s2[0] = s1[0]; //copying the first character
    for(i = 1, j = 1; i < strlen(s1)-1; ++i, ++j){
        if(s1[i] == '-'){
            printf("- found\n");
            if( isdigit(s1[i-1]) && isdigit(s1[i+1]) ){
                printf("both digit found\n");
                for(k = s1[i-1] + 1; k <= s1[i+1]; ++k, ++j){
                    printf("inside k loop, value of k = %c\n", k);
                    s2[j] = k;
                }
                ++i, --j;
            }
            else if( islower(s1[i-1]) && islower(s1[i+1]) ){
                printf("lower found\n");
                for(k = s1[i-1] +1; k <= s1[i+1]; ++k, ++j){
                    printf("inside k loop, value of k = %c\n", k);
                    s2[j] = k;
                }
                ++i, --j;
            }
            else if( isupper(s1[i-1]) && isupper(s1[i+1]) ){
                printf("upper found\n");
                for(k = s1[i-1] + 1; k <= s1[i+1]; ++k, ++j){
                    printf("inside k loop, value of k = %c\n", k);
                    s2[j] = k;
                }
                ++i, --j;
            }
            else{
                printf("char found, copying %c\n", s1[i]);
                s2[j] = s1[i];
            }
        }
        else{
            printf("char found, copying %c\n", s1[i]);
            s2[j] = s1[i];
            }
    }
    printf("pasting last character after %c\n", s2[j-1]);
    s2[j] = s1[i];
    printf("pasting null after %c\n", s2[j]);
    s2[++j] = '\0';
}
