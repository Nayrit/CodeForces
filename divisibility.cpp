#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
label:
    while(t--)
    {
        int a,b,i,x;
        cin>>a>>b;
        if(b>a)
        {
            cout<<b-a<<endl;
            goto label;
        }
        if (a % b == 0)
        {
            cout << 0 << endl;
            goto label;
        }
        x = a / b;
        x++;
        cout << (x * b) - a << endl;
    }
}
