#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> num {1,2,3,4,5};
    cout<<"initial vector";
    for(const int& i : num){
        cout<<i<<" ";
    }
}