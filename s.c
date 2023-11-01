#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num<0){
        printf("negative");
    }else{
        printf("positive");
    }
    return EXIT_SUCCESS;
}