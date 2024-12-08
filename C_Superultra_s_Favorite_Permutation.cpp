#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<5) cout<<-1<<endl;
        else{
            for(int i = 7;i <= n;i++){
                if(i % 2)
                    cout<<i<<" ";
            }
            cout << "1 3 5 4 2 ";
            for(int i=6;i<=n;i++)
                if(i%2==0)cout<<i<<" ";
            cout<<endl;
        }
    }
}