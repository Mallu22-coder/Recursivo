// Cálculo do enésimo termo da sequência de Fibonacci
// indices: 1 2 3 4 5 6 7 8  9  10...
// némeros: 0 1 1 2 3 5 8 13 21 34 ...
#include <stdio.h>

int Fibonacci(int x){

    if ( x == 1){

        return 0;
    }else{
        if(x == 2){
            return 1;
        } else{
            return Fibonacci(x-1) + Fibonacci(x-2);
        }
    }
}
int main(){
    int n;

    printf("Digite um valor:\n");
    scanf("%d",&n);
    
    printf("O %d termo da sequencia e = %d\n",n,Fibonacci(n));


    return 0;
}

//o metodo recursivo de fibonacci não é recomendavel, pois ele demorar muito.