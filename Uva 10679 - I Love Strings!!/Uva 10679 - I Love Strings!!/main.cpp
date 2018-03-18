//
//  main.cpp
//  Uva 10679 - I Love Strings!!
//
//  Created by S M HEMEL on 3/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

//KMP Time Limit
/*#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
string s,s1;
int main()
{
    int test,n;
    cin >> test;
    while (test--)
    {
        cin >> s;
        cin >> n;
        int len = (int) s.size();
        while(n--)
        {
            bool flag = false;
            int j = 0;
            s1.clear();
            cin >> s1;
            int len1 = (int) s1.size();
            int d = len-len1+1;
            for(int i=0; i<d; i++)
            {
                int index = i;
                if(s[i]==s1[j])
                {
                    while(j!=len1-1 && s[i]==s1[j])
                        i++,j++;
                    if(j==len1-1){
                        flag = true;
                        break;
                    }
                    else
                    {
                        i = index+1;
                        j = 0;
                    }
                }
            }
            if(flag==true)
                puts("y");
            else
                puts("n");
        }
        s.clear();
    }
    return 0;
}*/



// 0.20 Second
/*#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char  str[100010],ss[1010];
    int test,q,l2,i,j,iden;
    cin>>test;
    while(test--)
    {
        scanf("%s",str);
        cin>>q;
        while(q--)
        {
            scanf("%s",ss);
            l2 = (int)strlen(ss);
            iden=0; i=0;
            if(str[0]==ss[0])
            {
                for(j=0; j<l2; j++)
                {
                    if(str[i]==ss[j])
                        i++;
                    else if(str[i]=='\0')
                    {
                        iden=1;
                        break;
                    }
                    else if(str[i]!=ss[j])
                    {
                        iden=1;
                        break;
                    }
                }
                if(iden==0)
                    printf("y\n");
                else
                    printf("n\n");
            }
            else
                printf("n\n");
        }
    }
    return 0;
}*/




#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
#define LL long long
using namespace std;
int main()
{
    LL t,n;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cin >> n;
        while(n--)
        {
            string ss;
            cin >> ss;
            LL ll = ss.size();
            if(s.substr(0,ll)==ss)
                cout<<"y"<<endl;
            else
                cout<<"n"<<endl;
        }
    }
    return 0;
}
