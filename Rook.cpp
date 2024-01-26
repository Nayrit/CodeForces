#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c = s[0];
        char b = 97;
        int v = s[1];
        for(int i=1; i<9; i++){
            if(i==v-48){
                continue;
            }
            cout<<s[0]<<i<<endl;
        }
        for(int i=97; i<105; i++){
            if(i==c){
                b++;
                continue;
            }
            cout<<b++<<s[1]<<endl;
        }
    }
}