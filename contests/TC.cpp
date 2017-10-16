#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    string x = "";
    string a = "qwrtypsdfghjklzxcvbnm";
    vector<string> v;

    for(int i = 0 ;i < s.length(); i++){
        for(int j = 0; j <a.length(); j++ ){
        	if(a[j] == s[i]){
        		cnt++;
        		x+= s[i];
        	}
        	else{
        		cnt = 0;
        		x = "";
        	}
        }

        if(cnt >= 3){
        	v.push_back(x);
        	cnt = 0;
        }


    	
    }




    vector<string> w;
    if(v.size() > 0){
    	for(int i = 0; i < v.size(); i++){
    		if(v[i][0] != v[i][1] && v[i][0] != v[i][2]){
    			w.push_back(v[i]);	
    		}
    	}
    	string q= "";
    	for(int i = 0; i< s.length()-2; i++){
    		q = s[i] + s[i+1] + a[i+2];
    		for(int j = 0; i < w.size(); j++){
    			if(q == w[i]){
    				cout << q << " ";
    			} 
    		}
    	}
    }
    else{
    cout << s;
    }
    return 0;
	}