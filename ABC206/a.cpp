#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int N,ans;
    cin >> N;
    ans = (int)(1.08*N);
    if(ans < 206) cout << "Yay!" <<endl;
    else if(ans == 206) cout << "so-so" <<endl;
    else cout << ":(" <<endl;
    return 0;
}