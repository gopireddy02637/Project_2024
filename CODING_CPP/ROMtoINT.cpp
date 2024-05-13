#include<iostream>
#include<map>
using namespace std;
 
int romantointeger(string &str){
    
    map<char,int> mp;
    mp.insert({'I',1});
    mp.insert({'V',5});
    mp.insert({'X',10});
    mp.insert({'L',50});
    mp.insert({'C',100});
    mp.insert({'D',500});
    mp.insert({'M',1000});  
    int len=str.size();
    int total=mp[str.back()];
    for(int i=len-2;i>=0;i--){
        if(mp[str[i]]<mp[str[i+1]]){
            total=total-mp[str[i]];
        }
        else
        total=total+mp[str[i]];
    }
    return total;
}
int main(){
    string roman="XII";
    int results=romantointeger(roman);
    cout<<results;
    return 0;
}