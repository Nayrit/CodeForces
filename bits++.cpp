#include<bits/stdc++.h>
using namespace std;
int x=0;
int main()
{
    int n;
    string s;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>s;
        if(s=="x++" || s=="X++" || s=="++x" || s=="++X")
        {
            x++;
        }
        if(s=="x--" || s=="X--" || s=="--x" || s=="--X")
        {
            x--;
        }
    }
    cout<<x;

}
