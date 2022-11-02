#include <iostream>
using namespace std;


int toSec(int h, int m, int s){
    return h*3600 + m * 60 + s;
}

int main() {
    int N;
    int h1,m1,s1,h2,m2,s2, ini, fin, n, i, intervalo, res, h, m, s;
    scanf("%d", &N);
    while(N--){
        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2,&s2);
        scanf("%d %d", &n, &i);

        ini = toSec(h1, m1, s1);
        fin = toSec(h2, m2, s2);
        if (fin >= ini){
            intervalo = (fin - ini) / (n-1);
        } else {
            intervalo = (24*3600 - ini + fin) / (n-1);
        }

        //printf("ini- %d  fin- %d  intervalo -> %d\n", ini, fin, intervalo);
        res = ini + intervalo * (i - 1);
        if (res >= 24*3600){
            res = res % (24*3600);
        }

        h = res/3600;
        res = res%3600;
        m = res/60;
        res = res % 60;
        s = res;
        printf("%02d:%02d:%02d\n", h, m, s);

    }
    return 0;
}

