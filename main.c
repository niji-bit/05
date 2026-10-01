#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    printf("enter an integer : ");
    scanf("%d",&a);
    if(a<0){
        printf("It is negative number.");
    }
    else if(a==0){
        printf("It is 0.");
    }
    else{
        printf("It is positive number.");
    }
}