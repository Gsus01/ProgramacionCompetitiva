#include <iostream>
using namespace std;

int main() {
    int a, b;
    char res;

    while(scanf("%d %d", &a , &b), (a || b)){
        res = 'h' -a + 1;
        printf("%c%d\n", res, b);
    }

    return 0;
}
