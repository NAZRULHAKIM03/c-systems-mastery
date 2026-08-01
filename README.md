# Bare-Metal C & Systems Engineering Portfolio

A structured low-level programming portfolio designed to master systems engineering concepts from the ground up—written in standard C99/C11 without IDE auto-completion, high-level abstractions or framework magic.

This repository serves as both an active engineering log and a technical reference for memory management, hardware-level operations and algorithm optimization.

---

## Engineering Roadmap & Progress

### Core Systems Architecture
- [x] **01. C Fundamentals & Standard I/O:** Stack arrays, CLI tools, buffer management, and algorithmic complexity ($O(1)$ math vs. loops).
- [x] **02. Pointer Arithmetic & Memory Addressing:** Address dereferencing, type scaling, two-pointer algorithms, and defensive guard clauses.
- [x] **03. Dynamic Memory & Struct Layouts:** Heap allocation (`malloc`/`free`), safe runtime resizing (`realloc`), arrow operator traversal, and hardware memory alignment (padding).
- [x] **04. Bitwise Operations & Hardware Registers:** Bit masking, shifting (`<<`, `>>`), register flags, endianness, and XOR manipulation.
- [ ] **05. Low-Level Data Structures:** Custom linked lists, circular ring buffers, and queues built using raw heap memory.

### Algorithmic Challenges
- [ ] **LeetCode / Logic Problems:** In-place array manipulations, two-pointer optimizations and memory-constrained problem solving.

---

## Repository Structure

The codebase is organized into modular, domain-specific directories:

```text
c-systems-mastery/
├── 01_basics/            # Standard I/O, stack bounds, and core logic utilities
├── 02_pointers/          # Raw memory addressing, strided math, and in-place algorithms
├── 03_memory_structs/    # Heap management, struct telemetry, and memory alignment
├── 04_bitwise_ops/       # Bit-level manipulation, masks, and hardware register simulations
├── 05_data_structures/   # Bare-metal implementations of lists, buffers, and trees
└── leetcode_c/           # Memory-efficient solutions to algorithmic coding screens
