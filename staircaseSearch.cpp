#include <bits/stdc++.h>

using namespace std;
void search( int mat[4][4],int n, int x){
	int i=0,j=n;
	int temp=mat[i][j];

	while(i<n && j>=0){
		if(mat[i][j] < x){
			i++;
		}
		if(mat[i][j] > x){
			j--;
		}
		if(mat[i][j] == x){
			cout<<" i= "<<i<<" j= "<<j<<endl;
			return;
		}
	}
	cout<<"element not found";
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
   int mat[4][4] = { { 10, 20, 30, 40 }, 
                     { 15, 25, 35, 45 }, 
                     { 27, 29, 37, 48 }, 
                     { 32, 33, 39, 50 } }; 
    search(mat, 4, 29); 
	return 0;
	
}