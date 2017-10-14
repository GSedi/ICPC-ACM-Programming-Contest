#include <iostream>
#include <stack>
#include <vector>


using namespace std;

stack<int> reverseS( stack <int> s){
    vector<int> v;
    while(!s.empty()){
    	v.push_back(s.top());
    	s.pop();
    }
    for(int i = 0; i < v.size(); i++){
    	s.push(v[i]);
    
    }

    return s;
	
}

void print(stack<int> s){
	while(!s.empty()){
		cout << s.top() << "\n";
		s.pop();
	}

}

int main(){
    int g;
    cin >> g;
    int a[g], b[g], x[g];
    vector<stack<int> > v1(g), v2(g);
    int k;

    for(int i = 0; i < g; i++){
    	cin >> a[i] >> b[i] >> x[i];
    	
    	for(int j = 0; j < a[i]; j++){
    		cin  >> k;
    		v1[i].push(k);
    		
    	}
    	
    	for(int j = 0; j < b[i]; j++){
    		cin  >> k;
    		v2[i].push(k);
    		
    	}
    	
    
    }

    int sum1 = 0, cnt1 = 0, sum2 = 0, cnt2 = 0, sum3 = 0, cnt3 = 0;

    for(int i = 0; i < g; i++){
    	v1[i] = reverseS(v1[i]);
    	v2[i] = reverseS(v2[i]);
    	//cout << v1[i].size() << "\n";
    	if(v1[i].top() < x[i]){
    	sum1 += v1[i].top();
    	v1[i].pop();
    	cnt1++;
    	}
    	 if(v2[i].top() < x[i]){
    	sum1 += v2[i].top();
    	v2[i].pop();
    	cnt1++;
    	}
    	while(!v1[i].empty() || !v2[i].empty()){
    	     
    		if(v1[i].top() <= x[i] && sum1+v1[i].top() <= x[i] && v1[i].top() < v2[i].top() && !v1[i].empty()){
    			
    			sum1+=v1[i].top();
    			v1[i].pop();
                cnt1++;

                if(v1[i].top() <= x[i] && sum1+v1[i].top() <= x[i] && v1[i].top() < v2[i].top() && !v1[i].empty()){
    			
    			sum1+=v1[i].top();
    			v1[i].pop();

    		
    			cnt1++;
    		}
    		}
    		else if(v2[i].top() <= x[i] && sum1+v2[i].top() <= x[i] && v2[i].top() < v1[i].top() && !v2[i].empty()){
    			sum1+=v2[i].top();
    			
    			v2[i].pop();
    			cnt1++;
    			if(v2[i].top() <= x[i] && sum1+v2[i].top() <= x[i] && v2[i].top() < v1[i].top() && !v2[i].empty()){
    			sum1+=v2[i].top();
    			
    			v2[i].pop();
    			cnt1++;
    			}
    		}
    		else{
    			break;
    		}	    	
    		    	
    	}
    	
    	cout << cnt1 << "\n";
    	//cout << v1[i].size() << "\n";
    	cnt1 = 0;
    	sum1 = 0;
    	
    }
    

   /* for(int i = 0; i < g; i++){
    	print(v1[i]);
    	print(v2[i]);
    }
    */
    return 0;
	}       