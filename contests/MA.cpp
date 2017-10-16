#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k;
    cin >> k;

    int a[k];

    for(int i = 0; i< k; i++){
    	cin >> a[i];
    }
    vector<int> v;
    int cnt = 0;
    for(int i = 0; i< k; i++){
    			if(a[i] > 25){
    				v.push_back(a[i]);
    			}
    	 
    }

    if(v.size() > 0){
    int maxi = v[0];
    for(int i = 0; i< v.size(); i++){
    	
         if(maxi <= v[i]){
         	maxi = v[i];
         }
    }

    cout << maxi - 25;
    }
    else{cout << 0;}

    
    return 0;
	}