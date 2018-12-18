//
//  main.cpp
//  Uva 11970 - Lucky Numbers
//
//  Created by S M HEMEL on 2/4/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n,l=1;
    stack <int> st;
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        int temp = 0;
        for(int i=1; (temp = i*i)<n; i++)
            if((n-temp)%i==0)
                st.push(n-temp);
        printf("Case %d:",l++);
        while (!st.empty())
        {
            printf(" %d",st.top());
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
