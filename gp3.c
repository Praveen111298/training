#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int n,i;
    scanf("%s",&a);
    n=strlen(a);
    for(i=n-1;i>=0;i--){
        printf("%c",a[i]);
    }
}