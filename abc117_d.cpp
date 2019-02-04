#include"bits/stdc++.h"
#define ll long long

using namespace std;

int main() {
	ll N, K;
	cin >> N >> K;
	vector<ll> a(N);
	for (int i = 0; i < N; i++) 
		cin >> a[i];

		ll X = 0;
		ll ans = 0;
		
		for (ll i = 40; i >=0; i--) {
			ll cnt = 0;
			for (ll k = 0; k < N; k++) {
				if ((1ll << i&a[k]) > 0) {
					cnt++;
				}
			}
			if (cnt < N - cnt&&X + (1ll << i) <= K) {
				X += 1ll << i;
				ans += (1ll << i)*(N - cnt);
			}
			else {
				ans += (1ll << i)*cnt;
			}
	}


	cout << ans << endl;

	return 0;
}