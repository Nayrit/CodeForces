#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin >> n >> m;
       int a[n][m];
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
       }
        if (n * m == 1) cout << "-1" <<endl;
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; ++j) {
                    cout << a[(i + 1) % n][(j + 1) % m] << " ";
                }
                cout <<endl;
            }
        }
    }
}