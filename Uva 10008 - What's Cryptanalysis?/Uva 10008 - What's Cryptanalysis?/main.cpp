//
//  main.cpp
//  Uva 10008 - What's Cryptanalysis?
//
//  Created by S M HEMEL on 12/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <vector>
#include <map>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
map<char, int> Map;
bool comp(char A, char B)
{
    if (Map[A] != Map[B])
        return Map[A] > Map[B];
    return A < B;
}

int main()
{
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector < char > cha;
    int n;
    for(int i=0; i<=25; i++)
        Map[alp[i]] = 0;
    cin >> n;
    string str;
    getchar();
    while (n--)
    {
        getline(cin, str);
        int l = (int) str.length();
        for(int i=0; i<l; i++)
        {
            if (isalpha(str[i]))
            {
                char c = toupper(str[i]);
                if (Map[c] == 0)
                    cha.push_back(c);
                Map[c]++;
            }
        }
    }
    sort(cha.begin(), cha.end(), comp);
    int s = (int) cha.size();
    for(int i=0; i<s; i++)
    cout << cha[i] << " " << Map[cha[i]] << endl;
    return 0;
}
