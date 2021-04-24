#include<iostream>
#include<string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int i,j,k;
    string s,t;
    int key;
    cout<<"Enter the shift amount\n";
    cin>>key;
    cout<<"Enter the message\n";
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i]-'Z'+key)%26+'Z';
    }
transform(t.begin(), t.end(), t.begin(), ::toupper);
    std::cout <<std::setw(5) << t << std::endl;
    return 0;
} 
