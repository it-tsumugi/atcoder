#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
    ll n,i=0;
    string s;
    cin >> n >> s;

    while(1){
        if(s.at(i) == '1'){
            if(i%2 == 0)
                cout << "Takahashi"<< endl;
            else
                cout << "Aoki"<< endl;
            break;
        }
        i++;
    }
}
   