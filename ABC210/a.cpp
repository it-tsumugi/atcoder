#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    ll n,a,x,y,ans;
	cin >>n >> a >> x >>y;

	if(n > a )ans = a*x + (n-a)*y;
	else ans = n*x;
	cout  << ans << endl;

	return 0;	
}
