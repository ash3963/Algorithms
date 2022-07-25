#include<iostream>
#include<string>
using namespace std;

string reverseString(string input, int i, int j){

    if (j-i<0){
        return input;
    }
    if(input[i]!=input[j])
        swap(input[i],input[j]);
    return reverseString(input, i+1, j-1);
}


int main(){

    string rev{"kayak"};
    int j = rev.length()-1;
    cout<<rev<<endl;
    cout<<reverseString(rev,0, j)<<endl;
    return 0;
}