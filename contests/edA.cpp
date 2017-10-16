#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;

    string x = s;
    int cnt = 0;
    string a = "";
    for(int i = s.length()-1; i >= 0; i--){
         if(s[i]-48 != 0){
         	break;
         }
         else{
         
         	a += "0";
         }
    	
    }
    if(a.length() == 0){
    
    for(int i = 0; i< s.length(); i++){
    	if(s[i] == x[s.length() - i-1]){
    		cnt++;
    	}
    }
     if(cnt == s.length()){
     	cout << "YES";
     }
     else cout << "NO";
    }

    else{
    a+= s;
    	for(int i = 0; i< s.length(); i++){
    	if(s[i] == a[s.length() - i-1]){
    		cnt++;
    	}
    }

    if(cnt == s.length()){
     	cout << "YES";
     }
     else cout << "NO";
    


    }

    return 0;
	}