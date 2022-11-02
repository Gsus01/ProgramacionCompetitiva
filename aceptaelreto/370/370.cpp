#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    scanf("%d", &n);

    while(n--){
        scanf("%d-%d", &a, &b);
        //printf("->%d\n", a);
        if (a < b){
            if (b == (a + 1)){
            printf("%s\n", (a%2 == 0)? "SI": "NO");
            } else {
                printf("NO\n");
            }
        } else {
            if ( a == (b + 1)){
            printf("%s\n", (b%2 == 0)? "SI": "NO");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
