//
// Created by Arafat on 2019/4/4.
//

#include "phoneList.h"
#include "iostream"
#include "fstream"
#include "string"

using namespace std;

phoneList::phoneList() {};
phoneList::~phoneList() {};

void setOut(){
    cout.setf(ios_base::left,ios_base::adjustfield);
}

void phoneList::del() {
    if (myList.empty()){
        cout<<"Phone List is empty."<<endl;
        return;
    }

    string name;
    vector<Person>::iterator iter;
    cout<<"please input the name you want to delete:\n";
    cin>>name;
    for(iter=myList.begin();iter!=myList.end();){
        if (iter->name==name){
            myList.erase(iter);
            cout<<"succussfully delete."<<endl;
            this->reflush();
            return;
        } else
            iter++;
    }
    cout<<"no info matches."<<endl;
}

void phoneList::showFile() {

    if (myList.empty()){
        cout<<"Phone List is empty."<<endl;
        return;
    }

    vector<Person>::iterator iter;
    setOut();
    for(iter=myList.begin();iter!=myList.end();iter++){

        cout.width(15);
        cout<<iter->name;
        cout.width(15);
        cout<<iter->phone<<endl;
    }
}

int phoneList::readFile() {
    fstream readfile("list.txt");
    int count=0;
    if(readfile){
        cout << "****Telephone book****\n";
        cout << "name:" << "\t\t" << "phone:" << "\n";
        Person p;
        if(!(readfile>>p.name>>p.phone)){
            cout<<"\tNULL\n";
            return 1;
        }
        myList.push_back(p);
        count++;
        while (readfile>>p.name>>p.phone){
          myList.push_back(p);
          count++;
        }
        showFile();
        cout<<"Total:\t"<<count<<"\tinfos\n";
        readfile.close();
        return count;
    }
    else{
        ofstream outfile;
        outfile.open("list.txt");
        if (!outfile.is_open()) {
            cout << "file is not created!\n";
            return -1;
        } else {
            cout << "file not exist but we have created one for you \n";
            cout << "****Telephone book****\n";
            cout << "\tNULL\n";
        }
        outfile.close();
    }
    return 2;
}

void phoneList::search() {
    if (myList.empty()){
        cout<<"Phone List is empty."<<endl;
        return;
    }
    string name;
    cout<<"please input the name you want to search:\n";
    cin>>name;
    vector<Person>::iterator iter;
    for(iter = this->myList.begin();iter!=this->myList.end();iter++){
        if(name == iter->name){
            cout<<iter->name<<"\t\t"<<iter->phone<<"\n";
            return;
        }
    }
    cout<<"no info matches.\n";
}

void phoneList::reflush() {
    ofstream outfile("list.txt");
    vector<Person>::iterator iter;
    setOut();
    for(iter = myList.begin(); iter!=myList.end();iter++){
        outfile.width(15);
        outfile<<iter->name;
        outfile.width(15);
        outfile<<iter->phone<<endl;
    }
    outfile.close();
}

void phoneList::add() {
    Person p;
    cout<<"Please input the name:"<<endl;
    cin>>p.name;
    cout<<"Please input the phone:"<<endl;
    cin>>p.phone;
    myList.push_back(p);
    cout<<"Successfully created!"<<endl;
    reflush();
}