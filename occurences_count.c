#include<stdio.h>
#define MAXFREQ 100
/* count digits, white space, others */
void main(){
    int c,ndigit[10],nwhite,nother,i,j;
    nwhite = nother = 0;
    for(i = 0; i<10; i++)
        ndigit[i] = 0;
    while((c = getchar()) != 'm'){
//        if(c >= '0' && c <= '9')
//            ++ndigit[c-'0'];
//        else if(c == ' ' || c == '\t')
//            ++nwhite;
//        else
//            ++nother;
        switch(c){
            case '0':case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                ++ndigit[c - '0'];
                break;
            case ' ': case '\t': case '\n':
                ++nwhite;
                break;
            default:
                ++nother;
                break;
        }
    }
    printf("Occurences :\n0 1 2 3 4 5 6 7 8 9 White_space Others\n");
    for(i = 0; i < 10; i++)
        printf("%d ",ndigit[i]);
    printf("%11d %6d", nwhite, nother);

    //printing horizontal histogram

    for(i=0; i<10; i++){
        printf("\n%d: ", i);
        for(j = 0; j < ndigit[i]; j++)
            printf("== ");
    }
    printf("\nWhite Space:");
    for(j = 0; j < nwhite; j++)
            printf("== ");
    printf("\nOthers:");
    for(j = 0; j < nother; j++)
            printf("== ");
}
