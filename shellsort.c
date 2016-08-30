#include<stdio.h>
#define MAX 10
void shellsort(char v[], int n);
void main(){
    int i;
    int v[MAX] = {5, 2, 6, 7, 9, 1, 4, 23, 65, 0};
    for(i = 0; i < MAX; ++i)
        printf("%d ", v[i]);
    printf("\n");
    shellsort(v, MAX);
    for(i = 0; i < MAX; ++i)
        printf("%d ", v[i]);
}
void shellsort(char v[], int n){ //not working properly, incomplete
    int i, j, gap, temp;
    for(gap = n/2; gap > 0; gap /= 2){
        for(i = gap; i < n; ++i){
            for(j = i - gap; (j >= 0) && (v[j] > v[j + gap]); j -= gap){
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}
