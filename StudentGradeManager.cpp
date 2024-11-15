#include "StudentGradeManager.hpp"

// Method to calculate the average grade for the student
void Student::calculateAverageGrade() {
    double sum = 0;
    for (double grade : grades) {
        sum += grade;
    }
    averageGrade = grades.empty() ? 0 : sum / grades.size();
}

// Function to generate a random student ID
int generateRandomID() {
    return rand() % 90000 + 10000; // IDs between 10000 and 99999
}

// Function to input student details and grades
void inputStudentDetails(vector<unique_ptr<Student>>& students) {
    auto student = make_unique<Student>();

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, student->name);

    student->id = generateRandomID();
    student->grades.resize(static_cast<int>(Subject::COUNT));

    for (int i = 0; i < static_cast<int>(Subject::COUNT); i++) {
        cout << "Enter grade for " << static_cast<Subject>(i) << ": ";
        cin >> student->grades[i];
    }

    student->calculateAverageGrade();
    students.push_back(move(student));
    cout << "Student added with ID: " << students.back()->id << endl;
}

// Function to display all student records
void displayAllStudents(const vector<unique_ptr<Student>>& students) {
    cout << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Average" << endl;
    cout << string(40, '-') << endl;

    for (const auto& student : students) {
        cout << setw(10) << student->id
            << setw(20) << student->name
            << setw(10) << fixed << setprecision(2) << student->averageGrade << endl;
    }
}

// Function to calculate the overall average grade for a specific subject
void calculateOverallAverage(const vector<unique_ptr<Student>>& students, Subject subject) {
    double sum = 0;
    int count = 0;

    for (const auto& student : students) {
        sum += student->grades[static_cast<int>(subject)];
        count++;
    }

    double overallAverage = count == 0 ? 0 : sum / count;
    cout << "Overall average for " << static_cast<int>(subject) << ": "
        << fixed << setprecision(2) << overallAverage << endl;
}

// Function to save student records to a file
void saveToFile(const vector<unique_ptr<Student>>& students, const string& filename) {
    ofstream file(filename, ios::binary);
    if (!file) {
        cerr << "Error opening file for writing." << endl;
        return;
    }

    for (const auto& student : students) {
        file.write(reinterpret_cast<const char*>(&student->id), sizeof(student->id));
        size_t nameLength = student->name.size();
        file.write(reinterpret_cast<const char*>(&nameLength), sizeof(nameLength));
        file.write(student->name.c_str(), nameLength);
        file.write(reinterpret_cast<const char*>(&student->averageGrade), sizeof(student->averageGrade));

        // Writing grades
        for (double grade : student->grades) {
            file.write(reinterpret_cast<const char*>(&grade), sizeof(grade));
        }
    }
    file.close();
    cout << "Data saved successfully to " << filename << endl;
}
