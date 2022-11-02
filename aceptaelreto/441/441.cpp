#include <iostream>
#include <cstring>
using namespace std;

void sumarIndex(char* cadena, int i){
    
    //printf("--> %c\n", cadena[i]);
    if (cadena[i] == '.'){
        sumarIndex(cadena, i-1);
    } else if (cadena[i] == '9'){
        cadena[i] = '0';
        sumarIndex(cadena, i-1);
    } else {
        cadena[i] += 1;
    }
}

int main() {
    char cadena[1002] = {0};
    
    while (scanf("%s", cadena + 1) != EOF)
    {
        sumarIndex(cadena, (int) strlen(cadena+1));
        if (cadena[0] != 0){
            
            if (strlen(cadena + 1) == 3 || (strlen(cadena + 1) > 3 && cadena[4] == '.')){
                printf("1.");
            } else {
                printf("1");
            }
        }
        printf("%s\n", cadena + 1);
        memset(cadena,0,strlen(cadena));

    }
    return 0;
}

