#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=4-N; i++){
        for(int j=N; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}