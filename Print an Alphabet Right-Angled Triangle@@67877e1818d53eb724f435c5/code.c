#include<stdio.h>
int main(){
    int N;
    char ch = 'A';
    scanf("%d", &N);
    scanf("%c", &ch);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%c", ch++ );
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}