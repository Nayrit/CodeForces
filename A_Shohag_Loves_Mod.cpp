#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long curr=0;
        for(int i=0; i<n;i++){
            for(int j=0; j>=0 ;j++){
                if(j%(i+1)==i && j>curr){
                    curr=j;
                    cout<<j;
                    cout<<" ";
                    break;
                }
            }
        }
        cout<<endl;

    }
}
