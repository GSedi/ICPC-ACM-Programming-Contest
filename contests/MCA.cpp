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

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnts = 0, cntf = 0;

     for(int i = 0; i < s.length()-1; i++){
     	if(s[i] == 'S' && s[i+1] == 'F'){
     		cnts++;
     	}
     	else if(s[i] == 'F' && s[i+1] == 'S') cntf++;
     }
    if(cnts > cntf) cout << "YES";
    else cout << "NO";


    return 0;
	}