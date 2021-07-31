#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    ll a,b;
	string ans;
	cin >> a >>b;

	if(0<a && b==0)ans="Gold";
	else if(a==0 && 0<b)ans="Silver";
	else if(a>0 && 0<b)ans="Alloy";

	cout  << ans << endl;
	return 0;	
}
