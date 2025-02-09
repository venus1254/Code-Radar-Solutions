#include <stdio.h>
int main(){
    int num, flipped_num;
    scanf("%d", &num);
    flipped_num = ~num;
    printf("%d\n", flipped_num);
    return 0;
}