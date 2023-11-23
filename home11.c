//
// Created by dutta on 23-11-2023.
//
#include<stdio.h>
int main(){
    for(int i=0; i<=10; i++){
        if(i==5){
            continue;
        }
        printf("%d",i);
    }
}