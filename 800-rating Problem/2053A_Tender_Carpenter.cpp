#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        bool flag1 = false, flag2 = true;
        for (int i=0; i<n; i++){
            if(a[0] != a[i])
                flag2 = false;
            if (i == n-1)
                continue;
            if(a[i]+a[i] > a[i+1] && a[i+1]+a[i+1] > a[i])
                flag1 = true;
        }
        
        if(flag1 || flag2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}