#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    int a,b;
	cin >> a >> b;

	int cnt=0;
	for(int i=a;i<=b;i++)cnt++;
	cout << cnt << endl;

	return 0;	
}
