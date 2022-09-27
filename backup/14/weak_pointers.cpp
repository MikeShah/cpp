// @file weak_pointers.cpp
#include <iostream>
#include <memory>

// Here we're creating a global weak pointer(gw) 
std::weak_ptr<int> gw; 

void f(){

	// Pointing a new shared pointer, to whatever
	// our weak_ptr (gw) holds.
	auto spt = gw.lock();

	// If the shared pointer we created, which now
	// also points to the same thingg as our weak_ptr,
	// then we can proceed.
	// However, if the thing our weak_ptr, pointed to
	// no longer exists (i.e "sp" below"), thten 
    if (spt != nullptr) { // Has to be copied into a shared_ptr before usage
		std::cout << *spt << "\n";
    }
    else {
        std::cout << "gw is expired\n";
    }
}
 
int main(){
    { // Create a scope within main
		int x = 5;
		int* p = &x;
    	std::shared_ptr<int> sp = std::make_shared<int>(42);
		gw = sp; // Assigning weak_ptr to the shared_ptr
		f();
    } // Exit the scope at line 23, thus deleting all local variables 
      // between lines 23 and 29

    f();
}


