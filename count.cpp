//count freq of each number using unordered map

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int count(vector<int>&arr){
    unordered_map<int,int>freq;

    for(int i : arr){
        if(i!=' '){
            freq[i]++;
        }
    }

    for(auto pair: freq){
        cout<<pair.first<<"=>"<< pair.second<<endl;
    }
}

int main(){
   vector<int>arr={1,2,3,4,1,3,4,4,5};

   count(arr);
}