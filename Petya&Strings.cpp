#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int s=s1.size();
    for(int i=0; i<s; i++)
        if((s1[i]>= 'A' && s1[i]<='Z'))
            s1[i]=s1[i]+32;
    for(int i=0; i<s; i++)
        if(s2[i]>= 'A' && s2[i]<='Z')
            s2[i]=s2[i]+32;
    int result=s1.compare(s2);
    cout<<result<<endl;
}
