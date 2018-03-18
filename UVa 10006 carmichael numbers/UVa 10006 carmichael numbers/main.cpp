//
//  main.cpp
//  UVa 10006 carmichael numbers
//
//  Created by S M HEMEL on 1/17/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
const int Max = 65005;
bool isComp[Max];
bool isCar[Max];
int main()
{
    for(int i=3; i<Max; i+=2)
        isCar[i] = true;
    for(int i=3; i<Max; i+=2)
        if (!isComp[i])
        {
            isCar[i] = false;
            for(int j=3*i; j<Max; j+=2*i)
            {
                isComp[j] = true;
                //Carmicheal Number
                if ((j/i)%i == 0 || (j-1)%(i-1) != 0)
                    isCar[j] = false;
            }
        }
    int n;
    while (cin >> n, n)
    {
        if (isCar[n])
            cout << "The number " << n << " is a Carmichael number.\n";
        else
            cout << n << " is normal.\n";
    }
    return 0;
}
