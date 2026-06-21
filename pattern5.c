//counting printing in increasing order
#include<stdio.h>
int main()
{
    int i,j,number=1,a;
    printf("enter the number of row");
    scanf("%d",&a);
        for (i=1;i<=a;i++){
            for(j=1;j<=i;j++){
                
                printf("%d\t",number);
                number++;
            }
            printf("\n");
        }
    return 0;

}