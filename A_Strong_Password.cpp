#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int c = 0, cnt = 0;
        string s;
        cin >> s;
        int n = s.size();
        bool ok = false;
        for (int i = 0; i < n; i++){
            if (!ok and i > 0){
                if (s[i] == s[i - 1]){
                    cout << char((s[i] - 'a' + 1) % 26 + 'a');
                    ok = true;
                }
            }
            cout << s[i];
        }
        if (!ok)
            cout << char((s[n - 1] - 'a' + 1) % 26 + 'a');
        cout << endl;
    }
}