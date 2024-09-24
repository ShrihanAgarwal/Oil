#include <iostream>
using namespace std;

int main(){
    string password = "Oil";
    string enter;
    cout<<"Enter the password"<<endl;
    cin>>enter;
    if(enter == password)
    {
        cout<<"More oil"<<endl;
    }
    else if(enter == "Lio")
    {
        cout<<"Less Oil"<<endl;
    }
    else
    {
        cout<<"Incorrect"<<endl;
    }


}