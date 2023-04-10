# Student-Record-Management-System

Created a Student record management system project, which enables to create, and modify student Records.It also performs the operations such as Insert, Search, Update and Delete the Student data. This project code is written in C++ using Linked List Data Structure.

Key Features of the Project

1. Add student details: Get information from the user and add it to the database. Verify that each student’s roll number is distinct before adding them to the database.

2. Find the student by the given roll number: This method takes a roll number as input from the user and searches for the student with that roll number in the database.

3. Count of Students: Print the total number of students in the database.

4. Update Student: This feature is used to update student records. The user should be allowed to pick and choose whatever fields he/she wishes to update because this method does not request updated information for every field.

5. Delete a student: Using this function, the student record for the specified roll number is deleted.

a) "First, we define the C++ structure which contains information like the student's name, roll number, cgpa, etc.": This means that the program defines a structure in C++ that contains various pieces of information about a student, such as their name, roll number, and GPA. This structure will be used to store information about each student in the database.

b) "We define functions that help us to manage the database. These functions involve adding a new student into the database, updating the student information, searching students based on roll number, etc, and counting the total students in the database, etc.": This means that the program defines functions that allow us to manipulate the database of student information. These functions include adding a new student to the database, updating an existing student's information, searching for a student based on their roll number, and counting the total number of students in the database.

c) "At last, we make use of the above-defined functions through the main function which is our driver code which is a menu-driven program displaying choices to the user to perform a particular task.": This means that the program's main function acts as a "driver" for the program, allowing the user to interact with the database through a menu-driven interface. The main function uses the functions defined earlier to perform various tasks, such as adding a new student or searching for a student. The menu allows the user to choose which task they want to perform.

Steps to make the project:

1. Defining the C++ class to store the information of students.

![image](https://user-images.githubusercontent.com/103095458/230975498-031dc6e4-4dc6-4bde-9f6d-3a4565962d72.png)
The above class  contains string name,  int roll_number, float marks and float percentage of a particular student is enrolled in. 

2. Defining add student method. This method takes user input for the various fields present in the student structure and adds the student to the database.

![image](https://user-images.githubusercontent.com/103095458/230976203-eb87cc7c-2a1c-4624-99b8-addb0b0f0ad1.png)

In the above code first, we ask the user to enter the roll number of the student he/she wants to insert and also  other details of the student like name ,marks we increase the total students count by 1.

3.Defining find student by roll number method. This method takes the roll number as input from the user and searches for the student with that roll number in the database, if the roll number is found then it prints the details of that student otherwise it prints no such student with the given roll number.

![image](https://user-images.githubusercontent.com/103095458/230976524-33d8b999-1ef0-4867-9373-2dad11c10209.png)

4. Defining find total number of students in the database method.

This method counts the total number of students present in the database. As we were maintaining a variable count for maintaining the total number of students so this method simply prints the value of that variable.
![image](https://user-images.githubusercontent.com/103095458/230976827-26423268-6a06-48f3-a37c-893ae5064727.png)

4.Defining delete student by roll number method. This method takes the roll number as input from the user and removes it from the database.
![image](https://user-images.githubusercontent.com/103095458/230976987-c857dbc9-2082-4f37-8994-437a04a9a9e8.png)
![image](https://user-images.githubusercontent.com/103095458/230977078-05b5f8fc-b01a-42c9-9671-49a7379db24d.png)

Defining update student details method. This method takes the roll number of the student whose details you want to update as input from the user and when the roll number is found in the database then it asks the user which details he/she wants to update.

![image](https://user-images.githubusercontent.com/103095458/230977376-d3b01cc4-3092-46b7-b496-fc1b471cbe36.png)

1. A menu-driven program is a software program that displays a menu of options or features and allows the user to choose one or more of these options by making a selection from the menu. The program then executes the corresponding task or feature. This type of program is commonly used in graphical user interfaces (GUIs) where users can select options by clicking on buttons or menus.
2. A console application is a type of software program that runs in a command-line interface (CLI) environment. In other words, it is a program that takes input and displays output at a command line console. This means that the user interacts with the program by typing commands and viewing text-based output on the console.
3. The switch statement in C++ is a control flow statement that allows a program to perform different actions based on the value of an expression. The switch statement evaluates the expression provided to the switch and then compares it with the cases present in the block scope of the switch. When it finds a case that matches the value of the expression, it executes the code corresponding to that case. If there is no match, the program executes the code in the default case (if one is provided). The switch statement is often used as a substitute for nested if statements and can simplify the code in certain situations.

















