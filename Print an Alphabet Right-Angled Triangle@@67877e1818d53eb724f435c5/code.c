#include<stdio.h>
int main(){
    char N;
    scanf("%c", &N);
    for(char i=A; i<=N; i++){
        for(char j=A; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}