#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0,l,b,sum=0;
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<k-1; i++){
            if(v[i]==1){
                cnt++;
                continue;
            }
            b=v[i]*2-1;
            sum=sum+b;
        }
        cout<<sum+cnt<<endl;

    }
}