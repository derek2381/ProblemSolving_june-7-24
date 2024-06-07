// problem link
// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        long long int x = l, y = 2*l;


        if(y > r){
            cout << -1 << " " << -1 << endl;
        }else{
            cout << x << " " << y << endl;
        }
    }
}
