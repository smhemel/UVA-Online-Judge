#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    while(cin >> n >> m && n>-1 && m>-1){
        cout << min(abs(n-m),abs(100-abs(n-m))) << endl;
    }
    return 0;
}
