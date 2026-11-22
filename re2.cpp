#include<bits/stdc++.h>

using namespace std;

int main(){

string A,B;


cin>>A;
cin>>B;

int A1=A.size();
int B2=B.size();

cout<<A1<<" "<<B2<<endl;
cout<<A+B<<endl;

char temp;

temp=A[0];
A[0]=B[0];
B[0]=temp;


cout<<A<<" "<<B<<endl;




// string = string =string;but char+string=string,char+char=ascii,
// string c="" yes but char c='' not...




    return 0;
}