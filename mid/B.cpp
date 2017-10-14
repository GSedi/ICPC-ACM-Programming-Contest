#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int main(){    
	vector<int> n;
	vector<queue<int> > v;
	int cn;
	
	int c2n;
	while(true){
		queue<int> q;
		cin >> cn;
		if(cn == 0) break;
		
		n.push_back(cn);

		for(int i = 0; i < cn; i++){
			cin >> c2n;
			q.push(c2n);
		}

		v.push_back(q);

	 
	}

	
	 
	int cnt = 1, a;
	stack<int> s;


	for(int i = 0; i < v.size(); i++){
		s.push(-1);
		cnt = 1;
		while(!v[i].empty()){
		
		if(v[i].front() == cnt){
			
			cnt++;
			v[i].pop();
		}
		else { 
			s.push(v[i].front());
			v[i].pop();

		}
		
		
		while(true){
			
				if(s.top() == cnt){
					cnt++;
					s.pop();
					
				}
				else break;
			
		}
		

//	cout << cnt << " " << v[i].front() << " "<< s.top() <<"\n";	
	

	}
	     //cout << s.top() << "\n";
		if(s.top() == -1) cout << "yes\n";
		else{ 
			cout << "no\n";
			while(!(s.empty())){
				s.pop();
			}
			}
			
		
	}



    return 0;     
	}