//
//  main.cpp
//  Uva 568 - Just the Facts
//
//  Created by S M HEMEL on 2/4/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include <iostream>
using namespace std;
int m[10001];
void fact()
{
    int f = 1;
    for (int i = 1; i <= 10000; ++i)
    {
        int c = 1;
        while ((i / c) % 10 == 0)
            c *= 10;
        f *= (i / c);
        c = 1;
        while ((f / c) % 10 == 0)
            c *= 10;
        f = (f / c) % 100000;
        m[i] = f;
    }
}
int main()
{
    m[0] = 1;
    fact();
    int n;
    while (cin >> n)
    {
        cout.width(5);
        cout.fill(' ');
        cout << n;
        cout << " -> " << m[n] % 10 << endl;
    }
    return 0;
}*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int result = 1,x = 0,x1 = 0;
        int m = n;
        for(int l=1; l<=m; l++)
        {
            int i = l;
            while(i%2==0)
            {
                x += 1;
                i /=2;
            }
            while (i%5==0)
            {
                x1 += 1;
                i /= 5;
            }
            result *= (i%10);
            result %= 10;
        }
        for(int i=0; i<x-x1; i++)
        {
            result <<= 1;
            result %= 10;
        }
        printf("%5d -> %d\n",n,result);
    }
    return 0;
}
