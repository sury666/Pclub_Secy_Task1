#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int test_count = 10;
    int min_n = opt<int>("min-n");
    int min_d = opt<int>("min-d");
    while (test_count--) { 
        int n = rnd.next(min_n, min_n + 100);
        int m = rnd.next(1, n);
        int k = rnd.next(1, m);
        cout << n << ' ' << m << ' ' << k << endl;
        for (int i = 1; i <= m; i++) {
            cout << rnd.next(min_d, min_d + 100) << ' ' << i << endl;
        }
        for (int i = 0; i < n - m; i++) {
            cout << rnd.next(min_d, min_d + 100) << ' ' << rnd.next(1, m) << endl;
        }
    }
}
