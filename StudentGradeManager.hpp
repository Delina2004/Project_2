#ifndef STUDENTGRADEMANAGER_HPP
#define STUDENTGRADEMANAGER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum class Subject { MATH, SCIENCE, LITERATURE, HISTORY, COUNT };

// Structure to store student details
struct Student {
    string name;
    int id;
    vector<double> grades; // Stores grades for each subject
    double averageGrade;

    // Method to calculate the average grade for the student
    void calculateAverageGrade();
};

// Function declarations
int generateRandomID();
void inputStudentDetails(vector<unique_ptr<Student>>& students);
void displayAllStudents(const vector<unique_ptr<Student>>& students);
void calculateOverallAverage(const vector<unique_ptr<Student>>& students, Subject subject);
void saveToFile(const vector<unique_ptr<Student>>& students, const string& filename);

#endif // STUDENTGRADEMANAGER_H
