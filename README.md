# Simple Shell
## Overview
- A shell is a command line interface(CLI) that allows users to interact with an Operating System(OS) by entering commands. It takes user input, interprets it, and executes the corresponding system calls to perform tasks like running programs, managing files, etc.

## Features

## Motivation

Building a shell is a valuable learning experience. To gain a deeper understanding of the inner workings of how the shell operates including process management, I/O handling, and interaction with the kernel (Core part of the OS).

## Compilation
```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh 
```

## Usage

Interactive mode: ```./hsh```

Non-interactive mode: ```echo "/bin/ls" | ./hsh```

### Examples

* **Run shell in interactive mode:**

```shell
 $ ./hsh
 #cisfun$ ls -l
```
```shell
 $ ./hsh
 #cisfun$ pwd
 /home/{username}/{dir}/simple_shell
```
```shell
 $ /hsh
 #cisfun$ echo “Hello, World!”
 “Hello, World!”
```
* **Run shell in non-interactive mode:**

```shell
 $ echo "/bin/ls" | ./hsh
 exec.c interactive.c hsh read_line.c non_interactive.c shell.c  read_stream.c  tokenize.c
 process.c shell.h
```
```shell
 $ echo "pwd" | ./hsh
 /home/{username}/{dir}/simple_shell
```


## Reference

## Contributors

This project was jointly created by [@SherneVK](https://github.com/SherneVK) and [@droffilc1](https://www.github.com/droffilc1)
