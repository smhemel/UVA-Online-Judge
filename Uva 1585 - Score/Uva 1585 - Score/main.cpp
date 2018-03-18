//
//  main.cpp
//  Uva 1585 - Score
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string line;
        cin >> line;
        int count = 0;
        int previous = 0;
        for (int i=0; i<(int)line.size(); i++)
        {
            if (line[i] == 'O') {
                previous++;
                count += previous;
            }
            else previous = 0;
        }
        cout << count << '\n';
    }
    return 0;
}
