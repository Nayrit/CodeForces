#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        if (r < L)
            cout << "1" << endl;
        else if (l > R)
            cout << "1" << endl;
        else{
            int s = max(l, L);
            int e = min(r, R);
            if (s <= e){
                int c = e - s + 1;
                if (l == L && r == R) cout << c - 1 << endl;
                else if (l != L && r != R) cout << c + 1 << endl;
                else cout << c << endl;
            }
        }
    }
}