# C++ vs Python Array Allocation

This repository compares the different types of array memory allocation strategies in **C++** and **Python**. The four main strategies are:

1. **Fixed Dynamic Arrays**
2. **Stack Dynamic Arrays**
3. **Fixed Heap Dynamic Arrays**
4. **Heap Dynamic Arrays**

### Key Differences between C++ and Python:

| **Type**              | **C++ Code**                      | **Python Code**                    | **Memory Area (C++)** | **Memory Area (Python)** | **Size Known at** | **Manual Memory Mgmt** |
|-----------------------|-----------------------------------|------------------------------------|------------------------|---------------------------|--------------------|--------------------------|
| **Fixed Dynamic**     | `int arr[5];`                     | `arr = [1, 2, 3, 4, 5]`            | Stack                  | Heap                      | Compile-time       | No                       |
| **Stack Dynamic**     | `int arr[n];` (GCC only)          | `arr = [i+1 for i in range(n)]`    | Stack                  | Heap                      | Run-time           | No                       |
| **Fixed Heap Dynamic**| `int* arr = new int[5];`          | `arr = [0]*5` then modified        | Heap                   | Heap                      | Compile-time       | Yes (C++) / No (Py)      |
| **Heap Dynamic**      | `int* arr = new int[n];`          | `arr = [i*2 for i in range(n)]`    | Heap                   | Heap                      | Run-time           | Yes (C++) / No (Py)      |

### **Explanations:**

#### **1. Fixed Dynamic Arrays**
- **C++**: Arrays with fixed sizes at compile-time, stored on the stack. 
- **Python**: Lists with fixed values, but dynamically allocated on the heap.

#### **2. Stack Dynamic Arrays**
- **C++**: Variable Length Arrays (VLAs) allow the array size to be determined at runtime. These are allocated on the stack.
- **Python**: Python lists are always allocated on the heap, with the size determined at runtime.

#### **3. Fixed Heap Dynamic Arrays**
- **C++**: Arrays are dynamically allocated on the heap using `new`, with fixed sizes.
- **Python**: Python lists are dynamically allocated on the heap, and their size can change.

#### **4. Heap Dynamic Arrays**
- **C++**: Arrays whose size is determined at runtime, allocated on the heap using `new`.
- **Python**: Python lists that are always dynamically allocated on the heap.

### **Key Differences:**
- **Memory Area**: 
  - **C++**: Stack memory is faster but limited; heap memory is larger but requires manual management.
  - **Python**: Lists are always allocated on the heap, with automatic memory management.
  
- **Size Determination**: 
  - **C++**: Fixed at compile-time or runtime.
  - **Python**: Always at runtime.
  
- **Memory Management**: 
  - **C++**: Requires manual memory management (e.g., `delete[]`).
  - **Python**: Managed automatically by Python's garbage collector.

---

### Usage:
- The code examples for each array allocation strategy are available in the repository as C++ and Python scripts.
- The repository helps demonstrate the comparison between stack and heap memory allocation in both languages.

"""

# Save the README content to a file
readme_path = "/mnt/data/README.md"
with open(readme_path, "w") as f:
    f.write(readme_content)
