#include <iostream>
#include <string>
using namespace std;

struct student {
    int rollno;
    string name;
    float percentage;
};

int main() {
    student s[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Please enter a number between 1 and 10.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Enter the roll number: ";
        cin >> s[i].rollno;

        cout << "Enter the name: ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter percentage: ";
        cin >> s[i].percentage;
    }

    cout << "\n---- Students Records ----\n";
    cout << "Roll No.\tName\t\tPercentage\n";

    for (int i = 0; i < n; i++) {
        cout << s[i].rollno << "\t\t"
             << s[i].name << "\t\t"
             << s[i].percentage << "%\n";
    }

    return 0;
}
