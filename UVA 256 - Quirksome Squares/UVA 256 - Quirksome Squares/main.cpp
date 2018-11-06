//
//  main.cpp
//  UVA 256 - Quirksome Squares
//
//  Created by S M HEMEL on 22/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
vector<int> uniqueNumbers[4] = {
    {0, 1, 81},
    {0, 1, 2025, 3025, 9801},
    {0, 1, 88209, 494209, 998001},
    {0, 1, 4941729, 7441984, 24502500, 25502500, 52881984, 60481729, 99980001}};
int main()
{
    int n;
    while (cin >> n)
    {
        for (auto val : uniqueNumbers[(n/2-1)])
            cout << setw(n) << setfill('0') << val << '\n';
    }
    return 0;
}
