#include<stdio.h>
int main(){
    int N, start;
    scanf("%d", &N);
    start=1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", start);
            start = 1 - start;
        }
        printf("\n");
        start = 1 - start;
    }
    return 0;
}