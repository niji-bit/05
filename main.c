#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    printf("enter an integer : ");
    scanf("%d",&a);
    if(a<0){
        printf("The absolute value is %d", 0-a);
    }
    else {
        printf("The absolute value is %d", a);
    }
}