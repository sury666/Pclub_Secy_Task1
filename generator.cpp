#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int test_count = atoi(argv[0]);
    while (test_count--) { 
        int n = rnd.next(1, 1000);
        int m = rnd.next(1, n);
        int k = rnd.next(1, m);
        cout << n << ' ' << m << ' ' << k << endl;
        for (int i = 1; i <= m; i++) {
            cout << rnd.next(1, 1000) << ' ' << i << endl;
        }
        for (int i = 0; i < n - m; i++) {
            cout << rnd.next(1, 1000) << ' ' << rnd.next(1, m) << endl;
        }
    }
}