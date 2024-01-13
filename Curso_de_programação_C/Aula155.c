//  Função que calcula  e retorna o fatorial de n.
// 4! = 4 * 3 * 2 * 1 = 24
// !1  e !0 = 1
int fatorial(int x){
    if( x == 0 || x == 1){
        return 1;
    }else{
        return x * fatorial(x -1);
    }
}


#include <stdio.h>

int main(){

    int n;

    printf(" digite um valor para calcular seu fatorial:\n");
    scanf("%d",&n);

    printf("%d! = %d\n",n,fatorial(n));

    return 0;

}