#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,x,y,f=0;
        cin>>n>>m>>k>>x>>y;
        for(int i=0; i<k; i++){
            int v,b;
            cin>>v>>b;
            int z =(abs(x-v) + abs(y-b));
            if(z % 2 == 0)
                f=1;
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}