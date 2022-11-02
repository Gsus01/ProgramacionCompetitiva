#include <iostream>
using namespace std;

int main() {
    long long nj, nr, jugados;
    char jugadores[500000];
    while (scanf("%lld %lld", &nj, &nr), nj != 0) {
        scanf("%s", jugadores);
        jugados = 0;
        while (nr--) {
            for (int i = 0; i < nj; i += 2) {
                if (jugadores[i] == '1' && jugadores[i+1] == '1')
                    jugados++;
                jugadores[i / 2] = (jugadores[i] == '1' || jugadores[i+1] == '1' ? '1' : '0');
            }
            nj /= 2;
        }
        printf("%lld\n", jugados);
    }
    return 0;
}