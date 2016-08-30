/*#include<stdio.h>
void main(){
    int fahr, cels;
    int upper, lower, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while(fahr <= upper){
        cels = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr = fahr + step;
    }
    printf("\z\a\b\n\m");
}
void main(){
    int fahr;
    for(fahr = 0; fahr<300; fahr=fahr+20){
        printf("%3d\t%0.3f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
void main(){
    int fahr;
    for(fahr = LOWER; fahr <=UPPER; fahr = fahr + STEP){
        printf("%3d\t%0.3f\n", fahr, (5.0/9)*(fahr-32));
    }
}
*/
#include<stdio.h>
void main(){
    int cels;
    for(cels = 0; cels<=300; cels = cels + 20){
        printf("%3d\t%0.3f\n", cels, (9.0/5)*(cels+32) );
    }
    return 0;
}
