#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s){
	while(!s.empty()){
	
		cout << s.top() << "\n";
		s.pop();
	}
}

int main(){
    int n, q;
    cin >> n >> q;
    int k;
    stack<int> s, a, b;
    for(int i = 0; i < n;i++){
    	cin >> k;
    	s.push(k);
    }
    while(!s.empty()){
    	if(s.top()%2 == 0){
    		b.push(s.top());
    		s.pop();

    	}
    	else{
    		a.push(s.top());
    		s.pop();
    	}
    }

    print(b);
    print(a);
    return 0;
	}