#include<iostream>
#include<vector>
#include <stack>
using namespace std;


int main(){

	string s;
	cin >> s;
	 vector<char> v;
	 v.push_back(s[0]);
	for(int i = 1; i < s.length(); i++){
		
			
			if(v.back() != s[i]){
				v.push_back(s[i]);
			}
			else{
				v.pop_back();
			}
			
			
		
		
	}

	for(int i = 0; i < v.size(); i++){
		cout <<  v[i];
	}
 
}