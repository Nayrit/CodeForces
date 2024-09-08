#include <iostream>
using namespace std;
int main() {
	string s, res = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		s[i] = (char)tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') {
			continue;
		}
		res += '.';
		res += s[i];
	}
	cout << res <<endl;
}