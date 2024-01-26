#include <bits/stdc++.h>
using namespace std;
void nayrit(int a, int b){
    if(a!=1){
         cout<<1<<endl;
        return;
    }
    if(a==1){
        cout<<2<<endl;
        return;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        nayrit(a,b);
    }
}