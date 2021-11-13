#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll n,k,a;
	cin >> n >>k>>a;

	ll num = a-1;
	if(n>k){
		rep(i,k){
			num++;
			if(num == (n+1)) num =1;
		}
	}else if(n <= k){
		rep(i,k){
			num++;
			if(num == (n+1)) num =1;
		}
	}
	cout  << num << endl;
	return 0;	
}
