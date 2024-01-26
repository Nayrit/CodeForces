#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef vector<int> VI;
#define fi first
#define se second
#define MP make_pair
#define N      1100000
#define M      51
#define MOD 1000000007
#define eps 1e-8
#define pi     acos(-1)
#define oo     1010000000

char ch[N];
int a[N],b[N],c[N];

int main()
{
    //freopen("zoj4060.in","r",stdin);
    //freopen("zoj4060.out","w",stdout);
    int cas;
    scanf("%d",&cas);
    for(int v=1; v<=cas; v++)
    {
        int n;
        scanf("%d",&n);
        scanf("%s",ch+1);
        for(int i=1; i<=n; i++) a[i]=ch[i]-'0';
        scanf("%s",ch+1);
        for(int i=1; i<=n; i++) b[i]=ch[i]-'0';
        for(int i=1; i<=n; i++) c[i]=a[i]^b[i];
        int s=0;
        c[0]=c[n+1]=0;
        for(int i=0; i<=n; i++)
            if(c[i]==0&&c[i+1]==1) s++;
        ll ans=0;
        if(s==0) ans=(ll)(n+1)*n/2;
        if(s==1) ans=(n-1)*2;
        if(s==2) ans=6;
        if(s==3) ans=0;
        printf("%lld\n",ans);
    }
    return 0;
}
