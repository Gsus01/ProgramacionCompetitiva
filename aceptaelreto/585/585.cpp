#include <iostream>

using namespace std;
bool valid(float a, float b){
    if ((int)(b * 2) % 12 != 0){
        return false;
    };

    int h = a * 2;
    int m = b / 6;
    return (h % 60) == m;
}

int main(){
    int n, h, m;
    double a, b;
    
    scanf("%d", &n);

    while(n--){
        
        scanf("%lf %lf", &a, &b);
        
        if (valid(a, b)){
            h = (int) a / 30;
            m = (int) b / 6;    
            printf("%02d:%02d\n", h, m);
        } else if (valid(b, a)){
            h = (int) b / 30;
            m = (int) a / 6;    
            printf("%02d:%02d\n", h, m);

        } else {
            printf("ERROR\n");
        }
        
    }

    return 0;
}

