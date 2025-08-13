#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks :";
    cin>>marks;
switch(marks /10){
    case 10 :
    case 9 :
        cout<<"grade A";
        break;
        case 8 :
        cout<<"grade B";
        break;
        case 7:
        cout<<"grade c";
        break;
         case 6:
        cout<<"grade D";
        break;
         case 5 :
        cout<<"grade E";
        break;
        default :
        cout<<"grade F";
        break;
}
return 0;
}