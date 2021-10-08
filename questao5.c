#include <stdio.h>

int main(){
    int A = 1, B = 1, X;


    X = !(A || B);
    printf("!(1||1) = %d\n", X);
    
    A = 0; 
    B = 0;
    X = !(A || B);
    printf("!(0||0) = %d\n", X);


    A = 1;
    X = !(A || B);
    printf("!(1||0) = %d\n", X);


    A = 0;
    B = 1;
    X = !(A || B);
    printf("!(0||1) = %d\n", X);


}