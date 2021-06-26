#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    ll a,b,c;
	vector <ll> vec(3);
	cin >> a >> b >> c;

	vec.at(0)=a+b;
	vec.at(1)=b+c;
	vec.at(2)=c+a;
	sort(vec.begin(),vec.end());
	cout << vec.at(2) << endl;
	return 0;	
}
