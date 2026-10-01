#include <stdio.h>

int main(int argc, char *argv[]){
    int answer,sum,a;
    sum=0;
    answer=59;
    do{
        printf("Guess a number : ");
        scanf("%d",&a);
        sum++;
        if (a<answer){
            printf("low!\n");
        }
        else if (a>answer){
            printf("high!\n");
        }
    } while(a!=answer);
    printf("Congratultaion! trials:%d",sum);
}