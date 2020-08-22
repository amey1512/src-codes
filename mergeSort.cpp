#include<bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int> vp, int low, int mid, int high){
  int n1 = mid-low+1; int n2 = high-mid;
  int L1[n1]; int L2[n2];
  int i=0,j=0;
   
  for(int k=0;k<n1;k++) L1[k] = vp[low+ k];
  for(int k=0;k<n2;k++) L2[k] = vp[mid+1+k];
  
  int k=low;

  while(i<n1 && j<n2) {
    if(L1[i] >= L2[j]){
      vp[k] = L2[j];
      j++;
    }
    else{
      vp[k] = L1[i];
      i++;
    }
    k++;
  }

  while(i<n1){
    vp[k] = L1[i];
    i++;
    k++;
  }
  while(j<n2){
    vp[k] = L2[j];
    j++;
    k++;
  }
  return vp;
}

vector<int> MergeSort(vector<int> vp, int low, int high){
  if(low < high) {
    int mid = (low+high)/2; 
    
    vp = MergeSort(vp,low,mid);
    vp = MergeSort(vp,mid+1,high);
    vp = Merge(vp,low,mid,high);
  }

  return vp;
}

int main() {
  vector<int> vp = {12, 11, 13, 5, 6, 7};
  cout<<"Initial vector - ";
  for(int i=0;i<vp.size();i++) cout<<vp[i]<<" ";

  vp = MergeSort(vp,0, vp.size()-1);

  cout<<"Sorted vector - ";
  for(int i=0;i<vp.size();i++) cout<<vp[i]<<" ";

}