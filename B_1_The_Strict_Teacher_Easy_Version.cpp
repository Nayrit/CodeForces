#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int b;
        for (int i = 0; i < q; i++){
            cin >> b;
            int k = upper_bound(a.begin(), a.end(), b) - a.begin();
            if (k == 0)
                cout << a[0] - 1 << endl;
            else if (k == m)
                cout << n - a[m - 1] << endl;
            else
                cout << (a[k] - a[k - 1]) / 2 << endl;
        }
    }
}

