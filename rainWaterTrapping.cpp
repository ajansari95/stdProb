#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[n];	
	}
		int inc[n];  
	int dec[n]; 
	int i, max; 
	inc[0] = 1;  
	dec[n-1] = 1;  
	for (i = 1; i < n; i++){
	if(a[i]>=a[i-1]){
		inc[i]=inc[i-1];
		}else{
			inc[i]=1;
		}
	 }  
	for (i = n-2; i >= 0; i--) {
		if(a[i]>=a[i+1]){
			dec[i]=dec[i+1] + 1;
		}else{
			dec[i]=1;
		}
	}  
	max = inc[0] + dec[0] - 1; 
	for (i = 1; i < n; i++){
	   if (inc[i] + dec[i] - 1 > max) 
			max = inc[i] + dec[i] - 1; 
}
cout<<max<<endl;

	}
	
