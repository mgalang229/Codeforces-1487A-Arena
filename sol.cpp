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
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the array in non-decreasin order
		sort(a.begin(), a.end());
		int winners = 0;
		for (int i = 1; i < n; i++) {
			// check if the level of the current hero greater than the 
			// level of the weakest hero
			// if the current hero's level is STRICTLY higher then
			// increment the counter (it means the current hero is a possible winner)
			if (a[i] > a[0]) {
				winners++;
			}
		}
		cout << winners << '\n';
	}
	return 0;
}
