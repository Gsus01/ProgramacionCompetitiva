#include <iostream>
using namespace std;

int main() {
    long long uva[2] = {0};
    long long ms, mg, msmu, mgmu; 




    while(scanf("%lld %lld", &uva[0], &uva[1]) != EOF){
        

        if (uva[0] != 0){

            // printf("%lld %lld ", uva[0], uva[1]);
            ms = uva[0];
            mg = uva[1];
            msmu = uva[0];
            mgmu = uva[1];

            while (scanf("%lld %lld", &uva[0], &uva[1]), (uva[0] != 0)){
                // printf("%lld %lld ", uva[0], uva[1]);
                    if (ms < uva[0]) {
                        ms = uva[0];
                    }
                    if (mg > uva[1]) {
                        mg = uva[1];
                    }
                    if (msmu < uva[0]) {
                        if (mgmu >= uva[1]) {
                            msmu = uva[0];
                            mgmu = uva[1];
                        }
                    } else if (msmu == uva[0]) {
                        if (mgmu > uva[1]) {
                            msmu = uva[0];
                            mgmu = uva[1];
                        }
                    }
                    
            }

            if (msmu < ms || mgmu > mg){
                printf("NO HAY MEJOR\n");
            } else {
                printf("%lld %lld\n", msmu, mgmu);
            }
        }
    }

    return 0;
}
