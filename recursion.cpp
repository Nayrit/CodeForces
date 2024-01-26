#include <bits/stdc++.h>
using namespace std;
void print(int n) {
    if (n <= 0) {
        return;
    }
    cout << n << endl;
    print(--n);
    
}
int main() {
    int n = 6;
    print(n);
    return 0;
}
