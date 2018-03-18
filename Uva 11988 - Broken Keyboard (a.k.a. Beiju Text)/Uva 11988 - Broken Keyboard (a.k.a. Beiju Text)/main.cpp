//
//  main.cpp
//  Uva 11988 - Broken Keyboard (a.k.a. Beiju Text)
//
//  Created by S M HEMEL on 22/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
    while (cin >> s)
    {
        string ans = "";
        int len = (int)s.size()-1;
        for(int i=len; i>=0; i--){
            if(s[i]=='['){
                for(int k=i+1; k<=len; k++){
                    if(s[k]==']' || s[k]=='[') break;
                    cout << s[k];
                }
            }
        }
        int k=0;
        for(k=0; k<=len; k++){
            if(s[k]==']' || s[k]=='[') break;
            cout << s[k];
        }
        bool f = false;
        for(; k<=len; k++){
            if(s[k]==']') {f = true; continue;}
            if(s[k]=='[') f = false;
            if(f) cout << s[k];
        }
        cout << endl;
    }
    return 0;
}
