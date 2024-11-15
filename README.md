# Student Grade Manager

## Overview

The **Student Grade Manager** is a C++ program that allows educators or administrators to manage student grades across multiple subjects. The program stores student data including names, unique IDs, and grades for predefined subjects, calculates individual and overall average grades, and allows for saving and loading data from a file.

## Features

- **Student Management**: Add new students, input their details (name and grades), and generate a unique ID.
- **Grade Calculations**: Automatically calculate and display each student's average grade.
- **Subject Average Calculation**: Calculate and display the overall average grade for each subject across all students.
- **File Persistence**: Save and load student data to and from a binary file, ensuring data is preserved between sessions.
- **User Interaction**: The program provides a simple menu for user input, guiding through the various operations.

## Requirements

- **C++ Compiler** (e.g., GCC, MSVC)
- C++11 or later for smart pointer support (`std::unique_ptr`)
- Standard C++ libraries: `iostream`, `fstream`, `iomanip`, `string`, `vector`, `memory`, `cstdlib`, and `ctime`.

## Setup

### 1. Clone the repository or download the project files.

```bash
git clone https://your-repository-url.git
