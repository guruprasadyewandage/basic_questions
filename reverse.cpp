// reverse sentence without changing sequence of alphabet

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    string ans = " ";
reverse(s.begin(),s.end());
for(int i=0; i<s.length()-1;i++){
string word ="";
while(i<s.length() && s[i]!=' '){
word+=s[i];
i++;
}
reverse(word.begin(), word.end());
ans+=word+" ";
}
return ans;

}
int main(){
string s="the pen";
cout<<reverseWord(s);
}