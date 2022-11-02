#include <iostream>
using namespace std;

int main() {
    int grises = 0, negros = 0;
    char c;
    bool terminado = true;

    while (scanf("%c", &c), !(terminado && c == '.')){
        if (c == 'N'){
            negros++;
            terminado = false;
        } else if (c == 'G'){
            grises++;
            terminado = false;
        } else if (c == '.'){
            negros = negros %2;
            grises = grises %2;
            if (negros == grises){
                if (negros == 0){
                    printf("EMPAREJADOS\n");
                } else {
                    printf("PAREJA MIXTA\n");
                }
            } else {
                if (negros == 1){
                    printf("NEGRO SOLITARIO\n");
                } else {
                    printf("GRIS SOLITARIO\n");
                }
            }
            //printf("n-%d g-%d\n", negros, grises);
            negros = 0;
            grises = 0;
            terminado = true;
        }
    }

    return 0;
}
