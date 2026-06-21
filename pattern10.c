//right half of diamond
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter th no of lines\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");

        }
        printf("\n");
    }
    for(i=(n-1);i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}