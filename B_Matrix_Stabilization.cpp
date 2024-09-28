#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                int maxVal = 0;
                if (i > 0)
                    maxVal = max(maxVal, a[i - 1][j]);
                if (i < n - 1)
                    maxVal = max(maxVal, a[i + 1][j]);
                if (j > 0)
                    maxVal = max(maxVal, a[i][j - 1]);
                if (j < m - 1)
                    maxVal = max(maxVal, a[i][j + 1]);
                if (maxVal < a[i][j])
                    a[i][j] = maxVal;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
}