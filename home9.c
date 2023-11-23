//
// Created by dutta on 23-11-2023.
//
#include<stdio.h>
int main(){
    int limit , temp=1;
    printf("enter the value of limit :\n");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++){
        for(int j=limit; j>=i; j--){
            printf(" ");
        }
        for(int k=1; k<=temp; k++){
            printf("*");
        }
        printf("\n");
        temp++;
    }

}