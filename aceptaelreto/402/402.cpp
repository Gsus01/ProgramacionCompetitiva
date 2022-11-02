#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    unsigned res;
    while(scanf("%lld", &n), n) {
        res = 0;
        for (long long i = floor(sqrt(n)); i >= 1; i--) {
            if (n % i == 0) {
                // printf("%lld %lld\n", i, n / i);
                res = max(i, (n/i));
                break;
            }
        }
        printf("%d\n", res);
    }
    
    return 0;
}
