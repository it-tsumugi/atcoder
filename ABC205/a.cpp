#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int a,b;
    double ans;
    cin >> a >> b;
    
    ans = (double)b/100 * (double)a; 
    cout <<ans<<endl;
    return 0;
}