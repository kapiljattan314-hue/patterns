// star printing in increasing order  from right side
#include<stdio.h>
int main(){
    int a,i,j;
    printf("enter the value of print");
    scanf("%d",&a);

    for (i=1;i<=5;i++){
        for (j=1;j<=a;j++){
            if(i+j<=a){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}