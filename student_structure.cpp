#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    int age;
    int con_no;

};

int main()
{
    student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Contact no: ";
    cin >> s.con_no;
    //displaying the data
    cout << "Displaying Information\n" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Age: " << s.age << endl;
    cout <<  "Con_no: " <<s.con_no<<endl;
    return 0;
}