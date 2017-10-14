#include <stack>
#include <iostream>
using namespace std;
int main(){
    long long n; 
    cin >> n;
    stack<int> sk1;
    stack<string> sk2;
    
    string q = "";
    string ans  = "";
    sk2.push(q);

    for(long long i = 0; i< n; i++){
    	long long k;
    	cin >> k;
    	sk1.push(k);
    	if(sk1.top() == 1){ 
    		string s;
    		cin >> s;
    		q+= s;	
    		 sk2.push(q);

    		
    	}
    	else if(sk1.top() == 2) {
    		long long k;
    		cin >> k;
    		string y = "";
    		for(int j = 0; j < q.length()-k; j++){
    			y += q[j];	
    		}
    		q = y;
    		y = "";
    		sk2.push(q);
    	}
    	else if(sk1.top() == 3) {
    		long long k;
    		cin >> k;
    		ans += q[k-1];
    		//cout << "ans\n" << 	ans << "\n";

    	}
        else if(sk1.top() == 4){
        	sk2.pop();
        	q = sk2.top();
        } 
	//cout << q << "\n" ;   	
    	
    }
    for(long long i = 0; i < ans.length(); i++){
    	cout << ans[i] << "\n";
    }

    
    return 0;
	}

	



