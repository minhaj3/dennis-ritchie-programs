#include<stdio.h>
float convert(char type, int temp);
void main(){
    int fahr;
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%d\t%f\n", fahr, convert('c', fahr));
    }
float convert(char type, int temp){
    int i;
    if(type == 'f')
        return ((9.0/5) * temp + 32);
    else if(type == 'c')
        return ((5.0/9) * temp - 32);
    else
        return -1;
}
