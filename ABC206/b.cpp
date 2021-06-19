#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int n,i=1;
    cin >> n;

    while(i*(i+1)/2 < n)i++;
    cout << i <<endl;
    
    return 0;
}