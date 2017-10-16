#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
     int n;
     cin >> n;
     vector<string> v;
     set<string> st;
     for(int i = 0; i < n; i++){
     	string s;
     	cin >> s;

     	v.push_back(s);
     	
     }


      int cnt = 0;

     for(int i = 0; i < v.size(); i++){
     	
				for(int j = 0; j < v.size(); j++){
					if(v[i] == v[j]){
						cnt++;
					}	
				}

				if(cnt > 1){ 
					cout << "YES" << "\n";
				}
				else cout << "NO" << "\n";

				cnt = 0;


     }

    return 0;
	}