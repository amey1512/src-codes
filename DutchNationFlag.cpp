#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vp{0,1,1,2,1,0,0,1,2,1,0};
  int low = 0, mid = 0, high = vp.size()-1;
  while(mid <= high){
    if(vp[mid] == 0) {
      int temp = vp[mid];
      vp[mid]  = vp[low];
      vp[low]  = temp; 
      mid++;
      low++;
    }
    else if(vp[mid] == 2){
      int temp = vp[mid];
      vp[mid] = vp[high];
      vp[high] = temp;
      mid++;
      high--;
    }
    else{
      mid++;
    }
  }

  for(int i=0;i<vp.size();i++) cout<<i<<" "<<vp[i]<<endl;
  return 0;
}
