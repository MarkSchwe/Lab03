#include <iostream>
#include <stddef.h>     // for NULL definition
//Name: Mark Schweitzer
int main()
{
  using namespace std;

  int int1 = 1, int2 = 2, int3 = 3;
  double dub1 = 1.0, dub2 = 2.0, dub3 = 3.0;
  float flt1 = 1.0f;
  char chr1 = 'a', chr2 = 'b';

  //////////////////////////////////////////////////////////////////	
  // 1. Experiment with storage sizes and addresses of various data
  // types.
  //////////////////////////////////////////////////////////////////	
  //  A.  Add statements to print the addresses of each of the 9
  //  variables declared above and record the addresses. 
  //  B.  Add statements to print the sizes (in bytes) of each of the
  //  9 variables  (use the sizeof operator).
  //  C.  Add statements to print the sizes of the addresses of the 9
  //  variables (again, use the sizeof operator).
	
  //  Write your code here:
    cout << &int1 << endl;
    cout << &int2 << endl;
    cout << &int3 << endl;
    cout << &dub1 << endl;
    cout << &dub2 << endl;
    cout << &dub3 << endl;
    cout << &flt1 << endl;
    cout << &chr1 << endl;
    cout << &chr2 << endl;

cout << "sizes of the datatypes: " << endl;
    cout << sizeof(int1) << endl;
    cout << sizeof(int2) << endl;
    cout << sizeof(int3) << endl;
    cout << sizeof(dub1) << endl;
    cout << sizeof(dub2) << endl;
    cout << sizeof(dub3) << endl;
    cout << sizeof(flt1) << endl;
    cout << sizeof(chr1) << endl;
    cout << sizeof(chr2) << endl;


cout << "address sizes: " << endl;
    cout << sizeof(&int1) << endl;
    cout << sizeof(&int2) << endl;
    cout << sizeof(&int3) << endl;
    cout << sizeof(&dub1) << endl;
    cout << sizeof(&dub2) << endl;
    cout << sizeof(&dub3) << endl;
    cout << sizeof(&flt1) << endl;
    cout << sizeof(&chr1) << endl;
    cout << sizeof(&chr2) << endl;


  cout << "-----------------------------------------" << endl << endl;

  // Record your results here:
  //  
  //  Variable    Size   Address            Address-Size
  //   int1       4      0x7ffffffee040     8 
  //   int2       4      0x7ffffffee044     8
  //   int3       4      0x7ffffffee048     8
  //   dub1       8      0x7ffffffee050     8
  //   dub2       8      0x7ffffffee058     8
  //   dub3       8      0x7ffffffee060     8
  //   flt1       4      0x7ffffffee04c     8
  //   chr1       1      ab                 8
  //   chr2       1      b                  8


  // How many bytes of storage is allocated for each data type?  How
  // many bytes is allocated for each pointer (address). Notice that
  // the data types are not necessarily the same size, but the
  // pointers are.
  // 
  // Did the address of the char variables print as you expected?  If
  // not, why not?   You can force the printed output to be
  // interpreted as a pointer by coercing it (casting) to void* like
  // this:
  //    cout << (void *) &chr1;
  //
  // Run the program again, using the coercion for the char
  // pointers. Record your data.

  // Write your modified code here:

    
    cout << (void *) &chr1 << endl;
    cout << (void *) &chr2 << endl;

    cout << (void *) sizeof(chr1) << endl;
    cout << (void *) sizeof(chr2) << endl;

    cout << (void *) sizeof(&chr1) << endl;
    cout << (void *) sizeof(&chr2) << endl;
  cout << "-----------------------------------------" << endl << endl;


  // Record your results here:
  //  
  //  Variable  Size   Address          Address-Size
  //     chr1   0x1    0x7ffffffee03e   0x8
  //     chr2   0x1    0x7ffffffee03f   0x8

  //////////////////////////////////////////////////////////////////	
  // 2. Experiment with pointer variables.
  //////////////////////////////////////////////////////////////////	
  //   A. Declare pointer vaiables intPtr1, intPtr2, intPtr3, dubPtr1,
  //   dubPtr2, dubPtr3, fltPtr1, chrPtr1, and chrPtr2 so that they
  //   can be used to point to the  appropriate variables.  Assign the
  //   address of the appropriate variable to them and print their
  //   values.  (The char pointers will have to be coerced as before
  //   for printing).

  //  Write your code here:
	int *intptr1;
    int *intptr2;
    int *intptr3;
    double *dubPtr1;
    double *dubPtr2;
    double *dubPtr3;
    float *fltPtr1;
    char *chrPtr1;
    char *chrPtr2;

cout << "Printing out pointers: " << endl;
    cout << intptr1 << endl;
    cout << intptr2 << endl;
    cout << intptr3 << endl;
    cout << dubPtr1 << endl;
    cout << dubPtr2 << endl;
    cout << dubPtr3 << endl;
    cout << fltPtr1 << endl;
    cout << (void *) chrPtr1 << endl;
    cout << (void *) chrPtr2 << endl;

  cout << "-----------------------------------------" << endl << endl;

  //  Report your results here:
  // 
  //   Pointer  Printed
  //  Variable   Value
  //   intPtr1  0x7ffffffee030
  //   intPtr2  0x8001b01
  //   intPtr3  0x2
  //   dubPtr1  0x8001b5d
  //   dubPtr2  0x7fffff5b0fc8
  //   dubPtr3  0x8001b10
  //   fltPtr1  0
  //   chrPtr1  0x8001120
  //   chrPtr2  0x7ffffffee160

  // How do the values of the pointers compare to the values of the
  // addresses you got in the previous experiment?

  // They are much more scattered than before, which to me suggests that instead of choosing a spcifically defined area to
  // store its memory, pointers use the first thing thats available, which could explain how scattered the locations are.
  //
  //

  //////////////////////////////////////////////////////////////////	
  //  3. Experiments with NULL pointers and with dereferencing
  //////////////////////////////////////////////////////////////////	
  //   A. Assign NULL to fltPtr1, then print the value of fltPtr1.
  //   B. Accessing the storage locations through the relevant
  //   pointers, assign the following values and print them.
  //       int1  12
  //       int2  22
  //       dub1  10.1
  //       dub2  20.2
  //       flt1  30.3

  // Write your code here:

  
    //cout << *fltPtr1 << endl;
    int1 = 12;
    int2 = 22;
    dub1 = 10.1;
    dub2 = 20.2;
    flt1 = 30.3;
    cout << int1 << endl;
    cout << int2 << endl;
    cout << dub1 << endl;
    cout << dub2 << endl;
    cout << flt1 << endl;
    intptr1 = &int1;
    intptr2 = &int2;
    dubPtr1 = &dub1;
    dubPtr2 = &dub2;
  // Your program should have terminated with a run-time error.
  // What error was reported?
  // a segmentation fault
  // 
  //
  // Why did it occur?
  // because I had tried to find the memory location of something that's location was null, so it cant find the value attached to it
  //because its null. 

  //   C.  Fix the problem and repeat.

  // Write your code here:
  fltPtr1 = &flt1;

  cout << "-----------------------------------------" << endl << endl;

  //////////////////////////////////////////////////////////////////	
  //  4. Experiments with pointer arithmetic
  //////////////////////////////////////////////////////////////////	
  //    A.  Print the values of intPtr2, (intPtr2+1) and
  //    (intPtr2-1). Did you get what you expected? 

  // Write your code here:
	cout << *intptr2 << endl;
    cout << *(intptr2+1) << endl;
    cout << *(intptr2-1) << endl;
  // Write your explanation here:
  // Yes, I had gotten the result I thought I would, at least for the first one. for the other two, the only thing I can think of is that
  //the computer is looking for memory locations one space higher and lower than where intptr is and it gives them values, but then it
  // should give an error.
  //
  //
  //


  //   B. Print the value of intPtr1.
  //   C. Use the increment operator to increment intPtr1. 
  //   D. Print the value of intPtr1 again.  
  //   E. Print the value of the memory location pointed to by
  //   intPtr1.  Explain what is happening.
	
  // Write your code here:
    cout << intptr1 << endl;
    cout << *intptr1 << endl;
    intptr1++;
    cout << *intptr1 << endl;
    cout << intptr1 << endl; 

  // Write your explanation here.
  //result:
  //0x7ffffffedff8
 //12
 //22
 //0x7ffffffedffc
  // What id imagine is that like the previous exercise, intptr is looking for the next memory location, since its incrementing a 
  // pointer, not a normal value.
  //

  cout << "-----------------------------------------" << endl << endl;


  //////////////////////////////////////////////////////////////////	
  //  5. Experiments with dynamic allocation
  //////////////////////////////////////////////////////////////////	
  //   A.  Use the new operator to dynamically allocate an integer.
  //   B.  Assign the number 6000 to the new location.
  //   C.  Print the address of this new location.
  //   D.  Print the value stored in the new location.
  //   E.  Comment on the address of the new location compared to the
  //   addresses seen in part 2.

  //  Write your code here:
    int *intptr4 = new int(6000);
    cout << intptr4 << endl;
    cout << *intptr4 << endl;
  //  Write your results and comments here:
  //  
  //  new location address = 0x80172c0
  //  contents of new location = 6000

  //  Comment:
  //  works exactly how I thought it would.

  //  F.  Use the new operator to allocate an array of size 10 of
  //  doubles.  Fill the array with 10.0,20.0,...100.0 and print the array.

  // Write your code here:
    double *intptr5 = new double[10];
    for (int i = 0; i < 10; i++){
        *(intptr5 + i) = (double) ((i + 1) * 10.0);
    }
    for (int i = 0; i < 10; i++){
        cout << *(intptr5 + i) << endl;
    }
  return 0;
}
