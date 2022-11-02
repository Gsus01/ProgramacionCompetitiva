#include <iostream>
using namespace std;

int main() {
    int n, notas, suma, prometida, minimo, necesaria, cont;
    while(scanf("%d", &n), n){
        suma = 0;
        cont = n;
        while(cont--){
            scanf("%d", &notas);
            suma += notas;
        }
        scanf("%d", &prometida);
        minimo = prometida * (n+1);
        necesaria = minimo - suma;
        // printf("->  %d %d", minimo, necesaria);
        if (necesaria < 0 || necesaria > 10){
            printf("IMPOSIBLE\n");
        } else {
            printf("%d\n", necesaria);
        }
    }
    return 0;
}
