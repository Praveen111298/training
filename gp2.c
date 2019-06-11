#include<stdio.h>
int main(){
    int a,prod=1,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        prod=prod*i;
    }
    printf("%d",prod);
}