#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i<k)
            sum+=a[i];
    }
    int x = sum;
    int y=0;
    for(int i=k; i<n; i++)
    {
        sum = sum+a[i]-a[i-k];
        if(x > sum)
        {
            x = sum;
            y = i-k+1;
        }

    }
    cout<<y+1<<endl;

}

