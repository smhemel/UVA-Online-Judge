//
//  main.cpp
//  Uva 401-Palindromes
//
//  Created by S M HEMEL on 11/15/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string s,a,b;
    char m[3000];
    memset(m,NULL,sizeof(m));
    m['A']='A';
    m['E']='3';
    m['H']='H';
    m['I']='I';
    m['J']='L';
    m['L']='J';
    m['M']='M';
    m['O']='O';
    m['S']='2';
    m['T']='T';
    m['U']='U';
    m['V']='V';
    m['W']='W';
    m['X']='X';
    m['Y']='Y';
    m['Z']='5';
    m['1']='1';
    m['2']='S';
    m['3']='E';
    m['5']='Z';
    m['8']='8';
    while(cin>>s)
    {
        a=b="";
        int len=s.size();
        for(int i=len-1;i>=0;i--)
        {
            a+=s[i];
            b+=m[s[i]];
        }
        if (s==a && s==b)
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if (s==a && s!=b)
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else if (s!=a && s==b)
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
