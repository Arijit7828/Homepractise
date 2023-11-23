#include<stdio.h>
int main(){
    union area{
        int base;
        int length;
    };
    union area a;
    a.base=5;
    a.length=5;
}