#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    label:
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool ok = false;
        for(int j=0; j<n; j++){
            int a=0,b=0;
            for(int i=0; i<n; i++){
                if(v[i] > j){
                    a++;
                }
                else
                    b++;
            }
            if(a==j){
                cout<<j<<endl;
                ok = true;
                break;
            }
        }
        if(!ok){
            cout<<-1<<endl;
        }
    }
}
