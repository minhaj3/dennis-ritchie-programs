#include<stdio.h>
int any(char s1[], char s2[]);
void main(){
    char s1[] = "hello world";
    char s2[] = "ka";
//    printf("%s\n",s);
    printf("%d\n", any(s1, s2));
}
int any(char s1[], char s2[]){
    int i, j;
    for(i = 0; s1[i] != '\0'; ++i){
        for(j = 0; s2[j] != '\0'; ++j){
            if(s2[j] == s1[i])
                return i + 1;
        }
    }
    return -1;
}
