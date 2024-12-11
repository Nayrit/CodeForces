#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(m);
    vector<int> dis(m - 1);
    for (int i = 0; i < m; ++i)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= m - n; ++i){
        int diff = vec[i + n - 1] - vec[i];
        min_diff = min(min_diff, diff);
    }
    cout << min_diff;
}
