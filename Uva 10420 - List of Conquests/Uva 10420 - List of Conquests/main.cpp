//
//  main.cpp
//  Uva 10420 - List of Conquests
//
//  Created by S M HEMEL on 12/24/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    vector<string>v;
    map<string,int>mp;
    string s,a;
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>s;
        getchar();
        getline(cin,a);
        if(mp[s])
            mp[s]++;
        else
        {
            mp[s]++;
            v.push_back(s);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        string c=v[i];
        cout<<""<<c<<" "<<mp[c]<<endl;
    }
    v.clear();
    return 0;
}
