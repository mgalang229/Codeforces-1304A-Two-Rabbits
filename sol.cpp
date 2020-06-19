#include <bits/stdc++.h>

using namespace std;

void decode() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	int n1 = y - x;
	int n2 = a + b;
	if(n1 % n2 == 0) {
		cout << n1 / n2;
	}
	else {
		cout << -1;
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
