// #include<iostream>
// #include<list>

// using namespace std;
// // void dispaly(list<int> &lst){
// // list<int> ::iterator it;
// //     for (it = lst.begin(); it != lst.end(); it++)
// //         cout<<*it<<" ";
// // }
// int main(){
//     int arr[] ={1,2,5,7,22};
//     int arr2[]={3,4,9,20};
//     list<int> list1;
//     list<int> list2;
//     for(int i=0;i<=4;i++){
//         list1.push_back(arr[i]);
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;
//     for(int j=0;j<=3;j++){
//         list2.push_back(arr2[j]);
//             cout<<arr2[j]<<" ";
//         }
//         cout<<endl;
//     list1.merge(list2);
//     //dispaly(list1);
//     list<int> ::iterator it;
//     for (it = list1.begin(); it != list1.end(); it++)
//         cout<<*it<<" ";
//     return 0 ;
// }
// Online C++ compiler to run C++ program online





















#include <iostream>
using namespace std;
int main() {
  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9,10};
  int size1=sizeof(arr1)/sizeof(arr1[0]);
  int size2=sizeof(arr2)/sizeof(arr2[0]);
  
  int arr3[size1+size2];
  
  int i=0,j=0,k=0;
  
  while(i<size1){
      arr3[k++]=arr1[i++];
  }
 cout<<arr[k++];
  while(j<size2){
      arr3[k++]=arr2[j++];
  }
  
  for(int h=0;h<=size1+size2;h++){
      cout<<arr3[h];
      cout<<"h";
  }

    return 0;
}