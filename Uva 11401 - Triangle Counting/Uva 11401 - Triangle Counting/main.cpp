//
//  main.cpp
//  Uva 11401 - Triangle Counting
//
//  Created by S M HEMEL on 11/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int count = 0;
        if(n==0) break;
        for (int i=1; i<=n; i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                for(int l=j+1;l<=n;l++)
                {
                    if(i+j<=l)
                        break;
                    else if (i+j>l && i+l>j && l+j>i)
                        count++;
                }
            }
        }
        cout << count <<endl;
    }
    return 0;
}*/


#include <iostream>
using namespace std;
unsigned long long add = 2, diff = 2, ans[1000001] = {0, 0, 0, 0, 1};
int main()
{
    int n;
    for (int i=5; i<= 1000000; i++)
    {
        ans[i] = ans[i-1]+add;
        add += diff;
        diff += !(i&1); //if is even than diff = diff+1
    }
    while ((cin >> n) && n>=3)
    {
        cout << ans[n] <<endl;
    }
    return 0;
}
