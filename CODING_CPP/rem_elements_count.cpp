// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
  int arr[]= {0,1,2,2,3,0,4,2};
  int val =2;
  int size=sizeof(arr)/sizeof(arr[0]);
        
        vector<int> rem;
        int j=0;
        for(int i=0;i<=size;i++){
            if(arr[i]!=val){
                rem.push_back(arr[i]);
                j++;
            }
        }
        cout<<j<<endl;
        vector<int> :: iterator it;
        for(it=rem.begin();it<rem.end();it++){
            cout<<*it;
        }
    return 0;
}