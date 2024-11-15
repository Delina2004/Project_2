#include "StudentGradeManager.hpp"

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    vector<unique_ptr<Student>> students;

    int choice;
    string filename = "students.dat";

    do {
        cout << "\nStudent Grade Manager\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Calculate Subject Average\n";
        cout << "4. Save to File\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputStudentDetails(students);
            break;
        case 2:
            displayAllStudents(students);
            break;
        case 3:
            int subject;
            cout << "Enter subject (0: MATH, 1: SCIENCE, 2: LITERATURE, 3: HISTORY): ";
            cin >> subject;
            calculateOverallAverage(students, static_cast<Subject>(subject));
            break;
        case 4:
            saveToFile(students, filename);
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
