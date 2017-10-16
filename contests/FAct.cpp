#include <iostream>
using namespace std;

int main(){
	long long a;
	long long b; 
	cin >> a >> b;

	 if(b-a >= 10){
		cout << 0;
		return 0;
	}
	else{
	long long cnt = 1;
	
	for(int i = a+1; i <= b; i++){
		cnt *= i;
		cnt = cnt%10;
	}	
		cout << cnt;
	}
	return 0;
	}