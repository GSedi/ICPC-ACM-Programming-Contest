#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n1;
    int n2;
    int n3;
    
    cin >> n1 >> n2 >> n3;
    
    stack<int> s1, s2, s3;
    
    stack<int> v1, v2, v3;
    int k;

    for(int i = 0;i < n1;i++){
       	
    	cin >> k;
      
       
       s1.push(k);
       
    }
    
    for(int i = 0;i < n2;i++){
       
    	cin >> k;
       
       s2.push(k);    
       
     }

    
    for(int i = 0;i < n3;i++){
       
    	cin >> k;
      
       s3.push(k);
    }
    int s = 0;
    for(int i = 0; i < n1; i++){
    	s = s + s1.top();
    	v1.push(s);
    	s1.pop();
    }
    s = 0;
    for(int i = 0; i < n2; i++){
    	s = s + s2.top();
    	v2.push(s);
    	s2.pop();
    }
    s = 0;
    for(int i = 0; i < n3; i++){
    	s = s + s3.top();
    	v3.push(s);
    	s3.pop();
    	
    }
    while(true){
    	if(v1.top() == v2.top() && v1.top() == v3.top()){
	   	 	cout << v1.top();
	   	 	return 0;
	   }
	   else if(v1.top() >= v2.top() && v1.top() >= v3.top()){
	   		v1.pop();	
	   		
	   }
	   else if(v2.top() >= v1.top() && v2.top() >= v3.top()){
	   		v2.pop();	
	   		
	   }
	   else v3.pop();	
	   	
	 }
    
     
       
    return 0;
}
