#include <iostream>

// Represents a student and contains roll number and marks for that student
// Contains a function, display(), to print all the details of the student
class Student {
public:
    int rollNumber;
    int marks;
   
    void display() { 
        std::cout << "Roll number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    // Initialize the objects in memory
    Student s1, s2;
    
    // Assigns values of members of both objects
    s1.rollNumber = 1;
    s1.marks = 10;
    
    s2.rollNumber = 2;
    s2.marks = 100;
    
    // Display both students by using display()
    std::cout << "First student" << std::endl;
    s1.display();
    std::cout << std::endl;
    std::cout << "Second student" << std::endl;
    s2.display();

    // See if changing s1.marks effects the value of s2.marks (it shouldn't)
    std::cout << "Before changing s1.marks to 80..." << std::endl;
    std::cout << "s2.marks = " << s2.marks << std::endl;

    s1.marks = 80;

    std::cout << "After changing s1.marks to 80..." << std::endl;
    std::cout << "s2.marks = " << s2.marks << std::endl;
    
    return 0;
}
