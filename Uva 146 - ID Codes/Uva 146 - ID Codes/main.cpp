//
//  main.cpp
//  Uva 146 - ID Codes
//
//  Created by S M HEMEL on 22/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string id;
    while (cin >> id && id != "#")
    {
        if(next_permutation(id.begin(), id.end()))
            cout << id << '\n';
        else
            cout << "No Successor\n";
    }
    return 0;
}
