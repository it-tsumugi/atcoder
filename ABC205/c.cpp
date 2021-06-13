#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
	double a,b,ans;
	int c;
	cin >> a >> b >> c;
	
	if(a>0 && b>0){
		ans = a/b;
		if(ans > 1) cout << ">" <<endl;
		else if(ans == 1) cout << "=" <<endl;
		else cout << "<" <<endl;
	}
	else{
		if(c%2 == 0) {
			if(abs(a) > abs(b))cout << ">" <<endl;
			else if(abs(a) == abs(b))cout << "=" <<endl;
			else cout << "<" <<endl;
		}
		else{
			if(a > b)cout << ">" <<endl;
			else if(a == b)cout << "=" <<endl;
			else cout << "<" <<endl;
		}
	}
	return 0;	
}