# Student Grade Analyzer

## Overview

The **Student Grade Analyzer** is a C programming project developed to manage and analyze student academic records. The program allows users to store student information, calculate grades and averages, determine rankings, identify the highest and lowest scores, and generate pass/fail reports. Student data can also be saved to and loaded from a file for future use.

---

## Features

* Add student records
* Edit student information
* Delete student records
* Display all student records
* Calculate each student's average score
* Assign grades based on average marks
* Rank students according to their average scores
* Find the highest and lowest scoring students
* Generate pass/fail reports
* Save student data to a file
* Load student data from a file

---

## Technologies Used

* Programming Language: C
* Concepts:

  * Structures (`struct`)
  * Arrays
  * Functions
  * File Handling
  * Sorting Algorithms
  * Loops and Conditional Statements

---

## Data Structure

Each student record contains:

* Student ID
* Student Name
* Subject Scores
* Average Score
* Letter Grade
* Rank (calculated)

---

## Project Structure

```text
Student-Grade-Analyzer/
│
├── main.c              // Main program
├── student.txt         // Student data file (generated after saving)
├── README.md           // Project documentation
```

---

## How to Compile

Using GCC:

```bash
gcc main.c -o StudentGradeAnalyzer
```

Run the program:

```bash
./StudentGradeAnalyzer
```

On Windows:

```bash
StudentGradeAnalyzer.exe
```

---

## Team Responsibilities

| Member   | Responsibility                                                   |
| -------- | ---------------------------------------------------------------- |
| Member 1 | Data structures, constants, global variables, project setup      |
| Member 2 | Add, edit, and delete student records                            |
| Member 3 | Grade calculation, averages, rankings, highest and lowest scores |
| Member 4 | File handling (save and load records)                            |
| Member 5 | Menu system, user interface, program integration, and testing    |

---

## Future Improvements

* Support multiple classes
* Search students by ID or name
* Add GPA calculation
* Export reports to CSV
* Improve input validation
* Support dynamic memory allocation

---

## License

This project was developed for educational purposes as part of a university Software Engineering course.
