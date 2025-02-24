#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], even=0, odd=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else if(a[i] % 2 == 1)
            odd++;
    }

    for(int i=0; i<n && even < odd; i++){
        if(a[i] % 2 == 0)
            cout << i+1 << endl;
    }
    for(int i=0; i<n && odd < even; i++){
        if (a[i] % 2 == 1)
            cout << i+1 << endl;
    }

    return 0;
}