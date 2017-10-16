#include <iostream>
using namespace std;
#include <vector>



void sortM(int a[], int b[], int c[], int n){

	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(b[j] == b[j+1]){
			 	if(a[j] > a[j+1]){
					swap(b[j], b[j+1]);
					swap(a[j], a[j+1]);
					//swap(c[j], c[j+1]);
				}
			
			}
		}
	}

}

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    int c[n];
    int b[n];

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	c[i] = i+1;
    	if(i+1 <= k) b[i]= c[i]+k-1;
    	else b[i] = c[i];
    }
	sortM(a, b, c, n);
	int x = n;
	int cnt  = 0;
	vector<int> v;
    for(int i =0; i< n; i++){
    	if(b[i] == c[i]){
    		cnt+=0;
    		v.push_back(b[i]);	
    	}
    	else{
    		if(b[i] == b[i+1]){
    			cnt+=a[i]*(x);
    			//b[i+1]++;
    			//x--;
    			//b[i] = b[i]+x;
    			int y =  b[i]+x;;
    			
    			cnt+=a[i+1]*(x);
    			//b[i+1]--;
    			//b[i+1] = b[i+1]+x-1;
    			int z =  b[i+1]+x-1;
    			
    			i+=1;
    			if(b[i] == c[i+1]){
    				v.push_back(y);
    				v.push_back(z);
    			
    			}
    			else{
    			v.push_back(b[z]);
    			v.push_back(b[y]);
    			}
    		}
    		else{
    			cnt += a[i]*b[i];
    			b[i]++;
    			v.push_back(b[i]);
    		}
    	}
    	x--;
    	//cout << cnt <<" ";
    }
 	cout << cnt << "\n";
 	for(int i = 0; i < v.size(); i++){
 		cout << v[i] << " ";
 	}

    return 0;
	}  