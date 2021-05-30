#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void) {
	int n;
	ll k;
	ll x, y;
	cin >> n >> k;
    vector <pair<ll,ll>> a(n);

	rep(i,n) {cin >> a[i].first >> a[i].second;}
	sort(a.begin(),a.end());
	rep(i,n) {
		if (a[i].first > k)break;
		k += a[i].second;
	}
	cout << k << endl;
	return 0;
}