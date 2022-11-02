#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, k; 
    scanf("%d", &N);
    while(N--){
        // int cont = 0;
        scanf("%d", &k);
        // for (int i = 1; i <= k; i++){
        //     if (((int) pow(2,i)-1)%7==0){
        //         cont++;
        //     }
        // }
        printf("%d\n", k/3);
    }

    return 0;
}
