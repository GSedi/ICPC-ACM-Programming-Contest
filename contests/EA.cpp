#include <iostream>
using namespace std;
int gcd (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
int main(){
    int n;
    cin >> n;

    for(int i = n/2; i > 0; i--){
    
    	for(int j = n-1; j > n/2; j--){
    	
    		if(gcd(i, j) == 1){
    			if(i +j == n){
    			cout << i << " " << j;
    			return 0; 
    			}
    		}
    	}
    }

    return 0;
	}