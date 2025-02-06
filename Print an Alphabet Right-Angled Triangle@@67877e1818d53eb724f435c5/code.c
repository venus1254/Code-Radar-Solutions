#include<stdio.h>
int main(){
    char N;
    scanf("%c", &N);
    for(int i=A; i<=N; i++){
        for(int j=A; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}