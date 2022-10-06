// by phth
//
// To understand:
// "In C, the macro NULL may have the type void*, but that is not allowed in C++." (https://en.cppreference.com/w/cpp/types/NULL)
//
// This is because in C++ there is no implicit cast from void* to any other type.
// more details:
// https://stackoverflow.com/a/69057243
//
// bottom line: merke:
// in C ist NULL ein Macro für ( (void *) 0)
// in C++ ist NULL ein Macro für nullptr 
// (bis C++11 war NULL ein Macro für 0)

#include <iostream>

int main()
{
    // experiment 1:
    //
    // does not compile
    //
    // compiler will show:
    // error: ‘void*’ is not a pointer-to-object type
    //
    // fix: use a different type (a pointer-to-object type, e.g. "char*") instead 
    //   of "void*". "void*" is a "pointer-to-nothing".
    void* ptr = nullptr;
    int foo = *ptr;    // this line fails because in C++ there is no implicit cast from void* to any other type

    // experiment 2:
    //
    // does compile
    // 
    // but at runtime will show:
    // segmentation fault 
    //
    // because of dereferencing the null pointer "ptr"
    //char* ptr=nullptr;
    //int foo = *ptr;     // dereferencing a nullptr => segmentation fault

    //std::cout << "value of ptr = " << foo << "\n";

    return 0;
}
