#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    int c = s[0]-48;
    int q = 0;
    for(int i = 0; i < s.length(); i++){
    	if(s[i] == s[i+1]){
    		continue;
    	}
    	else if(s[i] -48 > s[i+1]-48){
    		q = (s[i] -48)-(s[i+1]-48);
    		v.push_back(q);
    	}
    	else{
    	q = (s[i+1] -48)-(s[i]-48);
    		v.push_back(q);
    	}
    }
    int a = v[0];
   	bool ok = true;
    for(int i = 0; i < v.size(); i++){
     	if(v[i] != a){
     		ok = false;
     		break;
     	}
    }

    if(ok){cout << "YES";}
    else cout << "NO";



    return 0;
	}