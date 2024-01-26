#include <iostream>
using namespace std;
int main(){
    int n,P,V,T, cnt = 0;
    cin >> n;
    while (n--)
    {
        cin >> P >> V >> T;
        if (P + V + T >= 2)
            cnt = cnt + 1;
    }
    cout << cnt << endl;
    return 0;
}
