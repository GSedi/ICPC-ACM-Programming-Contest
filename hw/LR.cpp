#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n; 
    cin >> n;

    //long long a[n];
    stack<long long> s1, s2;
    long long k;
    long long a[n];
    for(long long i = 0; i < n; i++){
    	cin >> a[i];
    	s1.push(a[i]);

    }
    
    long long maxi = 0;
    long long sum = 0;
    long long cnt = 1, cnt2 = 0;
    for(long long i = 0; i < n; i++){
    	k = a[i];
    	cnt = k;
    	for(long long j = 0; j < n; j++){
    		if(a[j] >= a[i] && i!=j){
    			cnt+= k;
    				
    		}
    		if(cnt >= maxi){
    			maxi = cnt;
    			
    		}
    		
    		if(a[j] < a[i]){
    			cnt= k;
    				
    		}
    	}
        
    	
    }
    
    cout << maxi;

    
    return 0;
	}