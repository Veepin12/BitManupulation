//
//  Reversrbit.cpp
//  DS_in_Cpp
//
//  Created by Veepin Chaudhary on 16/02/26.
//

#include <iostream>
using namespace std;

class Solution {
public:
    
        
    int reverseBits(int n){
        vector<int> num(32,0);
        int ans=0;
        while(n>0){
            if(n%2==0){
                n/=2;
                num.push_back(n);
                
            }
        }
        for(int i=0; i<32;i++){
            ans=ans + num[i];
            
        }
        return ans;
    }
};
            
            
        
        
    

int main(){
    class Solution S;
    int n;
    cin>>n;
    cout<<S.reverseBits(n)<<endl;
    
    
}
