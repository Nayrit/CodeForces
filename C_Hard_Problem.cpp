#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        long long m, a, b, c; 
        cin >> m >> a >> b >> c;
        long long q = min(a, m);
        long long w = min(b, m);
        long long e = m - q;
        long long r = m - w;
        long long n = min(c, e + r);
        long long s = q + w + n;
        cout << s << endl;
    }
}