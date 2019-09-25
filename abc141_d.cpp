#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	priority_queue<int>q;
	for (int i = 0; i < N; i++){
		int a;
		cin >> a;
		q.push(a);
	}
	
	for (int i = 0; i < M; i++){
		int p = q.top();
		q.pop();
		q.push(p / 2);
	}

	long long ans = 0;
	for (int i = 0; i < N; i++){
		ans += (long long)(q.top());
		q.pop();
	}
	cout << ans << endl;
	return 0;
}
