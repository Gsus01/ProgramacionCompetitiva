#include <iostream>
using namespace std;

int main() {
    int N;
    int n, a, b, res, extra;

    scanf("%d", &N);
    while(N--){
        scanf("%d %d %d", &n , &a, &b);
        res = 0;
        extra = 0;

        extra = ((n%b) > a)? a: n%b;
        res += extra + (n/b)*a;
        printf("%d\n", res);
    }

    return 0;
}
