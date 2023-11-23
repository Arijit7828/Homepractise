//goto function
// Created by dutta on 23-11-2023.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int age;
    l1:
    printf("enter the age\n");
    scanf("%d",&age);
    if(age>=18){
        exit(0);
    }else{
        goto l1;
    }
}
