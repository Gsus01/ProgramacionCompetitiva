#include <iostream>
using namespace std;

int main() {
    int N, dia, mes, ano;

    scanf("%d", &N);
    while (N--){
        scanf("%d/%d/%d", &dia, &mes, &ano);
        if (ano % 4 != 0){
            printf("29/02/%04d\n", ano + 4- (ano%4));
        } else {
            if (mes < 2) {
                printf("29/02/%04d\n", ano);
            } else if  (mes > 2){
                printf("29/02/%04d\n", ano + 4);
            } else {
                if (dia < 29) {
                    printf("29/02/%04d\n", ano);
                } else {
                    printf("29/02/%04d\n", ano + 4);
                }
            }
        }

    }
    return 0;
}
