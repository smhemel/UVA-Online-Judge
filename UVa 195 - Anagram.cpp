//
//  main.cpp
//  UVa 195 - Anagram
//
//  Created by S M HEMEL on 2/1/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

bool comparator(char a, char b){
    if(tolower(a) == tolower(b)){
        return a<b;
    }
    return tolower(a) < tolower(b);
}
int main() {
    char word[1000];
    int n;
    
    cin >> n;
    while(n--){
        cin.ignore();
        cin >> word;
        int len = (int) strlen(word);
        sort(word,word+len,comparator);
        cout << word << endl;
        while(next_permutation(word,word+len,comparator))
            cout << word << endl;
    }
    return 0;
}
