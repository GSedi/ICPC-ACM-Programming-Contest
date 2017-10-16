#include <iostream>
using namespace std;
int main(){

    string s;
    cin >> s;

    int n; 
    cin >> n;

    string a[n];
    bool bl;
    for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i]==s){ bl = true;}
		}
	if(bl) cout <<"YES";
	else	
     cout << "NO";

     return 0;

	}