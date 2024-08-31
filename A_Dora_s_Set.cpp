#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--) {
        int l, r;
        cin >>l >>r;  
        l -= (l&1);
        cout <<(r-l+1)/4 <<'\n';
    }
}