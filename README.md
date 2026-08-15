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
- [x] **05. Function Pointers & State Machines:** Storing memory addresses of functions, $O(1)$ dispatch tables, and eliminating branching overhead.
- [x] **06. Bare-Metal Linked Lists:** Dynamic node allocation, double pointers (`**`), LIFO stacks, and safe heap garbage collection.

### Embedded Hardware & RTOS
- [x] **07a. The Hardware Bridge (ISRs):** The `volatile` keyword, Interrupt Service Routines, and software debouncing on the ESP32.
- [x] **07b. Communication Protocols:** Hardware architectures for UART, I2C, and SPI.
- [x] **08. Concurrency & RTOS:** Task scheduling, Mutex memory locking, and Semaphores in FreeRTOS.
- [x] **09. Build Systems:** Makefiles and compiler automation for multi-file firmware projects.

---

## Repository Structure

The codebase is organized into modular, domain-specific directories:

```text
c-systems-mastery/
├── 01_basics/            # Standard I/O, stack bounds, and core logic utilities
├── 02_pointers/          # Raw memory addressing, strided math, and in-place algorithms
├── 03_memory_structs/    # Heap management, struct telemetry, and memory alignment
├── 04_bitwise_ops/       # Bit-level manipulation, masks, and hardware register simulations
├── 05_function_pointers/ # O(1) state machines, dispatch tables, and execution branching
├── 06_linked_lists/      # Dynamic node allocation, LIFO stacks, and memory cleanup
├── 07a_hardware_interrupts/ # ISRs, volatile memory protection, and physical debouncing
├── 07b_communication_protocols/ # UART, I2C scanner, and SPI hardware interaction
├── 08_freertos_concurrency/ # RTOS task scheduling, Mutex memory locks, and Semaphores
├── 09_makefiles/         # Compiler automation, include guards, and dependency trees
└── solutions/            # Finished Leetcode answers