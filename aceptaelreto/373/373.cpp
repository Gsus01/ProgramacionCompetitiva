#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    long long n, sol;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%lld", &n);
        sol = 0;
        sol = n * n * 2 + (((n * 2) + (n - 2) * 2) * (n - 2));
        printf("%lld\n", sol);
    }
    return 0;
}
