#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int& x : a) {
			cin >> x;
		}
		cout << n - count(a.begin(), a.end(), *min_element(a.begin(), a.end())) << '\n';
	}
	return 0;
}
