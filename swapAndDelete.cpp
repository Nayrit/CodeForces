#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x = 0,y = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0')
                x++;
            else
                y++;
        }
        string res = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0' && y<1)
                break;
            if(s[i] == '1' && x<1)
                break;
            if(s[i] == '0' && y>0){
                res += '1';
                y--;
            }
            else if(s[i] == '1' && x>0){
                res += '0';
                x--;
            }
        }
        cout << (s.length() - res.length()) << endl;
    }
    return 0;
}