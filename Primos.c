#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,x;

    printf("Digite um n�mero inteiro e positivo: ");
    scanf("%d", &n);

     x=2;
    while (x<n) {

        if(n % x == 0){
            printf("%d nao e primo",n);
            break;
        }
        x++;
    }
    if (x == n){
        printf("%d e primo",n);
    }
    return 0;
}
