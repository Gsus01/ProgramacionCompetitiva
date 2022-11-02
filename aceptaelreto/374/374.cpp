#include <iostream>
using namespace std;

int main() {
    int N;
    long long unsigned temp, max = 0, nmax = 0, min = ~0U, nmin = 0;
    scanf("%d", &N);
    while (N--)
    {   
        max = 0, nmax = 0, min = ~0LL, nmin = 0;
        while (scanf("%lld", &temp), temp != 0)
        {
            if (temp < min){
                min = temp;
                nmin = 1;
            } else if (temp == min)
                nmin++;
            if (temp > max){
                max = temp;
                nmax = 1;
            } else if (temp == max)
                nmax++;
        }

        printf("%lld %lld %lld %lld\n", min, nmin, max, nmax);
            
    }
    
    return 0;
}
