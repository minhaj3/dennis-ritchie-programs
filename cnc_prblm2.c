#include<stdio.h>
void main(){
    int i, n1, n;
    float sum;
    sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        scanf("%d", &n1);
        sum += n1;
        printf("%.2f ", sum/i);
    }
}
