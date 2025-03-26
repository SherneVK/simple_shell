# Simple Shell

## Overview

- A shell is a command line interface(CLI) that allows users to interact with an Operating System(OS) by entering commands. It takes user input, interprets it, and executes the corresponding system calls to perform tasks like running programs, managing files, etc.

## Features

- Execute commands from the user.

- Support for both **interactive** and **non-interactive** modes.

- Handle built-in commands like `cd`, `env`, and `exit`.

- Process management using `fork()`, `execvp()`, and `waitpid()`.

- Tokenization and command parsing.

## Motivation

Building a shell is a valuable learning experience. To gain a deeper understanding of the inner workings of how the shell operates including process management, I/O handling, and interaction with the kernel (Core part of the OS).

## Compilation

To compile the shell, use **Makefile**:

```shell
make
```

This will generate the **executable file** inside the `build/` directory.

## Usage

Interactive mode: ```./build/hsh```

Non-interactive mode: ```echo "/bin/ls" | ./build/hsh```

### Examples

- **Run shell in interactive mode:**

```shell
 $ ./build/hsh
 #cisfun$ ls -l
```

```shell
 $ ./build/hsh
 #cisfun$ pwd
 /home/{username}/{dir}/simple_shell
```

```shell
 $ ./build/hsh
 #cisfun$ echo “Hello, World!”
 “Hello, World!”
```

- **Run shell in non-interactive mode:**

```shell
 $ echo "/bin/ls" | ./build/hsh
 exec.c interactive.c hsh read_line.c non_interactive.c shell.c  read_stream.c  tokenize.c
 process.c shell.h
```

```shell
 $ echo "pwd" | ./build/hsh
 /home/{username}/{dir}/simple_shell
```

## Reference

- [Linux Shell Scripting Guide](https://tldp.org/LDP/abs/html/)

- `man 3 execvp`

- `man 2 fork`

- `man 2 waitpid`

- `man 3 getenv`

## Contributors

This project was jointly created by [@SherneVK](https://github.com/SherneVK) and [@droffilc1](https://www.github.com/droffilc1)
