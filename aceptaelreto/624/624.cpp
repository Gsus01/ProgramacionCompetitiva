#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int calcetines[100];
    int n, cont, a, mesa, max;
    while(scanf("%d", &n), n){
        cont = n;
        mesa = 0;
        max = 0;
        memset(calcetines, 0, sizeof(int) * 100);
        while(cont--){
            scanf("%d", &a);
            if (calcetines[a-1] == 0) {
                calcetines[a-1] = 1;
                mesa += 1;
                if (max < mesa){
                    max = mesa;
                }
            } else {
                calcetines[a-1] = 0;
                mesa -= 1;
            }
        }
        printf("%d\n", max);
    }

    

    return 0;
}
