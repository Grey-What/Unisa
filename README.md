# Unisa
This repository contains all topics, notes, examples, and exercises covered in my C++ programming module at the University of South Africa (UNISA). It is intended as a comprehensive and structured learning archive, documenting my progress and understanding of C++ fundamentals and beyond.

Many of the Practise exercises will come from Walter Savitch. Problem Solving with C++, 10th edition. Pearson International Edition: Addison Wesley, 2018.

Absolutely! Here's a **README.md segment** explaining how to compile the C++ source code using `g++` from **MinGW**, especially useful for Windows users who clone your repo:

---
### Compilation Instructions (Using MinGW `g++`)

To compile and run the C++ source files in this repository, ensure you have the following setup:

#### ✅ Requirements
* **C++ compiler**: `g++` (part of [MinGW](https://www.mingw-w64.org/))
* (Optional) **VS Code** with C++ extension
* Terminal: Git Bash or Command Prompt

#### Windows Setup with MinGW
If you haven't installed MinGW yet:

1. Download **MinGW-w64** from the official website.
2. During setup:

   * Architecture: `x86_64`
   * Threads: `posix`
   * Exception: `seh`
3. Add the `bin` folder (e.g., `C:\MinGW\bin`) to your **system PATH**.

Verify installation:

```bash
g++ --version
```

#### Compiling the Code
From your terminal (Git Bash or Command Prompt), navigate to the folder with the `.cpp` file:

```bash
cd path/to/your/project
g++ -o programName sourceFile.cpp
```

Example:

```bash
g++ -o main main.cpp
```

This will create an executable named `main.exe`.

#### Running the Executable
* In **Git Bash**:

  ```bash
  ./main.exe
  ```
  
* In **Command Prompt (cmd)**:

  ```cmd
  main.exe
  ```
---

