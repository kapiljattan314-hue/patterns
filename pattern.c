//star printing in incrasing order
#include<stdio.h>
int main(){
    int a;
    int i,j;
    printf("enter the no of print");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}