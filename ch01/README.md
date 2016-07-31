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
略

### Ex1.7

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>cl /EHsc ex1.07.cpp
用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.00.23506 版
版权所有(C) Microsoft Corporation。保留所有权利。

ex1.07.cpp
ex1.07.cpp: warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
ex1.07.cpp(2): error C3872: “0xe69c”: 此字符不允许在标识符中使用
ex1.07.cpp(3): error C2143: 语法错误: 缺少“;”(在“*”的前面)
ex1.07.cpp(3): error C4430: 缺少类型说明符 - 假定为 int。注意: C++ 不支持默认 int
ex1.07.cpp(3): error C3872: “0xe0a5”: 此字符不允许在标识符中使用
ex1.07.cpp(3): error C3872: “0xe17b”: 此字符不允许在标识符中使用
ex1.07.cpp(3): error C2059: 语法错误:“user-defined string literal”
ex1.07.cpp(4): error C3872: “0x25bc”: 此字符不允许在标识符中使用
ex1.07.cpp(4): error C3872: “0xe629”: 此字符不允许在标识符中使用
ex1.07.cpp(5): warning C4138: 在注释外找到“*/”
ex1.07.cpp(8): error C2143: 语法错误: 缺少“;”(在“{”的前面)
ex1.07.cpp(8): error C2447: “{”: 缺少函数标题(是否是老式的形式表?)
```

### Ex1.8
略

### Ex1.9

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.09.exe
Sum of 50 to 100 inclusive is 3825
```

### Ex1.10

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.10.exe
10
9
8
7
6
5
4
3
2
1
0
```

### Ex1.11

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.11.exe
1
10
1 2 3 4 5 6 7 8 9 10
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.11.exe
10
1
10 9 8 7 6 5 4 3 2 1
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.11.exe
5
5
5
```

### Ex1.12

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.12.exe
0
```

### Ex1.13
1.

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.13_1.exe
3825
```
2.

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.13_2.exe
10
9
8
7
6
5
4
3
2
1
0
```

3.

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.13_3.exe
1
10
1 2 3 4 5 6 7 8 9 10
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.13_3.exe
10
1
10 9 8 7 6 5 4 3 2 1
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.13_3.exe
5
5
5
```


### Ex1.14
略

### Ex1.15
略

### Ex1.16

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.16.exe
1
3
5
7
^Z
Sum is:16

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.16.exe
1
3
a
Sum is:4
```

### Ex1.17/1.18

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.17.exe
42
42
42
42
42
^Z
42 occurs 5 times

C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.17.exe
42
43
42 occurs 1 times
44
43 occurs 1 times
45
44 occurs 1 times
46
45 occurs 1 times
^Z
46 occurs 1 times
```

### Ex1.19
See Ex1.10  

### Ex1.20

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.20.exe <add_item
0-201-78345-X 3 60 20
```

### Ex1.21

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.21.exe <add_item
0-201-78345-X 5 110 22
```

### Ex1.22

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.22.exe <add_item
0-201-78345-X 10 253 25.3
```

### Ex1.23/1.24

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.22.exe <book_sales
0-201-70353-X occurs 1 times
0-201-82470-1 occurs 1 times
0-201-88954-4 occurs 4 times
0-399-82477-1 occurs 2 times
0-201-78345-X occurs 2 times
```

### Ex1.25

```
C:\Users\Binzh\Documents\GitHub\Cpp-primer-excises\ch01>ex1.25.exe <book_sales
0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 16 198 12.375
0-399-82477-1 5 226.95 45.39
0-201-78345-X 5 110 22
```
