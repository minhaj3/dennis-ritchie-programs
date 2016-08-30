#include<stdio.h>
/*void main(){
    int nc, c;
    nc = 0;
    while( (c = getchar()) != EOF){
        ++nc;
        printf("%d",c);
    }
    printf("%d",nc);
}
*/
void main(){
    double nc;
    for(nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}
