//Copied

#include <iostream>
#include <vector>
#include <set>
using namespace std;


void test() {
	int N;
	int templ[200001];
	int M;
	vector<string> strs;
	cin >> N;
	for (int i=0;i<N;i++)
		cin >> templ[i];
	cin >> M;
	
	for (int i=0;i<M;i++) {
		string s;
		cin >> s;
		strs.push_back(s);
	}
	
	for (string &s : strs) {
		set<int> found_t;
		
		bool init[26]={0};
		int a_to_i[26];
		bool ans=1;
		
		if (s.size() != N)
			ans = 0;
		
		for (int i=0;i<N&&ans;i++) {
			char c = s[i];
			int t = templ[i];
			
			if (!init[c-'a']) {
				if (found_t.find(t) != found_t.end()) {
					ans = 0;
					break;
				}
				
				init[c-'a'] = 1;
				a_to_i[c-'a'] = t;
				found_t.insert(t);
				
			} else if (a_to_i[c-'a'] != t) {
				ans = 0;
				break;
			}
		}
		cout << (ans?"YES":"NO") << "\n";
	}
	
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
		test();
	return 0;
}