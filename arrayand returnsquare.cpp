#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void squresortedarray( vector<int> &v){
    vector<int> ans;
    int left_ptr =0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])>abs(v[right_ptr])){  // where abc stand for absolute value
           ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        else{

             ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
            
            
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0 ; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}


int main(){
    
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i<n ;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    squresortedarray(v);
    
    return 0;
}
