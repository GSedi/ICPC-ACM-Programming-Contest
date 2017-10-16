#include <iostream>
using namespace std;
int main(){
	/*int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = 0;
	int maxi = 0;

	int cnt = 0;
	
    for(int x = 0; x < (1 << n); x++){
         sum = 0;
         cout << x << " ";
    	for(int i =0; i < n; i++){
    		if((x & (1<<i)) > 0){
	//    		sum += a[i];		
			cnt++;
    		}
    	}

    if(maxi < sum && maxi < 7) maxi = sum;	
    }          
     cout << maxi;
    */

    string s;
    cin >> s;

    int cnt = 0;
    
    int a = s.length();
    int q = 0;

    string x[a];
    string y = "";
    for(int i = 0; i< a; i++){
    	y += "0" ;

    	
    }

    for(int i = 0; i < (1<<a); i++){
    	x[i][]
    }

    for(int i = 0;i < s.length(); i++){
    	if(s[i]-48 == 4){
    
    		q+= i+1;
    	}
    	else{q += i+2;}
    }
    //cout << s[s.length()-1] << endl;
    if((s[s.length()-1]-48)%2 == 0 && q%2 == 0){
    	cout << q+1;
    }
    else if((s[s.length()-1]-48)%2 == 1 && q%2 == 1){
    	cout << q+1;
    }
    else{
    	cout << q;
    }
    
    
    return 0;
	}