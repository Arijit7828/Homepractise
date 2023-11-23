#include<stdio.h>
int main(){
    int arr[5][3]={{10,60,101},
                   {20,70,102},
                   {30,80,103},
                   {40,90,104},
                   {50,100,105}
    };
   for(int i=0;i<5;i++){
       for(int j=0;j<3;j++){
           printf("%d",arr[i][j]);
       }
       printf("\n");
   }
}
