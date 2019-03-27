# Build+Link Exercise #

This repository is for that who just started working on software development and
don't have knowledge about build systems. Build systems are just tools, and one
shouldn't get lost learning how to deal with it, it is what it is, a tool. And
one just need to learn how to use it.

## What is the exercise about? ##

You have one very very simple main program, that invoke 2 methods from one
library **my_library.hpp**. You should build the main program, the library
object and link all together for a desktop target.

There is an [example](./result/x86_64/example_output) x68_64 binary in order to
try it before you start working.

## Dir structure ##

I tried to make the directories similar as they are in the real world and in
real projects:

**Source Files** This is usually the place where you put your source code:

* [src](./src)
  * [subtract.cpp](./src/subtract.cpp)
  * [sum.cpp](./src/sum.cpp)
  * [main.cpp](./src/main.cpp)

**Include** This is usually where the API of your application/library is.

* [include](./include)
  * [my_library.hpp](./include/my_library.hpp)

**Results Artifacts** Here you should put the output binaries and the output
libraries.

* [result](./result)
  * [x86_64](./result/x86_64)
    * [lib](./result/x86_64/lib)
    * [binary_example](./result/x86_64/example_output)
