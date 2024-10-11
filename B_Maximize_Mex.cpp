#include <iostream>
#include <map>
using namespace std;
int main(){
    int q;
    cin >> q;
    while (q--){
        int n, m;
        cin >> n >> m;
        map<int, int> dp;
        for (int i(0), k; i < n; ++i)
            (cin >> k), ++dp[k];
        for (int i(0); i <= n; ++i){
            if (dp[i] == 0){
                cout << i << endl;
                break;
            }
            dp[i + m] += dp[i] - 1;
        }
    }
}