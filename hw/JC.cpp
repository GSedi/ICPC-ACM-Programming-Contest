#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>

using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    //long long a[n];
    int q;

    deque<long long> s;
    for(long long i=0 ;i < n; i++){
        
        cin >> q;
        s.push_back(q);
    	
    }
    long long cnt = 0;

    long long maxi = 0;
     long long a;
          long long b;
    while(true){
    	if(s.empty()) cout << -1;
    	a = s.front();
    	s.pop_front();
    	if(a > k){break;}
    	b = a + 2*s.front();
    	s.pop_front();
    	 cnt++;
    	if(b < k){
    		s.push_front(b);
    	}else{
    		s.push_back(b);
    	}	
    	
        
    }

	cout << cnt;
    return 0;
	}