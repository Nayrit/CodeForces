#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        char s[2][n];
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < n; j++)
                cin >> s[i][j];
        }
        int ans = 0;
        for (int i = 0; i < 2; i++){
            for (int j = 1; j < n - 1; j++){
                if (s[i][j] == '.'){
                    if (s[i][j - 1] == 'x' && s[i][j + 1] == 'x' && s[1 - i][j] == '.' && s[1 - i][j + 1] == '.' && s[1 - i][j - 1] == '.')
                        ans++;
                }
            }
        }
        cout << ans << endl;
    }
}