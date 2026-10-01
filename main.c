#include <stdio.h>

int main(int argc, char *argv[]){
    int a,sum,i;
    sum=0;
    printf("input a number : ");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        sum+=i+1;
    }
    printf("The result is %d",sum);
}