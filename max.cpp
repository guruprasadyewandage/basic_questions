#include<iostream>
using namespace std;

string reverse(string str){
    // for(int i=str.length()-1; i>=0; i--){
    //     cout<<str[i];
    // }
    int st=0;
    int end=str.length()-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}
int main(){
    string s= "hello guru";
   cout <<reverse(s);
}