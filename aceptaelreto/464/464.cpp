#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool fun(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        vector<pair<int,int>> v;
        
        int horas, min, seg;
        for (int i = 0; i < n; i++) {
            scanf("%2d:%2d:%2d", &horas, &min, &seg);
            // create a pair
            v.push_back(make_pair(i, horas * 3600 + min * 60 + seg));
        }
        sort(v.begin(), v.end(), fun);
        int posi[n];
        int pos = 1, acum = 0, ant = v[0].second;
        for (int i = 0; i < n; i++) {
            if (ant + 1 < v[i].second) {
                pos+= acum;
                acum = 1;
            } else {
                acum++;
            }
            // printf("%d ", v[i].second);
            ant = v[i].second;
            posi[v[i].first] = pos;
            // printf("%d\n", pos);
        }
        for (int i = 0; i < n; i++) {
            printf("%d\n", posi[i]);
        }
        printf("---\n");

    }

    return 0;
}
