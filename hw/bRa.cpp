#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool isBalanced(string s) {
     stack<char> sk;
	 char c;
    for(int i=0; i < s.length(); i++) {
        c = s[i];

        if(c == '{')
            sk.push(c);
        else if(c == '[')
            sk.push(c);
        else if(c == '(')
            sk.push(c);
        else if(c == '}')
            if(sk.empty())
                return false;
            else if(sk.top() == '{')
                sk.pop();
            else
                return false;
        else if(c == ']')
            if(sk.empty())
                return false;
            else if(sk.top() == '[')
                sk.pop();
            else
                return false;
        else if(c == ')')
            if(sk.empty())
                return false;
            else if(sk.top() == '(')
                sk.pop();
            else
                return false;
    }
    return sk.empty();
}

int main() {
    int n;
     cin >> n;

     string s[n];

     for(int i = 0; i < n; i++)
     	cin >> s[i];
     

     for(int i = 0; i < n; i++){
     if(isBalanced(s[i])) cout <<"YES\n";
     else cout << "NO\n";
     
     }
    return 0;
}