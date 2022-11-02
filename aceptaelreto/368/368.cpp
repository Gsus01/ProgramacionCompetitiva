#include <iostream>
using namespace std;

int main() {
    int h, c, res;

    while (scanf("%d %d", &h, &c), (h || c)){
        res = 10 * (1 + (h-1)/c);
        printf("%d\n", res);
    }

    return 0;
}
