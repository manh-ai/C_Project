#include<iostream>
using namespace std;
int main(){
float a,b;
cout<<" equation ax+b=0 "<<endl;
cout<<"enter the value of a :";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
if(a!=0)
cout<<"the solution of x is "<< -b/a;
  else if (a == 0 && b != 0)
cout<<"phuong trinh vo nghiem (unsolved equation)";
 else if (a == 0 && b == 0)
cout<<"phuong trinh vo so nghiem(equation with infinitely many solutions)";

}