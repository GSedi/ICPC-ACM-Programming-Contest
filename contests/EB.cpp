#include <iostream>
using namespace std;
int main(){
     int n, k;

     cin >> n >> k;

     if(n== 1 || k == 0 || n == k){
     	cout << 0 << " " << 0; 
     }
     else{
     	cout << 1 << " " << min(n-k, k*2);
     	
     }

       

    return 0;
	}