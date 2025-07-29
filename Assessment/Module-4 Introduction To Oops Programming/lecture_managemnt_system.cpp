//lecture management system

#include <iostream>
#include <string>
using namespace std;

// Class to represent Lecture details
class Lecture 
{
	private:
    
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor 
    Lecture(string lName = "Not Assigned", string sName = "Not Assigned", 
            string cName = "Not Assigned", int numLectures = 0) 
	{
        lecturerName = lName;
        subjectName = sName;
        courseName = cName;
        numberOfLectures = numLectures;
    }

    // Method to add lecture details (Interactive Input)
    void addLectureDetails() {
        cout << "\nEnter Lecturer Name: ";
        getline(cin, lecturerName);
        
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore(); // To clear buffer after integer input
    }

    // Method to display lecture details
    void displayLectureDetails() const {
        cout << "\n---------------------------------------";
        cout << "\nLecturer Name    : " << lecturerName;
        cout << "\nSubject Name     : " << subjectName;
        cout << "\nCourse Name      : " << courseName;
        cout << "\nNo. of Lectures  : " << numberOfLectures;
        cout << "\n---------------------------------------";
    }
};

int main() {
    const int totalLecturers = 5;
    Lecture lecturers[totalLecturers]; // Array of 5 Lecture objects
    
    cout << "=======================================\n";
    cout << "     LECTURE MANAGEMENT SYSTEM\n";
    cout << "=======================================\n";

    // Adding details for each lecturer
    for (int i = 0; i < totalLecturers; i++) {
        cout << "\n--- Enter details for Lecturer " << i + 1 << " ---";
        lecturers[i].addLectureDetails();
    }

    // Display all lecture details
    cout << "\n\n********** LECTURER DETAILS **********";
    for (int i = 0; i < totalLecturers; i++) {
        lecturers[i].displayLectureDetails();
    }

    cout << "\n\n========= Program Execution Completed =========\n";
    return 0;
}

