#include <iostream>
#include <string>
using namespace std;

class BScStudentList {
private:
    string StudentName;
    string FatherName;
    string MotherName;
    int RollNumber;
    string Session;
    string Address;
    static int totalStudents; // To keep track of the total number of students
    static BScStudentList students[10]; // An array to store student objects

public:
    BScStudentList() {
        StudentName = "";
        FatherName = "";
        MotherName = "";
        RollNumber = 0;
        Session = "";
        Address = "";
    }

    // Member function to add student info
    void AddStudentInfo(string name, string father, string mother, int roll, string session, string address) {
        StudentName = name;
        FatherName = father;
        MotherName = mother;
        RollNumber = roll;
        Session = session;
        Address = address;
        totalStudents++;
        students[totalStudents - 1] = *this;
    }

    // Member function to display total number of students
    static int DisplayTotalStudents() {
        return totalStudents;
    }

    // Member function to delete student info

    void DeleteStudentInfo(int roll) {
    int foundIndex = -1; 

    // Find the index of the student to delete
    for (int i = 0; i < totalStudents; i++) {
        if (students[i].RollNumber == roll) {
            foundIndex = i;
            break; // Exit the loop when the student is found
        }
    }

    if (foundIndex != -1) {
        // Shift students to the left to fill the gap
        for (int i = foundIndex; i < totalStudents - 1; i++) {
            students[i] = students[i + 1];
        }

        totalStudents--;
        cout << "Student with Roll Number " << roll << " deleted successfully." << endl;
    } else {
        cout << "Student with Roll Number " << roll << " not found." << endl;
    }
}


    // Member function to display all student info
    static void DisplayAllInfo() {
        for (int i = 0; i < totalStudents; i++) {
            cout << "Student Name: " << students[i].StudentName << endl;
            cout << "Father Name: " << students[i].FatherName << endl;
            cout << "Mother Name: " << students[i].MotherName << endl;
            cout << "Roll Number: " << students[i].RollNumber << endl;
            cout << "Session: " << students[i].Session << endl;
            cout << "Address: " << students[i].Address << endl;
            cout << "-----------------------------" << endl;
        }
    }
};

int BScStudentList::totalStudents = 0;
BScStudentList BScStudentList::students[10];

int main() {
    BScStudentList studentList;

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Delete Student" << endl;
        cout << "3. Display Total Students" << endl;
        cout << "4. Display All Student Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, father, mother, session, address;
                int roll;

                cout << "Enter Student Name: ";
                cin >> name;
                cout << "Enter Father's Name: ";
                cin >> father;
                cout << "Enter Mother's Name: ";
                cin >> mother;
                cout << "Enter Roll Number: ";
                cin >> roll;
                cout << "Enter Session: ";
                cin >> session;
                cout << "Enter Address: ";
                cin >> address;

                studentList.AddStudentInfo(name, father, mother, roll, session, address);
                break;
            }
            case 2: {
                int rollToDelete;
                cout << "Enter Roll Number to Delete: ";
                cin >> rollToDelete;
                studentList.DeleteStudentInfo(rollToDelete);
                break;
            }
            case 3:
                cout << "Total Students: " << studentList.DisplayTotalStudents() << endl;
                break;
            case 4:
                cout << "All Student Information:" << endl;
                studentList.DisplayAllInfo();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
