#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n), b(n);
        bool flag = false;

        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){          
                set <int> c;
                for(int k=0; k<n; k++){
                    c.insert(a[k]+b[k]);
                }
                if(c.size() >= 3){
                    flag = true;
                    break;
                }
                swap(a[i], a[j]);
            }
            if (flag== true)
                break;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}