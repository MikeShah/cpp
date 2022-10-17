/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 student.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g student.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file student.cpp
#include <iostream> // I/O stream library

struct Student{
    int age;
    void print(){
        std::cout << "Students age: " << age << "\n";
    }
};

// Entry point to program 'main' student.cpp
int main(int argc, char* argv[]){
  
    Student s1; // Create a student (default constructor called)
            s1.age = 21; // Set 'age' on this specific instance 's1'
                         // of an object with type 'Student'

                // Note: The default constructor is called behind
                //       the scenes, we did not create it.
    s1.print(); // Print whatever default constructor assigns age to

	// Another instance of a student
	Student s2;
			s2.age = 57;
			s2.print();

	// Another instance of a student, this time heap allocated
	Student* s3 = new Student;
			 s3->age = 42;
			 s3->print();

			 delete s3;


    return 0;
}












