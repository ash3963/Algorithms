#include<iostream>
#include<string>
using namespace std;


bool checkPalin(string n, int i, int j)
{
    if(j-i<=0){
        return 0;
    }
    if(n[i]==n[j])
        return checkPalin(n,i+1,j-1) && true;
    else
        return false;
}

int main(){

    string n;
    cout<<"Enter the number: ";
    cin>>n;
    int j=n.length()-1;
    if(checkPalin(n,0,j))
        cout<<"It is a palindrome";
    else
        cout<<"Not a palindrome";
    return 0;
}