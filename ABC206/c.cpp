#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
	ll n,cnt=1;
	cin >> n;
	ll ans=n*(n-1)/2;
	vector <ll> a(n);
	rep(i,n) cin >> a[i];

	sort(a.begin(),a.end());
	a.push_back(-1);
	rep(i,n){
			if(a[i] == a[i+1])
				cnt++;
			else{
				ans -= cnt*(cnt-1)/2;
				cnt = 1;
			}
		}
	cout << ans << endl;
	return 0;	
}