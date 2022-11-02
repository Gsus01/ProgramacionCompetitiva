#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char cadena[50] = {0};
    char res[50] = {0};
    bool mayus;
    int N, len;

    scanf("%d", &N);

    while(N--){

        scanf("%s", cadena);
        mayus = cadena[0] <= 'Z';

        len = strlen(cadena);
        for (int i = len -1; i >= 0; i--){
            res[i] = cadena[len - 1 - i];
        }
        if (mayus){
            res[0] += ('A' - 'a');
            res[len - 1] -= ('A' - 'a');
        }
        printf("%s\n", res);
        memset(res,0,sizeof(char) * len);
        memset(cadena,0,sizeof(char) * len);
    }
    return 0;
}
