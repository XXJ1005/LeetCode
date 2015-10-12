#if 0
#include "common.h"

bool isIsomorphic(string s, string t) {
	int len = s.size();
	if (len <= 1)
		return true;
	if (t.size() != len)
		return false;

	int scheck[257], tcheck[257];

	for (int i = 0; i< 257; i++) {
		scheck[i] = -1;
		tcheck[i] = -1;
	}
	scheck[s[0]] = t[0];
	tcheck[t[0]] = s[0];

	for (int i = 1; i < len; ++i) {
		if (scheck[s[i]] != -1) {
			if (scheck[s[i]] != t[i])
				return false;
		}
		else {
			scheck[s[i]] = t[i];
		}
		if (tcheck[t[i]] != -1) {
			if (tcheck[t[i]] != s[i])
				return false;
		}
		else {
			tcheck[t[i]] = s[i];
		}
	}
	return true;
}

int main() {
	string s, t;
	while (cin >> s >> t) {
		if (isIsomorphic(s, t)) {
			cout << "ok" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}
#endif