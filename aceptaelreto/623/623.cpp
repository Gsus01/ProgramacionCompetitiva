#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    char a;
    unordered_map <char, int> usuario;
    unordered_map <char, int> resultado;

    for (char i = '0'; i <= '9'; i++){
        usuario[i] = 0;
    }
    scanf("%d", &N);
    while(N--){
        scanf("%c", &a);
        for (int i = 0; i < 7; i++){
            scanf("%c", &a);
            usuario[a] += 1;
        }
        scanf("%c", &a);
        for (int i = 0; i < 7; i++){
            scanf("%c", &a);
            usuario[a] += 1;
        }
        
        bool res = true;
        for (char i = '0'; i < '9'; i++){
            printf("%d,\n", usuario[i]);
            /*
            if (usuario[i] == resultado[i]){
                res = false;
                printf("u1 %d, u2 %d\n", usuario[i], resultado[i]);
            }*/
        }
        cout << "res " << res << endl;
        for (char i = '0'; i < '9'; i++){
            usuario[i] = 0;
        }
    }
    return 0;
}
