#include <stdio.h>


int main(){

    int n1 , sucessor , antecessor;

    printf("%s " , "Digite um Numero Inteiro");
    
    scanf("%d \n" , &n1);

    sucessor = n1 + 1;
    antecessor = n1 - 1;

    printf(" Sucessor : %d \n" , sucessor);

    printf(" Antecessor : %d \n" , antecessor);


    return 0;
  
}