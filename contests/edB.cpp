#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
     cin >> n;

    int a[2*n];

    vector<int> v;

    for(int i = 0; i < 2*n; i++){
    	cin >> a[i];
    	v.push_back(a[i]);
    }
    int cnt = 0;
	int i, j;

   for (i = 0; i < 2*n-1; i++)      
       for (j = 0; j < 2*n-i-1; j++) 
           if (v[j] > v[j+1])
              swap(v[j], v[j+1]);


     
    /*	for(int k = 0; k < 2*n-3; k+=2){
    		cnt += v[k+1] - v[k];
    	}
    	
    	cout << cnt;
    */

    int c = 10000;
    for(int k = 0; k < 2*n; k++){
    	for(int q = 1; q < 2*n; q++){
    		if(abs(v[k] - v[q]) <= c){
    			c =  abs(v[k] - v[q]);
    			
    		}
    	}
    	cnt +=c;
    	c = 10000;
    }	
    	
    	
    	cout << cnt;
    
     

    return 0;
	}