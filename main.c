#include <stdio.h>

int main(int argc, char *argv[]){
    int a,b;
    char y;
    printf("enter the calculation : ");
    scanf("%d %c %d",&a, &y, &b);
    switch(y){
        case '+':
            printf("%d %c %d = %d",a,y,b,a+b);
            break;
        case '-':
            printf("%d %c %d = %d",a,y,b,a-b);
            break;
        case '*':
            printf("%d %c %d = %d",a,y,b,a*b);
            break;
        case '/':
            printf("%d %c %d = %d",a,y,b,a/b);
            break;
        case '%':
            printf("%d %c %d = %d",a,y,b,a%b);
            break;
    }
}