#include <stack>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(stack<int> s){
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();

	}

	cout << "\n";

}

stack<int> reverse(vector<int> v){
		stack<int> s;
        for(int i = v.size()-1; i >= 0; i--){
        	
        	s.push(v[i]);
        	
        }
        return s;
}

stack<int> reversed(vector<int> v){
		stack<int> s;
        for(int i = 0; i < v.size(); i++){
        	s.push(v[i]);
        }
        return s;
}


int main(){
    int g;
    cin >> g;
    	int n[g];
        int m[g];
        int x[g];
        vector< vector<int> > a(g);
        vector< vector<int> > b(g);
        vector< stack<int> >  s1(g);
         vector< stack<int> >  s2(g);
    for(int i = 0; i < g; i++){
        cin >> n[i] >> m[i] >> x[i];
       
        
        for(int a_i = 0; a_i < n[i]; a_i++){

        	int k;
        	cin >> k;
           a[i].push_back(k);
        }
        
        for(int b_i = 0; b_i < m[i]; b_i++){
           int k;
        	cin >> k;
           b[i].push_back(k);
        }
                                                   
    }
    for(int i = 0; i < g; i++){
    	s1[i] = reverse(a[i]);
    	s2[i] = reverse(b[i]);
    }

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int sum = 0;
    for(int i = 0; i< g; i++){
    	while(true){
    		if(s1[i].top() < s2[i].top() && !s1[i].empty()){
    			if(sum+s1[i].top() > x[i]){break;}else{
    			sum += s1[i].top();
    			//cout << s1[i].top() << "\n";
    			s1[i].pop();
    			cnt1++;
    			}
    		}
    		else{
    			if(sum+s1[i].top() > x[i]){break;}else{
    			sum += s2[i].top();
    			//cout << s2[i].top() << "\n";
    			s2[i].pop();
    			cnt1++;
    			}
    		}
    	
    	}
    	cout << cnt1;
    	cnt1 = 0;
		
    }
   
     
   
    
    for(int i = 0; i < g; i++){

    	print(s1[i]);	
    	print(s2[i]);	
    }
    
    
    return 0;
}
