#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    long long k;

    cin >> n >> k;

    long long  a = 1;

    for(int i = 0; i < k; i++){
    	a *= 10;
    }

    

    bool ok = true;

    long long x;
    for(long long i = 1;ok == true; i++){   
    	
    	if((n*i)%a == 0){

    		//x = i*n;
    		 cout << i*n;

    		ok = false;
    	} 	
    }

   // cout << x;

    return 0;
	}