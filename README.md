TOPIC

This folder contains my attempt to go through the book:

Computer Systems: A Programmer's Perspective
by Bryant & O'Hallaron

GOAL

The goal is to learn how computers work, get better at C programming, and learn some assembly.


GCC

A quick refresher on how to use GCC.

Running
$ gcc HelloWorld.c

complies the file HelloWorld.c into the executable a.out

Running
$ gcc -o HelloWorld HelloWorld.c

compiles HelloWorld.c into the executable HelloWorld

Adding some useful flags:
$ gcc -g -Wall -pedantic -o HelloWorld.out HelloWorld.c ../otherDir/otherSource.c
