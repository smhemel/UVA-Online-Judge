//
//  main.cpp
//  Uva 12708 - GCD The Largest
//
//  Created by S M HEMEL on 1/24/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,m;
    cin >> n;
    while(n--){
        cin >> m;
        printf("%llu\n", m>>1);
    }
    return 0;
}
