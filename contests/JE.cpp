#include <iostream>
#include <vector>
using namespace std;
/*string del(string s){
	string a = "";
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] == s[i+1]){
		for(int j = 0; j < i; j++){
			a+=s[j];	
		}
		 for(int j = i+2; j < s.length(); j++){
			a+=s[j];	
		}
		 return del(a);
		}
	}

	return s;

}
*/

string del2(string s){
	string a = "";
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] == s[i+1]){
			s[i] = '&';
			s[i+1] = '&';
			i++;
		}	
		
	}

	for(int i = 0; i < s.length(); i++){
	
		if(s[i] != '&'){
			a+= s[i];
			
		}


	}
     if(a == s){
      	return s;
     }
     else return del2(a);
    
	
}

int main(){
    string s; 
    cin >> s;
    vector<char> v;
    
    cout << del2(s);
    //cout << del(s);

    return 0;
	}