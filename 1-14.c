#include<stdio.h>
void main(){
    int i,j,freq[128],c;
    for(i = 0; i < 128; i++)
        freq[i] = 0;
    while((c = getchar()) != 'm'){
        ++freq[c];
    }
    for(i = 0; i < 128; i++){
        if(freq[i] != 0){
            printf("\n%2c : ", i);
            for(j = 0; j < freq[i]; j++)
                printf(" == ");
        }
    }
}
