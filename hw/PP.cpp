#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std; 	

int main(){
    int n, x;
    cin >> n;
    
    stack<long long> s;
    stack<long long> v1;
    stack<long long> v2;
    //4vector<stack<long long> > v(n);
    int cnt = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++){
    	long long k;
    	cin >> k;
    	 
        if(!s.empty()){
        	if(k < x ){
        		s.push(k);
        		cnt = 0;	
        	}
        	else{
        		cnt++;
        		if(cnt > maxi){
        			maxi = cnt;
        		}
        	} 
        }
        else {
        
        s.push(k);
    	x = k;
    	}
    	x = k;
    }
    
    cout << maxi;
    return 0;
	}
