#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int x,y;
    cin >> x >> y;
    
    int sum=x+y,ans;
    switch(sum){
        case 0 : ans=0; break;
        case 1 : ans=2; break;
        case 2 : ans=1; break;
        case 3 : ans=0; break;
        case 4 : ans=2; break;
    }
    cout << ans <<endl;
    return 0;
}