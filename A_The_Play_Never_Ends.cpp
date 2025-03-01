#include<iostream>
using namespace std;
void nayrit(){
    int n;
    cin>>n;
    int flag=0;
    if(n>1) flag=(n - 1) % 3;
    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}