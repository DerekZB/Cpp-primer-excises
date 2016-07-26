# C++ Primer
## Ch01
### Ex1.1
#### 1. cl  

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>cl /EHsc ex1.01.cpp
用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.00.23506 版
版权所有(C) Microsoft Corporation。保留所有权利。

ex1.01.cpp
Microsoft (R) Incremental Linker Version 14.00.23506.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:ex1.01.exe
ex1.01.obj

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.01.exe

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>echo %ERRORLEVEL%
0
```

#### 2. GCC  

```
Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ g++ -o ex1.01.gcc ex1.01.cpp

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ ./ex1.01.gcc

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ echo $?
0
```

#### 3. clang  

```
Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ clang++ -c ex1.01.cpp

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ clang++ ex1.01.o -o ex1.01.clang

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ ./ex1.01.clang

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ echo $?
0
```

### Ex1.2
#### 1. cl  

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>cl /EHsc ex1.02.cpp
用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.00.23506 版
版权所有(C) Microsoft Corporation。保留所有权利。

ex1.02.cpp
Microsoft (R) Incremental Linker Version 14.00.23506.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:ex1.02.exe
ex1.02.obj

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.02.exe

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>echo %ERRORLEVEL%
-1
```

#### 2. GCC  

```
Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ g++ -o ex1.01.gcc ex1.02.cpp

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ ./ex1.02.gcc

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ echo $?
255
```

#### 3. clang  

```
Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ clang++ -c ex1.02.cpp

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ clang++ ex1.02.o -o ex1.02.clang

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ ./ex1.02.clang

Binzh@CUPD-ZHANGBIN ~/GitHub/Cpp-primer-excises/ch01
$ echo $?
255
```

### Ex1.3
cl  

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>cl /EHsc ex1.03.cpp
用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.00.23506 版
版权所有(C) Microsoft Corporation。保留所有权利。

ex1.03.cpp
Microsoft (R) Incremental Linker Version 14.00.23506.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:ex1.03.exe
ex1.03.obj

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.03.exe
Hello, World!


C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>echo %ERRORLEVEL%
0
```

### Ex1.4

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.04.exe
Enter two numbers:
6
7
The product of 6 and 7 is 42
```

### Ex1.5

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.05.exe
Enter two numbers:
6
7
The product of 6 and 7 is 42
```

### Ex1.6
