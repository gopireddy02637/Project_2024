// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char str[20] = "somethinksomewhere";
    int j=1;
      for(int i=0;i<='\0';i++){
              if(str[i]!=str[i+1]){
                cout<< str[i];
              str[j]=str[i+1];
              cout<<str[j];
              j++;
                  }
      }
      cout<<str[j];
    return 0;
}
