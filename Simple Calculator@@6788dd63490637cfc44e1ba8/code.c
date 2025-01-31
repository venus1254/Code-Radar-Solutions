#include <stdio.h>
int main(){
    int a,b;
    char oper;
    scanf("%d %d %c", &a, &b, &oper);
    switch(oper){
        case '+':
        printf(a+b);
        break;
        case '-':
        printf(a-b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
         if (b % 2 == 0){
            printf("Error: Division by zero");
         }
         else {
            printf("%d / %d = %d", a, b, a/b);
         }
        break;
        default:
        printf("error: invalid operator");
    }
    return 0;
}