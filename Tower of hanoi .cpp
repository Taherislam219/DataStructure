#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int A,int B,int C){

if(n>0){
    TOH(n-1,A,C,B);
    cout<<"MOVE a discs from" <<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}

}

int main(){

int n;
cout<<"Number of discs :";
cin>>n;
int A=1;
int B=2;
int C=3;

TOH(n,A,B,C);

return 0;
}
