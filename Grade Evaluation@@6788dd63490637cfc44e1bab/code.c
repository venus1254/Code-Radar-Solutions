#include <stdio.h>
int main(){
    char ch;
    scanf("%d", &ch);
    if (ch == 'A'){
        printf("Excellent");
    }
    else if(ch == 'B'){
        printf("Good");
    }
    else if(ch == 'C'){
        printf("Average");
    }
    else if(ch == 'D'){
        printf("Below Average");
    }
    else {
        printf("Fail");
    }
}