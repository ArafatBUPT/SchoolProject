//
// Created by Arafat on 2019/4/4.
//

#ifndef PHONELIST_PHONELIST_H
#define PHONELIST_PHONELIST_H

#include "vector"
#include "Person.h"
using namespace std;

class phoneList {
private:
    vector<Person> myList;

public:
    void add();
    void del();
    void search();
    void showFile();
    void reflush();
    int readFile();

    phoneList();
    ~phoneList();

};

inline void setOut();


#endif //PHONELIST_PHONELIST_H
