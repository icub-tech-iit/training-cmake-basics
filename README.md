⚙️ The basics of CMake
======================

### 📖 Primer
For completing this course you need to have installed on your machine:
- [`CMake`](https://cmake.org/)
- Any c++ compiler
- A text editor(an IDE is recommended)

#### Windows(WSL)
:warning: **Disclaimer**: for licenses issues and in order to uniform the instructions respect to the linux procedure this hands-on can be done
on Windows using the [`Windows Subsystem for Linux`(WSL)](https://docs.microsoft.com/en-us/windows/wsl/install-win10).

Once it has been installed correctly simply follow the [instructions for linux](https://github.com/icub-tech-iit/training-cmake-basics/new/master?readme=1#linux).

It may be better to use a text editor to follow the hands on, then I suggest you to see [these instructions](https://github.com/robotology/robotology-superbuild#run-graphical-applications-on-wsl) to run graphical applications on WSL.
#### Linux
- Get the c++ compiler, open a terminal and type:
```bash
  $ sudo apt-get install build-essential
```
- Get `cmake`:
```bash
  $ sudo apt-get install cmake
```
- Get `cmake` gui(optional but highly recommended):
```bash
  $ sudo apt-get install cmake-curses-gui
```
- Get the text editor(optional but highly recommended):
```bash
  $ sudo apt-get install geany
```

Actually you can install the whatever text editor you like (e.g. `kate`, `gedit`, `nano`, `vim`, `atom`, `vs-code`). 

### :pencil: Assignment

The assignment will be similar to the hands-on, but with the difference that your executable will have to do the same thing
but using the library `myLib` defined in this repo.

For doing it you will have to follow these steps:

1. Open the `CMakeLists.txt` and `src/myLib/CMakeLists.txt` and fill all the TODO sections..
2. Once finished and saved create the build directory: `$ mkdir build`
3. Enter in the build directory: `$ cd build`
4. Configure and generate the makefiles: `$ cmake ..`
5. Compile your program: `$ make`
6. Run: `./myExecutable`

The output should be:
```bash
Executable example using the library!
The operators are: 15 and 10
The sum is: 25
The difference is: 5
```

if everything is fine you have to commit your work then:

```bash
$ git commit -am "My assignment works!"
$ git push origin assignment
```
At this point open a PR with base branch `master` and target `assignment`.
Put @Nicogene as reviewer and merge after my approval :wink:

ℹ This repository contains the material required for the training on basics of CMake.
