#include<bits/stdc++.h>
using namespace std;
long long int nayrit(vector<int>v,int k,int ind, int n, long long int sum, vector<vector<int>>&d){
    if(ind + 1 >= n)
        return v[ind];
    if(k==0)
        return 0;
    if(d[k][n] != -1)
        return d[k][n];
    long long int a = v[ind]+v[ind + 1] + nayrit(v,k-1,ind+2,n,sum,d);
    long long int b=v[n-1]+nayrit(v,k-1,ind,n-1,sum,d);
    return d[k][n] = min(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        long long int sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            sum=sum+x;
        }
        sort(v.begin(),v.end());
        vector<vector<int>>d(k+1,vector<int>(n+1,-1));
        long long int q=nayrit(v,k,0,n,0,d);
        cout<<sum-q<<endl;
    }
}
