#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	
	int a[n], b[n], c[n];

	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i] >> c[i];
	}

	int cnt1= 0, cnt2 = 0, cnt3  = 0;
	int b1[n], c1[n];
	int ab[n], ac[n];
	for(int i =0; i< n; i++){
	    cnt1 += a[i];
		cnt2+= a[i]*b[i];
		cnt3+= a[i]*c[i];
		b1[i] = a[i]*b[i];
		c1[i] =a[i]*c[i];
		ab[i] = a[i];
		ac[i] = a[i];
	}
	int k = cnt1/s;
	for (int i = 0; i < n-1; i++){      
       for (int j = 0; j < n-i-1; j++) {
           if (b1[j] > b1[j+1])  {
              swap(b1[j], b1[j+1]);
              swap(ab[j], ab[j+1]);
              }

           if (c1[j] > c1[j+1])  {
              swap(c1[j], c1[j+1]);
              swap(ac[j], ac[j+1]); 
              }
          }
     }
     int cnt4 = 0;
     int x = 0, y = 0;
     for(int i = n-1;i>= 0; i--){
     	if(b1[i] > c1[i]){
     		cnt4+=b1[i];
     		cnt1 -= ab[i];	
     		x+= ab[i];
     	}else{
     		cnt4 += c1[i];
     		cnt1 -= ac[i];
     		y+= ac[i];
     	}	  
     }

     cout << cnt4 << " " << cnt1;




	return 0;
	}