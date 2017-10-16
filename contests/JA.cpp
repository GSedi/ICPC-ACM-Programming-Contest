#include <iostream>
#include <vector>
using namespace std;
vector<string> fin(vector<string> x, string q){
          for(int i = 1; i< x.size(); i++){
    		for(int j = 0; j < x[i].size()-1; j++){
    			
    			  if(x[i][j] == '.' && x[i][j+1] == '.'){
    			  	string a = "";

    				for(int k = j+2; k < x[i].size(); k++){
    				a += x[i][k];
    				}

    				x[i] = "/" + q + a + "/";
    				 cout << x[i] << "\n";
    				return fin(x,q);
    			}
    			 
    			
    				

    		}
    		//cout << x[i] << "\n";
    	}

    	return x;

}
int main(){
    int n;
    cin >> n;
    if(n == 1){
    	cout << "/";
    	return 0;
    }
    vector<string> v;
    cin.ignore();
    for(int i = 0; i< n; i++){
    	string s;
    	
    	getline(cin, s);
		v.push_back(s);
    }

    vector<string> x;
    string s = "";
    for(int i = 0; i< v.size(); i++){
    	if(v[i] == "pwd"){
    		continue;
    	}
    	else{
        for(int j = 0; j<v[i].size(); j++){
        	
        	if(v[i][j] == ' '){
        		for(int k= j+1; k < v[i].size(); k++){
        			s+=v[i][k];
        		}
        	}
        }

        x.push_back(s);
        

        s = "";
        }
    	    	
    }
    string q = "";
    char c = '/';
    for(int i = 1; i< x[0].size(); i++){
  		 if(x[0][i] != c) q+= x[0][i];
  		 else break;		 	
    }

    
    vector<string> y;
    if(v[0] == "pwd"){
    	cout << "/" << "\n" << x[0] << "/" << "\n";
    	y =fin(x, q);

    	/*for(int i = 0; i < y.size(); i++){
    	cout << y[i] << "\n";
    	
    	}
    	*/
    	
    }
    else{
    	cout << x[0] << "/" << "\n";
    	y=fin(x,q)    ;
    }


    return 0;
	}