//
//  main.cpp
//  Uva 542 - France '98
//
//  Created by S M HEMEL on 7/4/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
vector<string> s(16);
vector<vector<double> > beat(16, vector<double>(16));
int main()
{
    for(int i=0; i<16; i++)
        cin >> s[i];
    for(int i=0; i<16; i++)
        for(int j=0; j<16; j++) {
            cin >> beat[i][j];
            beat[i][j] /= 100;
        }
    vector<double> pro_old(16,1);
    vector<double> Pro_new(16);
    
    for(int l=0,t=1; l<4; l++,t*=2)
    {
        for(int i=0; i<16; i++)
        {
            int g = i/t;
            int start;
            if (!(g%2))
                start = g*t+t;
            else
                start = g*t-t;
            Pro_new[i] = 0;
            for(int x=0; x<t; x++)
                Pro_new[i] += pro_old[start + x] * beat[i][start + x];
            Pro_new[i] *= pro_old[i];
        }
        pro_old = Pro_new;
    }
    cout << setprecision(2) << fixed << std::left;
    for (int i = 0; i < 16; ++i) {
        pro_old[i] *= 100;
        cout << setw(10) << s[i] << " p=" << pro_old[i] << "%\n";
    }
    return 0;
}
