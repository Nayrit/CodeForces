#include<bits/stdc++.h>
using namespace std;

int palindrome(const string){

}

int main(){
    int t;
    cin>>t;
    while(t--){
            string s;
        cin>>s;
        int nayrit=1;
        for(int i=0; i<s.size(); i++){
            if(s[i] != s[i+1]){
                nayrit = 0;
                break;
            }
        }
        if(nayrit==1){
            cout<<"NO"<<endl;
            continue;
        }
        int lopa=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i] != s[i+1]){
                lopa++;
                i++;
            }
        }
        if(lopa == 1){
            cout<<"NO"<<endl;
            continue;
        }
        if(palindrome(s)){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
