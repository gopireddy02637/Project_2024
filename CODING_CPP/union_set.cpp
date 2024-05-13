#include<iostream>
#include<set>

using namespace std;
int main(){
    int arr[] ={1,2,5,2,7,22};
    int arr2[]={3,4,5,9,20};
    set<int> set1;
    set<int> set2;
    for(int i=0;i<=5;i++){
        set1.insert(arr[i]);
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(int j=0;j<=3;j++){
        set2.insert(arr2[j]);
            cout<<arr2[j]<<" ";
        }
        cout<<endl;
    //dispaly(list1);
   // set1.merge(set2);
    set<int> ::iterator it;
    for (it = set1.begin(); it != set1.end(); it++)
        cout<<*it<<" ";
    return 0 ;
}