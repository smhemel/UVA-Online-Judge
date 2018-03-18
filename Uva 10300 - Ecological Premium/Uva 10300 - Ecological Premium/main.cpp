//
//  main.cpp
//  Uva 10300 - Ecological Premium
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    int test,n;
    cin >> test;
    while (test--) {
        ll x,y,z,ans = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x >> y >> z;
            ans += x*z;
        }
        cout << ans << endl;
    }
    return 0;
}
