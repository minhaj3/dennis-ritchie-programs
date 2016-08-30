#include<stdio.h>
#define MAXLINE 1000
#define FOLDLEN 10 //should be greater then max word length
int getline(char line[], int len);
void fold(char line[], int len);
void main(){
    int i,len;
    char line[MAXLINE];
    while((len = getline(line, MAXLINE)) > 0){
        //printf("len after getline: %d\n", len);
        fold(line, len);
        printf("%s", line);
    }
}
int getline(char line[], int lim){
    int i,c;
    for(i = 0; i <= lim && (c = getchar()) != 'm' && c != '\n'; ++i){
        line[i] = c;
        //printf("test l: %s\t%d\n", line, i);
    }
    //printf("test m: %s\t%d\n", line, i);
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    //printf("inside getline func: len = %d\n", i);
    line[i] = '\0';
    return i;
}
void fold(char line[], int len){
    int i,j;
    //printf("in the fold func\n");
    //printf("test 1: %s\t%d\n", line, len);
    for(i = FOLDLEN; i < len; i = i + FOLDLEN){
       // printf("test2: %s\n", line);
        for(j = i; j >= i - FOLDLEN; j--){
            //printf("test3: %s\n", line);
            if(line[j] == ' '){
                line[j] = '\n';
                break;
            }
            if(j == i-FOLDLEN)
                printf("word length greater than fold length\n");
        }
    }
}
