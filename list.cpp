#include<iostream>
#include<list>

using namespace std;
// void dispaly(list<int> &lst){
// list<int> ::iterator it;
//     for (it = lst.begin(); it != lst.end(); it++)
//         cout<<*it<<" ";
// }
int main(){
    int arr[] ={1,2,5,7,22};
    int arr2[]={3,4,9,20};
    list<int> list1;
    list<int> list2;
    for(int i=0;i<=4;i++){
        list1.push_back(arr[i]);
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(int j=0;j<=3;j++){
        list2.push_back(arr2[j]);
            cout<<arr2[j]<<" ";
        }
        cout<<endl;
    list1.merge(list2);
    //dispaly(list1);
    list<int> ::iterator it;
    for (it = list1.begin(); it != list1.end(); it++)
        cout<<*it<<" ";
    return 0 ;
}