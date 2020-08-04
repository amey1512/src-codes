#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vp{3,10,4,6,3,5,7,8,9,1,9};

  unordered_map<int, int> mp;
  for(int i=0;i<vp.size();i++){
    //cout<<mp[i]<<endl;
    if(mp[vp[i]]!=0){
      cout<<vp[i]<<endl;
    }
    else mp[vp[i]] = 1;
  }
  return 0;
}