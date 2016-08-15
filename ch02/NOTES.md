# Ch02 NOTES

## 2.1. Primitive Built-in Types
1.  A char is the **same** size as **a single machine byte**.
2.  The language guarantees that an int will be at least as large as short, a long at least as large as an int, and long long at least as large as long.
3.  There are three distinct basic character types: **char,
                                           signed char, and unsigned char**. In particular, char is not the same type as signed char.

## 2.2. Variables
1.  **Initialization and assignment** are **different** operations in C++.
2.  **List Initialization**  
```c
long double ld = 3.1415926536;
int a{ld}, b = {ld}; // error: narrowing conversion required
int c(ld), d = ld;  // ok: but value will be truncated
```
1.  **Default Initialization**  
- Variables defined **outside** any function body are initialized to zero.  
- Variables of **built-in** type defined inside a function are **uninitialized**. The value of an uninitialized variable of built-in type is undefined. It is an error to copy or otherwise try to access the value of a variable whose value is undefined.
1.  **Variable Declarations and Definitions**  
- To allow programs to be written in logical parts, C++ supports what is commonly
   known as *separate compilation*.   
- To support separate compilation, C++ distinguishes between *declarations and definitions*. A **declaration** makes a name known to the program. A file that wants to use a name defined elsewhere includes a declaration for that name. A **definition** creates the associated entity.  
- Variables must be **defined exactly once** but can be **declared many times**.

## 2.3. Compound Types
1.  A *compound type* is a type that is defined in terms of another type. C++ has several compound types, two of which—**references** and **pointers**.
2.  **Reference**  
- A reference defines an alternative name for an object.  
- A Reference Is an **Alias**.   
- Because there is no way to rebind a reference, **references must be initialized**.
- A reference is **not an object**. Instead, a reference is just **another name for an already existing object**.
- The type of a reference and the object to which the reference refers must **match exactly**.

```c
 int &refVal4 = 10;  // error: initializer must be an object
double dval = 3.14;
int &refVal5 = dval; // error: initializer must be an int object
```
1.  **Pointers**
-    A pointer is a compound type that “points to” another type.
-    Like references, pointers are used for **indirect access to other objects**.
-    Unlike a reference, a pointer is an object in its own right. Pointers can be **assigned** and **copied**; a single pointer can point to several **different** objects over its lifetime.
-    Unlike a reference, a pointer **need not be initialized** at the time it is defined. Like other built-in types, pointers defined at block scope have undefined value if they are not initialized.
-    A pointer holds the address of another object. We get the address of an object by using **the address-of operator (the & operator)**:
-    Pointer Value  
                                                                                                                           The value (i.e., the address) stored in a pointer can be in one of four states:
     1. It can point to an object.
     2. It can point to the location just immediately past the end of an object.
     3. It can be a null pointer, indicating that it is not bound to any object.
     4. It can be invalid; values other than the preceding three are invalid.
-    When a pointer points to an object, we can use **the dereference operator (the * operator)** to access that object. We may dereference only a **valid** pointer that points to an object.
-    A null pointer does not point to any object.
-    The most direct approach is to initialize the pointer using the literal **nullptr**, which was introduced by the new standard. **nullptr** is a literal that has a special type that can be converted to any other pointer type. Alternatively, we can initialize a pointer to the literal 0.
-    Both pointers and references give indirect access to other objects. The most important is that a reference is **not an object**. Once we have defined a reference, there is **no way** to make that reference refer to a different object. When we use a reference, we always get the object to which the reference was initially bound.
-    void\* Pointers  
                                                                                                                           The type void\* is a special pointer type that can hold the address of any object.   
                                                                                                                           There are only a limited number of things we can do with a void\*  pointer: We can **compare** it to another pointer, we can **pass** it to or **return** it from a function, and we can **assign** it to another void\*  pointer. We cannot use a void\*  to operate on the object it addresses—we don’t know that object’s type, and the type determines what operations we can perform on the object.
1.  **Understanding Compound Type Declarations**  
- A variable definition consists of **a base type** and **a list of declarators**. Each declarator can relate its variable to the base type differently from the other declarators in the same definition.   
```c
 // i is an int; p is a pointer to int; r is a reference to int
 int i = 1024, *p = &i, &r = i;
```
- Pointers to Pointers  
```c
int ival = 1024;
int *pi = &ival;  // pi points to an int
int **ppi = &pi;  // ppi points to a pointer to an int
```
- References to Pointers  
    A reference is not an object. Hence, we may not have a pointer to a reference. However, because a pointer is an object, we can **define a reference to a pointer**.
```c
int i = 42;
int *p;  // p is a pointer to int
int *&r = p;  // r is a reference to the pointer p
r = &i; //  r refers to a pointer; assigning &i to r makes p point to i
*r = 0; // dereferencing r yields i, the object to which p points; changes i
to 0
```
 The easiest way to understand the type of r is to **read the definition right to left**. The symbol closest to the name of the variable is the one that has the most immediate effect on the variable’s type. Thus, we know that r is a reference. The rest of the declarator determines the type to which r refers. The next symbol, * in this case, says that the type r refers to is a pointer type. Finally, the base type of the declaration says that r is a reference to a pointer to an int.

## 2.4. `const` Qualifier
-  Because we can’t change the value of a `const` object after we create it, it **must be initialized**. 

-  `const` variables are defined as **local** to the file. When we define a `const` with the same name in multiple files, it is as if we had written definitions for separate variables in each file.

-  To define a single instance of a `const` variable, we use the keyword extern on both its definition and declaration(s):  
-  To share a const object among multiple files, you must define the variable as extern.
   ```c
         // file_1.cc defines and initializes a const that is accessible to other files
         extern const int bufSize = fcn();
         // file_1.h
         extern const int bufSize; // same bufSize as defined in file_1.cc
   ```
1.  **References to const**
    - To bind a reference to an object of a const type, we use a reference to const, which is a reference that refers to a const type.
      ```c
      const int ci = 1024;
      const int &r1 = ci;  // ok: both reference and underlying object are const
      r1 = 42;  // error: r1 is a reference to const
      int &r2 = ci;  // error: non const reference to a const object
      ```
    - `const` Reference is a Reference to `const`
    - **Initialization and References to `const`**
        We noted that there are two exceptions to the rule that the type of a reference must match the type of the object to which it refers. The first exception is that we can initialize a reference to `const` from any expression that can be converted to the type of the reference. In particular, we can bind a reference to `const` to a nonconst object, a literal, or a more general expression:
      ```c
      int i = 42;
      const int &r1 = i;  // we can bind a const int& to a plain int object
      const int &r2 = 42;  // ok: r1 is a reference to const
      const int &r3 = r1 * 2; // ok: r3 is a reference to const
      int &r4 = r * 2;  // error: r4 is a plain, non const reference
      ```
    - **A Reference to `const` May Refer to an Object That Is Not `const`**
      ```c
      int i = 42;
      int &r1 = i;  // r1 bound to i
      const int &r2 = i;  // r2 also bound to i; but cannot be used to change i
      r1 = 0;  // r1 is not const; i is now 0
      r2 = 0;  // error: r2 is a reference to const
      ```
2.  Pointers and `const`
    - A pointer to `const` may not be used to change the object to which the pointer points. We may store the address of a `const` object only in a pointer to `const`.
    - We noted that there are two exceptions to the rule that the types
      of a pointer and the object to which it points must match. The first exception is that we can use a pointer to `const` to point to a nonconst object.
    - Like a reference to `const`, a pointer to `const` says nothing about whether the object to which the pointer points is `const`. Defining a pointer as a pointer to `const` affects only what we can do with the pointer. It is important to remember that there is no guarantee that an object pointed to by a pointer to `const` won’t change. **It may be helpful to think of pointers and references to `const` as pointers or references “that think they point or refer to `const`.”**
    - **`const` Pointers**
      - Unlike references, **pointers are objects**. Hence, as with any other object type, **we can have a pointer that is itself `const`**. Like any other `const` object, **a `const` pointer must be initialized**, and once initialized, its value (i.e., the address that it holds) may not be changed. 
      - The fact that **a pointer is itself `const` says nothing about whether we can use the pointer to change the underlying object**. Whether we can change that object **depends entirely on the type to which the pointer points**.
3.  Top-Level `const`


