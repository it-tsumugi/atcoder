#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll s,t,x;
	cin >> s >> t>> x ;

	if(s > t){
		t = t+24;
	}

	if(s <= x && x<t || s <= x + 24 && x +24<t ){
		cout << "Yes" <<endl;
	}
	else{
		cout << "No" <<endl;
	}
	return 0;	
}
