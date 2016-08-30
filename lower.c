//convert string to integer v1.0
#include<stdio.h>
#include<string.h>
void mylower(char s[]);
void mylower2(char s[]); //v2.0
void main(){
    char s[] = "MINHAJNHGFDUGFCGCGYTM";
    mylower(s);
    printf("-- %s-- \n", s);
    mylower2(s);
    printf("-- %s-- ", s);
    return 0;
}
void mylower(char s[]){ //v1.0
    int i;
    for(i = 0; i < strlen(s) ; ++i){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 'a' - 'A';
    }
}
void mylower2(char s[]){ //v2.0
    int i;
    for(i = 0; s[i]!= '\0'; ++i){
        s[i] = (s[i] >= 'A' && s[i] <= 'Z')?(s[i] + 'A' - 'a'):(s[i]);
    }
}
