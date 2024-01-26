#include<bits/stdc++.h>
using namespace std;
void nayrit()
{
    int n,x=0,m=100;
        cin>>n;
        string s;
        cin>>s;
        char minimum = s[0];
        string s2;
        if(n!=1){
            for(int i=n-1; i>0; i--){
                if(minimum > s[i]){
                    minimum = s[i];
                    x=i;
                }
                else if(minimum == s[i] && x<i){
                    x=i;
                }
            }
        }
        s2 = s2 + s[x];
        s.insert(0,s2);
        s.erase(s.begin() + x+1);
        cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nayrit();
    }
}
