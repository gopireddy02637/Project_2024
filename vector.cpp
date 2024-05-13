// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec1;
    int arr[]={1,2,5,7,22};
    int arr2[]={3,4,9,20};
    for(int i;i<=4;i++){
    vec1.push_back(arr[i]);    
    }
    for(auto j=vec1.begin();j!=vec1.end();j++){
        cout<<*j<<" ";
    }
    cout<<endl;
//   // vec1.pop_back();
//   for(auto k=vec1.begin();k!=vec1.end();k++){
//         cout<<*k<<" ";
//     }
    cout<<endl;
    vector<int> :: iterator it=vec1.begin();
    vec1.insert(it+5,vec1.push_back());
    for(auto l=vec1.begin();l!=vec1.end();l++){
        cout<<*l<<" ";
    }
std::cout << "Hello world!";

    return 0;
}