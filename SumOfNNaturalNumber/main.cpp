#include<iostream>
using namespace std;

int sum(int n, int i);

int main(){
    int n=10;
    cout<<sum(n,0);
}

int sum(int n, int i){
    if(i==n){
        return 0;
    }
    i++;
    return (sum(n,i)+i);
}