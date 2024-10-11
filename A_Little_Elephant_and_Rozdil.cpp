#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v,b;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    if(b[0]==b[1]){
        cout<<"Still Rozdil"<<endl;
        return 0;
    }
    else{
        long long int min=INT64_MAX,p;
        for(int i=0; i<n; i++){
            if(v[i]<min){
                min=v[i];
                p=i;
            }
        }
        cout<<p+1<<endl;
    }
}