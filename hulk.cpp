#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"I hate it"<<endl;
        return 0;
    }
    if(n%2==0)
    {
        for(int i=1; i<n; i++)
        {
            if(i%2!=0)
                cout<<"I hate that ";
            else
                cout<<"I love that ";
            }
        cout<<"I love it"<<endl;
    }
    else{
        for(int i=1; i<n; i++)
        {
            if(i%2!=0)
                cout<<"I hate that ";
            else
                cout<<"I love that ";
            }
        cout<<"I hate it"<<endl;
    }
}
