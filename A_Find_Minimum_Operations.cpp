#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k == 1){
            cout<<n<<endl;
            continue;
        }
        int res=0;
        while(n>0){ 
            res += n%k;
            n/=k;    
        }
        cout<<res<<endl;
    }
}