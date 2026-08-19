#include <iostream>
#include <string>
using namespace std;

struct student {
    int roll;
    string name;
};

void insert(student* a, int* size) {
    cout << "Enter the number of students : ";
    cin >> *size;

    for (int i = 0; i < (*size); i++) {
        cout << "Enter " << i + 1 << "th student name and roll : ";
        cin >> a->name >> a->roll;
        a++; // move to next student
    }
    cout << endl;
}

void display(student a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Student name is : " << a[i].name
             << ", and roll is " << a[i].roll << endl;
    }
}

int main() {
    student s[100];

    int size;                
    insert(s, &size);        
    display(s, size);

    return 0;
}
