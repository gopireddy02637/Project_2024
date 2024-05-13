#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5};
    //int arr1[]={6,7,8,9};
    int n=1, j;
    //cin>>n>>endl;
    for(int i=0;i<=3;i++){
        //cout<<i<<endl;
        if(n==i){
           // cout<<i;
            j=arr[i]+arr[i+1];
            cout<<arr[i]<<endl<<arr[i+1]<<endl;
        }
        // else
        // cout<<"out of arr";
        // break;
    }
    cout<<j<<endl;
    return 0;
}


//     int arr[]={2,3,4,5};
//     int arr1[]={6,7,8,9};
//     int j, num=0;
//     for(int i=0;i<=3;i++){
//         j=arr[i]+arr1[i];
//         cout<<j<<endl;
//         num=num+j;
//     }
//     cout<<num;

//     return 0;
// }


    