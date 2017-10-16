#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;

    int l = 0;


    for(int i = 1; i <= sqrt(n)+1; i++ ){
    	if(i*i >= n){
    		 l = i;
    		 
    		 break;
    	}
    }


    
    int p = l*4;
    int k = l*l -n;
    
    

    if(k >= l){
    	p = p-2;


    }

    cout << p;
    

    return 0;
	}