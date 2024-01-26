#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        cin>>l>>r;
        int nayrit=0,lopa=-1;
        for(int i=l; i<=r;i++)
        {
            string s = to_string(i);
            int diff = *(max_element(s.begin(), s.end()))- *(min_element(s.begin(), s.end()));
            if(diff>lopa){
                lopa=diff;
                nayrit=i;
            }
            if(lopa==9)
                break;
//            v.push_back(la);
  //          ala = std::distance(v.begin(),std::max_element(v.begin(), v.end()));
        }
        cout<<nayrit<<endl;
    }
}
