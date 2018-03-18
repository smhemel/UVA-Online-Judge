//
//  main.cpp
//  673 - Parentheses Balance
//
//  Created by S M HEMEL on 9/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        stack<char> checker;
        char s[140];
        gets(s);
        
        //int len = (int) strlen(s);
        for (int i=0;s[i]; i++)
        {
            if (s[i] == '(' || s[i] == '[')
                checker.push(s[i]);
            else if (s[i] == ')')
            {
                if (checker.empty() || checker.top() != '(')
                {
                    checker.push('a');
                    break;
                }
                checker.pop();
            }
            else if (s[i] == ']')
            {
                if (checker.empty() || checker.top() != '[')
                {
                    checker.push('a');
                    break;
                }
                checker.pop();
            }
        }
        if(checker.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
