#include<iostream>
#include<cstring>
using namespace std;
int main(){
//declaring arr[10]
int arr[10];
//taking values
cout<<"enter the array of 10 integers"<<endl;
for(int i=0;i<10;i++){
cin>>arr[i];
}
//printing using loop
cout<<"so your array(by loop) is-"<<endl;
for(int j=0;j<10;j++){
cout<<arr[j];
}
cout<<endl;
//printing by pointer method
int*p;
p=arr;
cout<<"so your array(by pointer) is-"<<endl;
for(int i=0;i<10;i++){
cout<<*(p+i);
}
return 0;
}
