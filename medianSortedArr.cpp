#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergeArrays(vector<float>&nums1,vector<float>&nums2,vector<float>&nums3){
      int n=nums1.size();
      int m=nums2.size();
      
      int i=0,j=0,k=0;
      while(i<n && j<m){
          if(nums1[i]<nums2[j]){
              nums3.push_back(nums1[i]);
              i++;
          }else{
              nums3.push_back(nums2[j]);
              j++;
          }
      }while(i<n){
          nums3.push_back(nums1[i]);
              i++;
      }while(j<m){
          nums3.push_back(nums2[j]);
              j++;
      }
 }
    float findMedianSortedArrays(vector<float>& nums1, vector<float>& nums2) {
 vector<float> nums3;
        mergeArrays(nums1,nums2,nums3);
        int k=nums3.size();
    float median;
    if(k%2==0){
    median=(nums3[(k/2)-1]+nums3[(k/2)])/2;    
   cout<<")"<<nums3[(k/2)-1]<<")"<<nums3[(k/2)]<<" ()"<<(nums3[(k/2)-1]+nums3[(k/2)])/2<<endl;
    }
        if(k%2 != 0){
        median=nums3[(k/2)];
    }
    return median;
    }

int main(){
	vector<float> nums1;
	vector<float> nums2;
	int m,n,val;
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++){
	
		cin>>val;
		nums1.push_back(val);
	}for(int i=0;i<m;i++){
	
		cin>>val;
		nums2.push_back(val);
	}
float k=findMedianSortedArrays(nums1,nums2);
cout<<k;
return 0;
}
