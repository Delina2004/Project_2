# README: Student Grade Manager

---

## Project Overview

The **Student Grade Manager** is a C++ application designed to manage and analyze student records. It allows users to input student details, assign grades for various subjects, calculate averages, and save the data to a file. The program demonstrates key programming concepts such as dynamic memory management, object-oriented design, and file handling.

---

## Features

1. **Add Student**  
   Input a student's name and grades for four predefined subjects: Math, Science, Literature, and History. The program generates a unique random ID for each student and calculates their average grade.

2. **Display All Students**  
   View a neatly formatted table showing the ID, name, and average grade of all students.

3. **Calculate Subject Average**  
   Compute the overall average grade for a specific subject across all students.

4. **Save to File**  
   Save all student records to a binary file for persistent storage.

5. **Exit**  
   Exit the program safely after performing desired operations.

---

## Program Structure

### Header File: **StudentGradeManager.hpp**
- Declares the `Student` structure, `Subject` enum, and function prototypes.

### Source File: **StudentGradeManager.cpp**
- Implements:
  - Core operations like adding a student, calculating averages, and saving data.
  - Helper functions like generating random IDs.

### Main File: **main.cpp**
- Provides the user interface for managing students and invoking functionalities.

---

## Requirements

### Tools
- **Compiler:** Any C++ compiler supporting C++11 or later (e.g., GCC, Clang, MSVC).  
- **Build Tool:** Optional (e.g., `make`).

### Libraries
- Standard C++ libraries, including:
  - `<iostream>`: Console input and output.
  - `<vector>`: Dynamic arrays.
  - `<memory>`: Smart pointers.
  - `<fstream>`: File handling.
  - `<cstdlib>` and `<ctime>`: Random number generation.

---

## Instructions

### Compilation
To compile the project, use a command like:
```bash
g++ -std=c++11 main.cpp StudentGradeManager.cpp -o StudentGradeManager
