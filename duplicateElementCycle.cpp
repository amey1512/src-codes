#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vp{3,10,4,6,2,5,7,8,5,1,9};

  /* Basic Hashing */
  // unordered_map<int, int> mp;
  // for(int i=0;i<vp.size();i++){
  //   //cout<<mp[i]<<endl;
  //   if(mp[vp[i]]!=0){
  //     cout<<vp[i]<<endl;
  //   }
  //   else mp[vp[i]] = 1;
  // }


  /* LinkedList Cycle */
  int fast = vp[0];
  int slow = vp[0];

  do{
    slow = vp[slow];
    fast = vp[vp[fast]];
  }while(slow != fast);

  fast = vp[0];
  while(slow != fast){
    slow = vp[slow];
    fast = vp[fast];
  }

  cout<<slow<<endl;
}