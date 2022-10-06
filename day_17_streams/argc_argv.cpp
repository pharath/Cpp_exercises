#include <iostream>

// argc: argument count
// argv: argument vector

int main(int argc, char** argv) {
    std::cout << "Have " << argc << " arguments:" << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
}

// Run ./a.out arg1 arg2 arg3
//
// Output:
//
// Have 4 arguments:
// ./test		//ACHTUNG: das erste Argument ist also immer der Dateiname !
// arg1
// arg2
// arg3
