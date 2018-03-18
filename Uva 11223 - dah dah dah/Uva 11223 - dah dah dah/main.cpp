//
//  main.cpp
//  Uva 11223 - dah dah dah
//
//  Created by S M HEMEL on 4/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
map<string, char> store;
void call()
{
    store[".-"] = 'A'; store["-..."] = 'B'; store["-.-."] = 'C';
    store["-.."] = 'D'; store["."] = 'E'; store["..-."] = 'F';
    store["--."] = 'G'; store["...."] = 'H'; store[".."] = 'I';
    store[".---"] = 'J'; store["-.-"] = 'K'; store[".-.."] = 'L';
    store["--"] = 'M'; store["-."] = 'N'; store["---"] = 'O';
    store[".--."] = 'P'; store["--.-"] = 'Q'; store[".-."] = 'R';
    store["..."] = 'S'; store["-"] = 'T'; store["..-"] = 'U';
    store["...-"] = 'V'; store[".--"] = 'W'; store["-..-"] = 'X';
    store["-.--"] = 'Y'; store["--.."] = 'Z';
    store["-----"] = '0'; store[".----"] = '1'; store["..---"] = '2';
    store["...--"] = '3'; store["....-"] = '4'; store["....."] = '5';
    store["-...."] = '6'; store["--..."] = '7'; store["---.."] = '8';
    store["----."] = '9';
    store[".-.-.-"] = '.'; store["--..--"] = ','; store["..--.."] = '?';
    store[".----."] = '\''; store["-.-.--"] = '!'; store["-..-."] = '/';
    store["-.--."] = '('; store["-.--.-"] = ')'; store[".-..."] = '&';
    store["---..."] = ':'; store["-.-.-."] = ';'; store["-...-"] = '=';
    store[".-.-."] = '+'; store["-....-"] = '-'; store["..--.-"] = '_';
    store[".-..-."] = '"'; store[".--.-."] = '@';
}

int main()
{
    call();
    int test;
    cin >> test;
    cin.ignore();
    string line, word, ans;
    for(int t=1; t<=test; t++)
    {
        getline(cin, line);
        stringstream ss(line);
        int pos = 0;
        ans = "";
        while(ss>>word)
        {
            ans += store[word];
            pos += word.size() + 1;
            while(pos<line.size() && line[pos]==' ')
            {
                ans += ' ';
                pos++;
            }
        }
        cout << "Message #" << t << '\n';
        cout << ans << '\n';
        if(t!=test) cout << '\n';
    }
    return 0;
}
