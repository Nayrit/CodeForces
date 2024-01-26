#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int triangle(string s)
{
    if(s=="Tetrahedron")
        return 4;
    if(s=="Cube")
        return 6;
    if(s=="Octahedron")
        return 8;
    if(s=="Dodecahedron")
        return 12;
    if(s=="Icosahedron")
        return 20;
}
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++)
        cnt = cnt + triangle(v[i]);
    cout<<cnt<<endl;
}
