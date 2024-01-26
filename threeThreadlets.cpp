#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,f=1;
        vector<int>v;
        for(int i=0; i<3; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        a=v[0];
        b=v[1];
        c=v[2];
        int choto = min({a, b, c});
        int cnt=0;
        if(a%choto != 0 || b%choto != 0 || c%choto != 0)
            f=0;
        while(a != choto){
            if(a%choto !=0 || cnt>3){
                f=0;
                break;
            }
            a-=choto;
            cnt++;
        }
        while(b != choto){
            if(b%choto !=0 || cnt>3){
                f=0;
                break;
            }
            b-=choto;
            cnt++;
        }
        while(c != choto){
            if(c%choto !=0 || cnt>3){
                f=0;
                break;
            }
            c-=choto;
            cnt++;
        }
        if(cnt>3) f=0;
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}