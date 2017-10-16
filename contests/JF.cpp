#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
     stack<char> sc;

     int cnt = 0, cnt2 = 0, maxi = 0;
    for(int i = 0; i < s.length(); i++){
    	sc.push(sp[i]);
    	if( == '('){
    		cnt++;
    	  sc.push('(');
    	  }

    	  else{
    	  	cnt++;
    	  	if(!sc.empty()) sc.pop();
    	  	

    	  }

    	  if(maxi < cnt){
    	  	maxi = cnt;
    	  }

    	  if(s.empty()) cnt2++;
    }

    if(cnt2 <= 0) cout << "0 1";
    else cout << maxi << " " << cnt2;
    
      
    return 0;
	}