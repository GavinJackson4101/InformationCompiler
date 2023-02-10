#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName,lastName;
    string streetAddress,city;
    string zipCode;

    cout<<"\nEnter Information of a fictional person:\n\n";
    cout<<"Enter First Name: ";
    cin>>firstName;
    cout<<"Enter Last Name: ";
    cin>>lastName;
    cin.ignore();

    cout<<"Enter Street Address: ";
    getline(cin,streetAddress);
    cout<<"Enter City: ";
    getline(cin,city);
    cout<<"Enter Zip Code: ";
    cin>>zipCode;

    cout<<endl<<endl;
    cout<<"\nInformation of a fictional person:\n\n";
    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"Street Address: "<<streetAddress<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Zip Code: "<<zipCode<<endl;

    return 0;
}