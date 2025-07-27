# nomishell

A simple, minimal shell written in C.

## Overview

`nomishell` is a lightweight custom shell implemented in C. It supports basic command parsing, execution of external programs, and simple built-in commands. The project serves as a foundation for a security-focused shell environment and can be extended with cybersecurity tools and features.

## Features

- Basic command execution (external binaries and built-ins)  
- Command parsing with arguments  
- Simple prompt and input loop  
- Modular structure for easy extension  

## Getting Started

### Prerequisites

- Linux environment  
- GCC (or compatible C compiler)  
- `make`  

### Installation

```bash
git clone https://github.com/nomiskraw/nomishell.git
```
```bash
cd nomishell
make
./nomishell
```

## Usage
```bash
nomishell> ls -la
nomishell> echo "Hello, world!"
nomishell> pwd
nomishell> exit
```

## Future Work

Planned enhancements include:

- Integration of cybersecurity tools (e.g., static analyzers, vulnerability scanners)
- Extended built-ins for secure file handling and permission checks
- Advanced parsing (quoting, piping, redirection)
- Sandbox mode for command isolation
- Audit logging and monitoring features

Enjoy exploring nomishell!

