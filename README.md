# Build+Link Exercise

This repository is for those who just started working on software development
and don't have any knowledge about build systems. Build systems are just tools,
and one shouldn't get lost learning how to deal with it, it is what it is, a
tool. And one just need to learn how to use it.

## What is the exercise about

You have one very **very** simple main program, that invoke 2 methods from one
library **ipb_arithmetic.hpp**. You need to build the main program, the library
objects and link all together for a desktop target.

There is an [example](./results/bin/example_output) x68_64 binary in order to
try it before you start working.

## Dir structure

I tried to make the directories similar as they are in the real world and in
real projects:

**Source Files** This is usually the place where you put your source code:

- [src](./src)
  - [subtract.cpp](./src/subtract.cpp)
  - [sum.cpp](./src/sum.cpp)
  - [main.cpp](./src/main.cpp)

**Include** This is usually where the API of your application/library is.

- [include](./include)
  - [ipb_arithmetic.hpp](./include/ipb_arithmetic.hpp)

**Results Artifacts** Here you should put the output binaries and the output
libraries.

- [results](./results)
  - [lib](./results//lib)
  - [bin](./results/bin)
    - [binary_example](./results/bin/example_output)

## Exercise 1

In this exercise you should suffer a little bit. Build the library and the main
program in a really **old fashion** way.

For this you will need to do the following tasks:

- Create an empty directory in your source tree, let's call it `./build`
- Compile the two objects needed for building the library **ipb_arithmetic**:

From the clang manual **`man clang`**

```sh
When you invoke clang, it normally does preprocessing, compilation, assembly and
linking. The overall options allow you to stop this process at an intermediate
stage. For example, the -c option says not to run the linker. Then the output
consists of object files output by the assembler.
```

- This means that you will need to use the `-c` flag to compile objects without
  the need of the linker
- You will also need to specify the compiler where to look for header files, use
  the `-I./include/` option for this purpose.
- To pick a proper name for this artifact, use the `-o` option

So far your first build command should look something like:

```sh
c++ -c -Idir/ src/_file_.cpp -o build/name.o
```

- Once you have the two objects built for the library your `build` directory
  should look something like:

```sh
build
├── subtract.o
└── sum.o
```

- Now it's time to make an archive of this two objects and create your first
  library:

```sh
# always start the name of your library with 'lib'
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
```

- Now you can build your main program, for this, you will need to build this
  program with the library you have just created. You can see an animated
  example of how to achieve this: [Link C++
  library](http://lmgtfy.com/?q=link+c%2B%2B+library)

- After your build is ready, you must places the binaries that came from the
  build process in the `results/` directory.

## Exercise 2

Building everything manually is tough right? That's why humans have created
something that we call build-systems. `CMake` is pretty popular nowadays and
it's the defacto build system generator for `C++` projects.

Complete the **Exercise 1** but use CMake this time, remember google is your
friend in these cases.
