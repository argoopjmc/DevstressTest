# DevstressTest

This is a simple script written in C++ to simulate the everday useage of a pc by developer, this script can be used to stress test any new pc you buy for developing purposes.

executable found in this git is compiled for linux using g++ compiler and std set to c++11.

problems:
    >> thread is only available on linux based system g++ libraries therefore, include thread.h in other OS and update the         stressTest.cpp to use locally provided thread.h file
