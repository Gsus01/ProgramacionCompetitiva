#include <iostream>
using namespace std;

int main() {
    int nh1, nh2, t, sig;
    int h1[nh1];
    int h2[nh2];
    bool end;
    while(scanf("%d %d %d", &nh1, &nh2, &t) != EOF){
        end = false;
        for (int i = 0; i < nh1; i++){
            scanf("%d", &h1[i]);
        }
        for (int i = 0; i < nh2; i++){
            scanf("%d", &h2[i]);
        }

        while(!end){
            if (nh1 < nh2){
                sig = h1[--nh1];
            } else if (nh1 < nh2) {
                sig = h2[--nh2];
            } else {
                if (h1[nh1] > h2[nh2]){
                    
                }
            }
        }
    }   

    return 0;
}
