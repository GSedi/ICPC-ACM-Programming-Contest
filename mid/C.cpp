#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int main(){    
    int n, k;
    cin >> n >> k;
    int x;
    stack<int> s;
    int cnt = n;
    for(int i = 0; i < n; i++){
    	cin >> x;
    	s.push(x);
    	
    }
    int a;

    int cnt2 = 1;
    while(!(s.empty())){
         a = s.top();
         s.pop();
         if(!(s.empty()) && a < s.top()){
         	cnt2 *= 2;
         }
         else cnt2*=1;

         cnt--;
    	
    }
    cout << cnt2;
	return 0;
	}