#include <iostream>
#include "phoneList.h"
#include "stdlib.h"

using namespace std;

int Menu(){
    int num;
    cout << "********************" << endl;
    cout << "*   1      ADD     *" << endl;
    cout << "*   2      DEL     *" << endl;
    cout << "*   3    SEARCH    *" << endl;
    cout << "*   4     SHOW     *" << endl;
    cout << "*   5     EXIT     *" << endl;
    cout << "********************" << endl;
    cout << "input the num:";
    cin >> num;
    return num;
}


int main() {

    phoneList mylist;
    mylist.readFile();
    int num =Menu();
    bool flags= 1;
    while (flags) {
        switch (num) {
            case 1:
                mylist.add();
                break;
            case 2:
                mylist.del();
                break;
            case 3:
                mylist.search();
                break;
            case 4:
                mylist.showFile();
                break;
            case 5:
                cout << "Bye";
                return 0;
            default:
                cout << "not match" << endl;
                break;
        }

        cout << "please input options:\n";
        cin >> num;
    }

    system("pause");
    return 0;
}