#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int main(){    
	int n; 
	cin >> n;
	stack<int> s1;
	stack<string> s2;
	queue<int> q1;
	queue<string> q2;
    stack<int> w1, w2;
    int k, mini = 9999999, cnt = 0;
    string s;

	for(int i =0; i < n; i++){
		cin >> k;

		if(k != -1){
			cin >> s;
			s1.push(k);
			s2.push(s);

			if(mini >= k){
				mini = k;
			}

		}
		else{
			while(true){
			if(!(s1.empty())){
				if( s1.top() != mini){
					w1.push(s1.top());
					w2.push(s2.top());
					s1.pop();
					s2.pop();
					cnt++;

				}
				else{
					q1.push(cnt);
					q2.push(s2.top());
					s1.pop();
					s2.pop();
					mini = s1.top();
					while(!(s1.empty())){
						if(mini >= s1.top()){
						    	mini = s1.top();
							}
							w1.push(s1.top());
					w2.push(s2.top());
					s1.pop();
					s2.pop();
									
					}
					while(!(w1.empty())){
						if(mini >= w1.top()){
							mini = w1.top();
						}	
						s1.push(w1.top());
						s2.push(w2.top());
						w1.pop();
						w2.pop();
						

					}
					cnt = 0;
					break;
							
				}
			}
			else break;
			}
		}
		//cout << s1.top() << " "  << mini << "\n";
	
	}
	while(!(q1.empty())){
	
		cout << q1.front() << " " << q2.front() << "\n";
		q1.pop();
		q2.pop();
	
	}
	

return 0;
}