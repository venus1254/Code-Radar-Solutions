#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(j=n; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}