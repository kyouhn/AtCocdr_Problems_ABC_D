#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main() {
	ll N, A, B;
	cin >> N >> A >> B;
	vector<ll>X(N);
	for (ll i = 0; i < N; i++)
	{
		cin >> X[i];
	}

	ll ans = 0;

	for (ll i = 1; i < N; i++)
	{
		ans += min((X[i] - X[i - 1]) * A, B);
	}

	cout << ans << endl;
	return 0;
}
