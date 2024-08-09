

# University Management System

## Overview

The University Management System is a simple application designed to help students, doctors, and teachers manage their data effectively. The system provides functionalities for logging in, registering, and managing data, including the ability to print and edit information stored in the system. It is structured with three main classes and several key functions to handle various operations.

## Classes

### Person Class

The base class representing a person with common attributes such as name and ID.

### Student Class

Inherits from `Person` and includes additional attributes specific to students. Manages student-related data and operations.

### Doctor Class

Inherits from `Person` and includes attributes specific to doctors. Manages doctor-related data and operations.

## Functions

### Update Function

- **Description:** Edits existing data of a student and saves the updated information inside the student's file.
- **Usage:** Allows for modification of student data and ensures that the changes are stored persistently.

### Delete Function

- **Description:** Deletes the data of a specific student by entering their ID.
- **Usage:** Removes student data from the system based on the unique identifier.

### Show All Students Function

- **Description:** Prints the data of all students on one page for the doctor of the subject.
- **Usage:** Provides an overview of all student data for review by doctors.

### Add Student Function

- **Description:** Adds data of a new student to the data file that contains all student information.
- **Usage:** Inserts new student data into the system and ensures it is saved correctly.

