#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;

    cin >> n >> m;

    int a[m][2];

    for(int i = 0; i < m; i++){
    	for(int j = 0; j < 2; j++){
    		cin >> a[i][j];
    	}
    }
    vector<int> x;
    vector<int> y;
    for(int i = 0; i < m; i++){
    	x.push_back(a[i][0]);	    
    	y.push_back(a[i][1]);
    }

    sort(x.begin(), x.end());


    for



    return 0;
	}