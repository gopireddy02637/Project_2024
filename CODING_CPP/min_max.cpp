#include<iostream>
#include<string>


using namespace std;

int main(){
    int arr[]={10,40,20,50,30,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max=0;
    int min=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            max=arr[i];
        }
        else if(arr[i+1]<arr[i])
            min=arr[i+1];
    }
    cout<<"minimum = "<<min<<endl;
    cout<<"maximum = "<<max<<endl;
    return 0;
}


