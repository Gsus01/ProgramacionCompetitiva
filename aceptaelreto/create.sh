#!/bin/bash
mkdir $1
cd $1
touch sample.in sample.out

cat > $1.cpp << END
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    return 0;
}
END

cat > run.sh << ENDMASTER
#!/bin/bash

g++ $1.cpp -o $1 -Wall -g
./$1 < sample.in | tee sample.out

ENDMASTER
