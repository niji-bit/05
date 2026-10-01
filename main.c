#include <stdio.h>

int main(int argc, char *argv[]){
    int num;
    char c;
    num=0;
    printf("input a string : ");
    scanf("%c",&c);
    while ((c=getchar())!='\n'){
        if(c>='0'&&c<='9'){
            num++;
        }
    }
    printf("The number of digits is %d",num);
}