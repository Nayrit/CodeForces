#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t=1; cin >>t;
    while(t--){
        int m[3];
        cin >>m[0] >> m[1]>> m[2];
        int max = 5;
        for(int i = 0; i < 3, max > 0; i++, max--){
            sort(m, m+3);
            m[0]++;
        }
        cout << m[0] * m[1] * m[2] << endl;
    }
}