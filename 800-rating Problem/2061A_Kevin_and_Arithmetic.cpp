#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], even=0, odd=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if(odd == n)
            cout << n-1 << endl;
        else if(even == n)
            cout << 1 << endl;
        else
            cout << odd+1 << endl;        
    }

    return 0;
}