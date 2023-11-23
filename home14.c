#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int element=15;
    int count=0;

    for(int i=0;i<5;i++){
        if(arr[i]==element){
            printf("the element in %d",i);
            count++;
            break;
        }
    }if(count==0){
        printf("element is not present!\n");
    }
}