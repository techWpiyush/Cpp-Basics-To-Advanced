# C++ Practice Checklist: From Basics to DSA-Ready

Oct 28, 2026 · @Piyush-tech

## How to use this

Work through the stages in order and tick a program only when you can write it from scratch without looking at a solution.

- Write every program yourself first, compile with `g++ -Wall -Wextra`, and test with at least three inputs, including an edge case.
- Stuck for more than 30 minutes? Read about the concept, not the answer, then try again.
- Add each solved program to a GitHub repo, one file per program.

You are ready to start DSA after Stage 6: comfortable with pointers, recursion, classes and templates, and having built a linked list and a stack from scratch.

## Stage 1: Basics and control flow

These eight programs lock in loops, conditions and basic input/output.

- [ ] **Prime check.** Read an integer n and print whether it is prime. Loop only up to the square root of n.
- [ ] **Factorial.** Compute n! with a loop using `unsigned long long`. Find the n where the result overflows and print a warning for it.
- [ ] **Fibonacci series.** Print the first n terms iteratively, then print only the terms below a limit L.
- [ ] **Palindrome number.** Reverse the digits of n using `%` and `/`, then say whether n equals its reverse.
- [ ] **Digit sum and Armstrong number.** Print the sum and count of digits of n, then check if n is an Armstrong number (153 = 1³ + 5³ + 3³).
- [ ] **GCD and LCM.** Read two numbers and compute both using Euclid's algorithm in a loop.
- [ ] **Pattern printing.** For n rows print a right triangle, a centred pyramid, and a diamond using nested loops.
- [ ] **Menu calculator.** Show a menu in a `do-while` loop with `switch` for +, -, \*, / and %. Handle division by zero and quit on option 0.

## Stage 2: Functions (UDF)

Here you learn to split a problem into functions and see how arguments are passed.

- [ ] **Primes in a range.** Write `bool isPrime(int n)`, then print every prime between a and b using it.
- [ ] **Power function.** Write `long long myPow(int base, int exp)` without using `pow()`. Make a second version using recursion.
- [ ] **Swap three ways.** Write `swap` by value, by reference and by pointer. Print the variables before and after each call to see which version fails.
- [ ] **Overloaded area.** Overload `area()` for a circle (radius), rectangle (length, width) and triangle (base, height).
- [ ] **Default arguments.** Write `simpleInterest(principal, years, rate = 5.0)` and call it with and without the rate.
- [ ] **Min and max together.** Write one function that returns both the minimum and maximum of three numbers through reference parameters.
- [ ] **Recursion set.** Write recursive functions for factorial, the nth Fibonacci number, the sum of digits, and reversing a number.
- [ ] **Tower of Hanoi.** Print every move needed to shift n disks from rod A to rod C using rod B. Count the moves and check that it equals 2ⁿ − 1.
- [ ] **Inline vs macro.** Write `inline int square(int x)` and `#define SQ(x) x*x`. Call both with `5+1` and explain the different results.

## Stage 3: Arrays, strings and pointers

Pointers and memory are where most DSA confusion starts, so spend real time here.

- [ ] **Array statistics.** Read n integers and print the maximum, minimum, second largest and average.
- [ ] **Reverse in place.** Reverse an array using two indices that move toward each other. Use no second array.
- [ ] **Linear search.** Search for a value and print every index where it appears, or a not-found message.
- [ ] **Bubble sort.** Sort an array ascending. Add a flag to stop early when no swaps happen in a pass.
- [ ] **Remove duplicates.** Take a sorted array and remove repeated values in place. Print the new length.
- [ ] **Matrix add and multiply.** Read two matrices and print their sum and product. Reject the product if the sizes do not match.
- [ ] **Transpose and symmetry.** Transpose a square matrix, then check whether it is symmetric.
- [ ] **String basics.** Without `<cstring>`, reverse a string, check if it is a palindrome, and count vowels and consonants.
- [ ] **Character frequency.** Read a sentence and print how many times each letter appears, plus the word count.
- [ ] **Dynamic array.** Ask for n, allocate with `new int[n]`, fill, print the sum, then `delete[]`. Run it once without `delete[]` and check for a leak using `valgrind` or `-fsanitize=address`.
- [ ] **Pointer arithmetic.** Traverse and print an array using only `*(p + i)` and `p++`. Never use `[]`.
- [ ] **Dynamic 2D array.** Allocate a rows × cols matrix with `new int*[rows]`, fill it, print it, and free every row before freeing the outer array.

## Stage 4: Structs and OOP

These programs cover the four OOP pillars and the memory rules that go with classes.

- [ ] **Student class.** Make a `Student` with private name, roll and marks, a constructor, a destructor that prints a message, getters, setters and `display()`. Store five objects in an array and print the topper.
- [ ] **Bank account.** Make a `BankAccount` with a private balance and `deposit()`, `withdraw()` and `show()`. Reject a withdrawal that exceeds the balance.
- [ ] **Complex numbers.** Make a `Complex` class and overload `+`, `-`, `==`, `<<` and `>>`.
- [ ] **Operator overloading, part two.** Make a `Time` class (hours, minutes) and overload `+` and prefix `++`, keeping minutes below 60.
- [ ] **Static members.** Add a static counter to a class that tracks how many objects are alive, and a static function that returns it.
- [ ] **Friend function.** Make a `Box` class and write a friend function that compares the volumes of two boxes.
- [ ] **Inheritance.** Make `Employee` and a derived `Manager` with a bonus. Use protected members, call the base constructor from the derived one, and override `display()`.
- [ ] **Multilevel inheritance.** Make `Vehicle` → `Car` → `ElectricCar`, each adding one attribute. Create an `ElectricCar` and print all attributes.
- [ ] **Polymorphism.** Make an abstract `Shape` with a pure virtual `area()`. Derive `Circle`, `Rectangle` and `Triangle`. Store them in an array of `Shape*` and print each area in a loop.
- [ ] **Virtual destructor.** Delete a derived object through a base pointer with and without a `virtual` destructor and observe the difference.
- [ ] **Deep vs shallow copy.** Make a `MyString` class holding a `char*`. First use the default copy and watch it crash on destruction, then write a copy constructor, an assignment operator and a destructor (the rule of three).
- [ ] **Diamond problem.** Build a diamond of inheritance (`Person` → `Student` and `Teacher` → `TeachingAssistant`). Fix the duplicate base with virtual inheritance.

## Stage 5: Intermediate C++

Templates, exceptions, files and the STL are the tools you will use constantly once DSA starts.

- [ ] **Generic functions.** Write function templates `mySwap<T>` and `myMax<T>`. Test them with `int`, `double` and `string`.
- [ ] **Template stack.** Make a `Stack<T>` class using a fixed-size array with `push`, `pop`, `peek`, `isEmpty` and `isFull`. Test it with `int` and `char`.
- [ ] **Safe division.** Read two numbers and divide them. Use `throw` for division by zero and `catch` it in `main`.
- [ ] **Custom exception.** Add an `InsufficientFundsException` class to your `BankAccount` program. Throw it from `withdraw()` and catch it in `main`.
- [ ] **File I/O basics.** Write n numbers to a text file with `ofstream`, read them back with `ifstream`, and print their sum and average.
- [ ] **Record store.** Save `Student` records to a file and load them on the next run. Add search by roll number and delete by roll number.
- [ ] **Vector practice.** Read numbers into a `vector<int>`, sort them, remove duplicates and print the result with a range-based `for`.
- [ ] **Word frequency.** Read a paragraph and count each word's occurrences using `map<string, int>`. Print the words in alphabetical order.
- [ ] **Custom sort.** Store students in a `vector` and sort them by marks descending, then by name ascending, using a lambda comparator.
- [ ] **Unique elements.** Insert 20 random numbers into a `set<int>` and print them. Compare the count with and without duplicates.
- [ ] **Smart pointers.** Redo the dynamic array program with `unique_ptr<int[]>`. Then share an object between two `shared_ptr`s and print `use_count()`.

## Stage 6: Bridge to DSA

Build each of these yourself without the STL equivalent. They are the first data structures and algorithms you will study.

- [ ] **Your own vector.** Make a `MyVector` class with `push_back`, `pop_back`, `operator[]`, `size()`, a destructor and a copy constructor. Double the capacity when it fills.
- [ ] **Singly linked list.** Make a `LinkedList` with `insertAtHead`, `insertAtTail`, `deleteByValue`, `search`, `print` and a destructor that frees every node.
- [ ] **Reverse a linked list.** Add `reverse()` to your list using three pointers (prev, curr, next). Then write a recursive version.
- [ ] **Stack with an array.** Write `push`, `pop`, `peek`, with overflow and underflow checks, and no STL.
- [ ] **Queue with a circular array.** Write `enqueue`, `dequeue`, `front`, `isEmpty` and `isFull`. Use the modulo operator so the indices wrap around.
- [ ] **Balanced brackets.** Using your own stack, check whether a string such as `{[()]}` has matching brackets.
- [ ] **Binary search.** Write an iterative and a recursive version on a sorted array. Count how many steps each takes for 1,000,000 elements.
- [ ] **Selection and insertion sort.** Implement both. Print the number of comparisons and swaps for the same random array.
- [ ] **Timing experiment.** Use `<chrono>` to time recursive vs iterative Fibonacci (n = 40) and linear vs binary search on 1,000,000 elements. Write down in one line why the results differ.

## Capstone projects and readiness check

Pick any two projects to combine everything from Stages 1 to 6 into programs of 200 lines or more.

- [ ] **Library management system.** Classes for `Book`, `Member` and `Library`. Support add, issue, return and search books, with an exception when a book is unavailable.
- [ ] **Bank system with file storage.** Multiple accounts, deposits, withdrawals and transfers. Save accounts to a file and load them on start.
- [ ] **Student record manager.** Menu-driven add, edit, delete, search and sort by marks. Use inheritance for `UndergradStudent` and `GradStudent`, and a vector to hold the records.
- [ ] **Tic-tac-toe or hangman.** A two-player (or computer) game using a 2D array, functions for each step and input validation.

### Ready for DSA?

Tick these before you start.

- [ ] I can explain what a pointer is and draw what `int *p = &x;` looks like in memory.
- [ ] I can write a recursive function and trace its calls on paper.
- [ ] I can allocate and free memory with `new` and `delete` without leaks.
- [ ] I can write a class with a constructor, destructor and copy constructor.
- [ ] I can write a template class from scratch.
- [ ] I have built a linked list, a stack and a queue without the STL.
