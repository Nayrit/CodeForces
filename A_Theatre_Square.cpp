#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,a;
     double p,r;
     cin>>n>>m>>a;
     p=(double)n/a;
     r=(double)m/a;
     cout<<(long long int)(ceil(p) *ceil(r));
}