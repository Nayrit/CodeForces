#include <iostream>
using namespace std;

void nayrit(){
    string s;
	int n;
	cin>>n;
	cin>>s;
	if(n < 4){
	    cout<<"YES"<<endl;
	    return;
	}
	for(int i=0; i<n-3; i++){
	    if(s[i]!='a' && s[i]!='o' && s[i]!='i' && s[i]!='e' && s[i]!='u'){
                i++;
	        if(s[i]!='a' && s[i]!='o' && s[i]!='i' && s[i]!='e' && s[i]!='u'){
	            i++;
	            if(s[i]!='a' && s[i]!='o' && s[2]!='i' && s[2]!='e' && s[2]!='u'){
	                if(s[i+3]!='a' && s[i+3]!='o' && s[i+3]!='i' && s[i+3]!='e' && s[i+3]!='u'){
	                    cout<<"NO"<<endl;
	                    return;
	                }
	            }
	        }
	    }
	}
	cout<<"YES"<<endl;
	return;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}


