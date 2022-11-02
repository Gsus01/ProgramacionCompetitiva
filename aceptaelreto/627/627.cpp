#include <iostream>

typedef long long int ll;

int main() {
    bool correcto;
    int fd, fm, fa, ea, em, ed;
    while (scanf("%d/%d/%d %d %d %d", &fd, &fm, &fa, &ea, &em, &ed), fa != 0) {
        ed = ed + em * 28 + ea * 336;
        correcto = false;
        fd += ed;
        while (!correcto) {
            if ((fm == 1 || fm == 3 || fm == 5 || fm == 7 || fm == 8 || fm == 10 || fm == 12) && (fd > 31)) {
                fd -= 31;
                fm ++;
            } else if ((fm == 4 || fm == 6 || fm == 9 || fm == 11) && (fd > 30)) {
                fd -= 30;
                fm ++;
            } else if ((fm == 2) && (fa % 4 == 0) && (fd > 29)) {
                fd -= 29;
                fm ++;
            } else if ((fm == 2) && (fa % 4 != 0) && (fd > 28)) {
                fd -= 28;
                fm ++;
            } else {
                correcto = true;
            }

            while (fm > 12) {
                fm -= 12;
                fa ++;
            }
        }

        printf("%02d/%02d/%04d\n", fd, fm, fa);
    }
    return 0;
}