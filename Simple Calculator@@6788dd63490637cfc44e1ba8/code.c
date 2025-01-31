#include <stdio.h>
int main(){
    int a,b;
    char oper;
    scanf("%d %d", &a, &b);
    scanf("%c", &oper);
    switch(oper){
        case 1: '+';
        printf(a+b);
        break;
        case 2: '-';
        printf(a-b);
        break;
        case 3: '*';
        printf(a*b);
        break;
        case 4: '/';
        printf(a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}