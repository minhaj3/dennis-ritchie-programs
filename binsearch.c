#include<stdio.h>
#define MAXSIZE 100
int binsearch(int x, int v[], int n);
void main(){
    int x, v[MAXSIZE], found, i;
    for(i = 0; i < MAXSIZE; ++i)
        v[i] = i;
    found = binsearch(9, v, MAXSIZE);
    printf("%d", found);
}
int binsearch(int x, int v[], int n){
    int low, mid, high, i;
    low = i = 0;
    high = n-1;
    while(low <= high){
        mid = (low+high)/2;
        if(x < v[mid])
            high = v[mid - 1],printf("high: %d\n", high);
        else if(x > v[mid])
            low = v[mid+1],printf("low: %d\n", low);
        else
            return mid;
    }
    return -1;
}
