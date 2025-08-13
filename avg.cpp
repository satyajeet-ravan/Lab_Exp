#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter no of elements :";
cin>>n;
float arr[n];
cout<<"Enter "<<n<< " numbers";
for(int i=0;i<n;i++){
   cin>> arr[i];
}
float sum = 0;
float avg = 0;
for(int i=0;i<n;i++){
    sum += arr[i];
}
 avg = sum/n;
cout<<"sum = "<<sum<<endl;
cout<<"avg = "<<avg;
return 0;
}