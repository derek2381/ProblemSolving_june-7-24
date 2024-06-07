// problem link
// https://codeforces.com/problemset/problem/1348/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<long long int> arr(31);

    arr[0] = 1;
    long long int val = 2;

    for(int i = 1;i <= 30;i++){
        arr[i] = arr[i-1]*2;
    }

    int  t;
    cin >> t;
    while(t--){
        int n,temp, count1 = 1, count2 = 1;
        cin >> n;

        temp = n;


        long long int val1 = arr[temp],val2 = arr[temp-1];
        temp -= 2;

        while(temp > 0){
            if(val1 > val2 && count2 < n/2){
                val2 += arr[temp];
                temp--;
                count2++;
            }else{
                val1 += arr[temp];
                temp--;
                count1++;
            }
        }

        cout << abs(val1 - val2) << endl;
    }
}
