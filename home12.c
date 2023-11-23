//define and decleration
// Created by dutta on 23-11-2023.
//
#include<stdio.h>

int sum_n(int n){
    printf("program to find the sum of n numbers\n");
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+1;
    }
    printf("the sum of numbers are: %d\n",sum);
}
int mul_n(int n){
    printf("program to find the multiplication of n\n");
    for(int i=1;i<n;i++){
        for(int j=i;j<=10;j++){
            printf("%d * %d=%d\n", i,j,i*j);
        }
    }
}
int main(){
    int n,choice;
    printf("entter the value of n:\n");
    scanf("%d",&n);
    printf("enter your choice\n");
    scanf("%d",&choice);

    if(choice==0){
        sum_n(n);
    }else if(choice==1){
        mul_n(n);
    }
}