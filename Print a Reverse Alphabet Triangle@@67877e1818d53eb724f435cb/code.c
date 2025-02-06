#include<stdio.h>
int main(){
    int N;
    char ch;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        ch='A'+i-1;
        for(int j=i; j>=1; j--){
            printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}