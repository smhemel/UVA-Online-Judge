//
//  main.cpp
//  Uva 10976 - Fractions Again?!
//
//  Created by S M HEMEL on 1/17/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k;
    while (cin >> k)
    {
        vector<pair<int, int> > solutions;
        for (int i=k+1; i<=2*k; i++)
        {
            if ((k*i)%(i-k)==0)
                solutions.push_back(make_pair((k*i)/(i-k),i));
        }
        cout << solutions.size() << endl;
        for (size_t i=0; i<solutions.size(); ++i)
            cout << "1/" << k << " = 1/" << solutions[i].first << " + 1/" << solutions[i].second << endl;
    }
    return 0;
}
