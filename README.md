## Build+Link Exercise

This repository is for that who just started working on software development
and don't have knowledge about build systems.
Build systems are just tools, and one shouldn't get lost learning how to deal
with it, it is what it is, a tool. And one just need to learn how to use it.

## In what consist the exercise?

You have one very very simple main program, that invoke 2 methods of one library
**my_library.hpp**. You should build the main program, the library object and
link all together for a desktop target and for a embedded platform

I leaved the x68_64 binary in order to try it before you start working.

## Dir structure
I tried to make the directories similar as they are in the real world in real
projects:

* [src](./src)
  * [substract.cpp](./src/substract.cpp)
  * [sum.cpp](./src/sum.cpp)
  * [main.cpp](./src/main.cpp)
* [include](./include)
  * [my_library.hpp](./include/my_library.hpp)
* [result](./result)
  * [x86_64](./result/x86_64)
    * [main](./result/x86_64/main)
    * [lib](./result/x86_64/lib)
    * [libmylib.a](./result/x86_64/lib/libmylib.a)
  * [arm-eLinux](./result/arm-eLinux)
  * [lib](./result/arm-eLinux/lib)
* [build](./build)
  * [arm-eLinux](./build/arm-eLinux)
    * [src](./build/arm-eLinux/src)
  * [x86_64](./build/x86_64)
  * [src](./build/x86_64/src)
* [README.md](./README.md)

## Comments?
You liked the exercise? You want to provide feedback? just ask on the GitHub page!
PR are welcome!