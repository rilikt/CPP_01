# 🧠 C++ Module 01 – Memory, References, and Brain-Eating Zombies

This module builds on the basics of C++ by introducing concepts like dynamic memory allocation, references, and pointers to members. It was a great way to explore how C++ manages data and memory more flexibly than C, all while continuing the zombie-themed exercises from Module 00.

---

## 🧪 Exercises Overview

### 🧟 ex00 – BraiiiiiiinnnzzzZ

- Create a `Zombie` class.
- Allocate zombies on stack and heap using:
  - `Zombie* newZombie(std::string name);`
  - `void randomChump(std::string name);`
- Understand lifetime and destruction of objects.

---

### 🧟 ex01 – Moar brainz!

- Implement `Zombie* zombieHorde(int N, std::string name);`
- Learn about arrays of objects and dynamic allocation.
- Call `announce()` on each zombie and clean up memory.

---

### 🧠 ex02 – HI THIS IS BRAIN

- Use a `std::string` variable.
- Create a pointer and a reference to it.
- Print both memory addresses and values to compare.

---

### ⚔️ ex03 – Unnecessary violence

- Implement a `Weapon` class and two humans: `HumanA` (has weapon by reference) and `HumanB` (can receive weapon later via pointer).
- Learn when to use references vs pointers for class members.

---

### 🔁 ex04 – Sed is for losers

- Build a program that:
  - Takes a filename and two strings.
  - Replaces all occurrences of one string with another.
  - Writes the result to `<filename>.replace`.

---

### 📣 ex05 – Harl 2.0

- Implement a `Harl` class with logging methods for different levels: `debug`, `info`, `warning`, `error`.
- Use **pointers to member functions** instead of `if/else` chains.

---

### 🔇 ex06 – Harl filter

- Extend Harl to filter messages based on severity level.
- Use `switch` statements to select which logs to display and above.

---

## 🛠️ Build Instructions

```bash
make
```

Each exercise is inside its own `ex0X/` folder and has its own `Makefile`.

---
