#include <iostream>
using namespace std;
int main(){         
	string s;
	cin >> s;


	int cnt = 0, cnt2 = 0;
	bool ok = false;
	

	for(int i = 0; i < s.length(); i++)
	{
 
 	if(s[i] == '(')  cnt++;
   	else cnt--;
  
  	if(cnt == -1){
  		ok = false;
  		cnt = 0;
 	}

 	if(cnt == 1){
  		ok = true;
 	}

 	if(ok) cnt2++;
  		
}

	cout<<cnt2-cnt;
    
return 0;
}