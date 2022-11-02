#include <iostream>
using namespace std;

int main() {
    int N;
    int pag;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &pag);
        if (pag%2 == 0){
            printf("%d\n", ++pag);}
        else printf("%d\n", --pag);
    } 
    return 0;
}
 