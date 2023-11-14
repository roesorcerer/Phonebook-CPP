/* 
 * File:   main.cpp
 * Author: Rowan Stratton
 * Module 06 Assignment - Phonebook
 */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//defining two parallel arrays

string name[3];
string phoneNumber[3];
int size = 3;
int comp(int const &i, int const &j) {
return i > j;
}

void inputData(){
//get the input name and phone phoneNumber
        for(int i=0; i<3; i++){
            cout<<"\nEnter the "<<i+1<<" person name: ";
            getline(cin,name[i]);
            cout<<"\nEnter the "<<i+1<<" person's phone number: ";
            cin>>phoneNumber[i];
            cin.ignore();
    }
}
void printData() {
        // print the input name and phone number after sorting the data
        for (int i=0; i<3; i++){
        cout<<"Contact name:"<<name[i]<<'\t'<<"Contact phone number:"<<phoneNumber[i]<<endl;
    }
}
void search(){
        //Get the search term
        string search;
        cout << endl << "Enter name to search: ";
        cin >> search;
        cin.ignore();
        //Search the array based on the name
        int found = -1;
        for (int i = 0; i < 3; i++)
        {
        if (name[i] == search)
        found = i;
        }
        // print name and number
        cout << endl;
        if (found != -1)
        {
        cout << " Name : " << name[found] << endl;
        cout << " Number: " << phoneNumber[found] << endl;
        }
        else
        {
        cout << "The person is not in the array." << endl;
    }
}

void ascending() {
        for (int i=0; i < 3; i++) {
        for (int j=0; j < 3-i-1; j++) {
        if (phoneNumber[j]>phoneNumber[j+1]){
        string temp = name[j];
        name[j] = name[j+1];
        name[j+1] = temp;


        temp = phoneNumber[j];
        phoneNumber[j]=phoneNumber[j+1];
        phoneNumber[j+1] = temp;
        }
    }
}
        cout<<endl<<"Sorted List"<<endl;
        for(int i = 0; i<3; i++) {
        cout <<i+1 << "." << "Name:" << name[i] << " | ";
        cout<< "Number:" << phoneNumber[i] <<"\n"<< endl;
    }
}

void descending() { //this is where I am having trouble.
        for (int i=0; i < 3; i++) {
        for (int j=0; j < 3-i-1; j++) {
        if (phoneNumber[j]<phoneNumber[j+1]){
        string temp = name[j];
        name[j] = name[j+1];
        name[j+1] = temp;
        //Correction done in this part..
        temp = phoneNumber[j];
        phoneNumber[j]=phoneNumber[j+1];
        phoneNumber[j+1] = temp;
        }
    }
}
        cout<<endl<<"Sorted List"<<endl;
        for(int i = 0; i<3; i++) {
        cout <<i+1 << "." << "Name:" << name[i] << " | ";
        cout<< "Number:" << phoneNumber[i] <<"\n"<< endl;
    }
}


int main()
{
int choice;

while(1){
    cout<<"Press 1 to input data."<<endl;
    cout<<"Press 2 to sort in ascending order."<<endl;
    cout<<"Press 3 to sort in descending order."<<endl;
    cout<<"Press 4 to print data."<<endl;
    cout<<"Press 5 to search for an individual in the data."<<endl;
    cout<<"Press 6 to end the program."<<endl;
    cout<<"Choice: ";
    cin>>choice;
    cout<<"\n\n"<<endl;

    switch(choice){

        case 1:
        cin.ignore();
        inputData();
        break;

    case 2:
        ascending();
        break;

    case 3:
        descending();
        // sort in the descending order
        break;
    case 4:
        printData();
        break;

    case 5:
        search();
        break;

    case 6:
    return 0;
    break;
    default:
;
    }
}
return 0;
}
