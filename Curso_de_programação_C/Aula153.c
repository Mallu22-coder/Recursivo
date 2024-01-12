// imprimir todos os elementos de n ate 0
#include <stdio.h>
void imprimir(int x){
    if(x == 0){
        printf("%d ",x);
    }else{
        //para fazer a impressão de maneira decrescente
        // printf("%d ",x);
        // imprimir(x-1);
        //para fazer a impressão de maneira crescente
        imprimir(x-1);
        printf("%d ",x);
    }
}
int main(){
    int n;

    printf("digite um valor maior que zero: \n");
    scanf("%d",&n);

    imprimir(n);

    return 0;
}