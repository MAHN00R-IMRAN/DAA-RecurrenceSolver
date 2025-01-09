
# RECCURRENCE SOLVER
The provided C++ code calculates and reports the **time complexity** of recurrence relations based on user input. Here's a detailed breakdown of its functionality:

## **Features of the Code**

### 1. **Master Theorem Evaluation** (`master_theorem`)
- **Purpose**: Determines the time complexity of divide-and-conquer recurrence relations using the **Master Theorem** or **Extended Master Theorem**.
- **Inputs**: 
  - \( a \): The number of sub-problems.
  - \( b \): The factor by which the problem size is divided.
  - \( k, p \): Exponents for \( n^k \) or \( \log^p(n) \) in the function \( f(n) \).
  - User selects a function form for \( f(n) \): 
    - \( O(1) \) constant.
    - \( n^k \), polynomial.
    - \( \log^p(n) \), logarithmic.
    - \( n^k \log^p(n) \), combined.
    - \( 2^n \), exponential.

- **Functionality**:
  - It calculates \( b^k \) and compares \( a \) with \( b^k \):
    - **Case 1**: If \( a > b^k \), \( T(n) = O(n^{\log_b(a)}) \).
    - **Case 2**: If \( a = b^k \), complexity depends on the behavior of \( f(n) \) (logarithmic factors).
    - **Case 3**: If \( a < b^k \), complexity is dominated by \( f(n) \).
  - Outputs the corresponding time complexity and efficiency class (e.g., linear, quadratic, logarithmic, exponential).

---

### 2. **Decreasing Function Evaluation** (`decreasing_function`)
- **Purpose**: Calculates the complexity of problems where the input size decreases exponentially.
- **Inputs**:
  - Base \( a \): Rate of size reduction.
  - Factor \( b \): Decrease factor.
  - Function \( f(n) \): User can choose:
    - \( O(1) \), constant.
    - \( O(n^k) \), polynomial.
    - \( O(\log(n)) \), logarithmic.

- **Functionality**:
  - For \( a = 1 \), \( T(n) = O(f(n) \cdot n) \).
  - For \( a > 1 \), \( T(n) = O(f(n) \cdot a^{n/b}) \), exponential.
  - Outputs the time complexity and efficiency class.

---

### 3. **Main Function**
- **Purpose**: Acts as the driver program to select the type of recurrence relation evaluation.
- **Inputs**:
  - User chooses between:
    1. Master Theorem for divide-and-conquer recurrences.
    2. Decreasing function for exponential reductions.
- **Features**:
  - Accepts \( a, b \) values for two recurrence relations to compare **deepest** and **shallowest** levels of recursion.
  - Automatically calls the appropriate evaluation function (`master_theorem` or `decreasing_function`).
  - Repeats until the user decides to stop.

---

## **Sample Input and Outputs**

### Example 1: Master Theorem
- Input:
  ```
  1. Master Theorem
  a = 2, b = 2
  Select function for f(n): 2 (n^k)
  k = 2
  ```
- Output:
  ```
  TIME COMPLEXITY
  -----METHOD: MASTER-----
  CASE 1:
  O(n^1.0)
  Efficiency class: linear
  ```

---

### Example 2: Decreasing Function
- Input:
  ```
  2. Muster Theorem
  a = 3, b = 2
  Select function for f(n): 1 (constant)
  Enter value: 10
  ```
- Output:
  ```
  CASE 2:
  O(10 * 3^(n/2))
  Efficiency class: exponential
  ```

---

## **Utility**
This program is useful for:
- **CS students and researchers** analyzing recurrence relations in algorithms.
- **Algorithm complexity analysis**, particularly for divide-and-conquer algorithms (Master Theorem) and exponentially decreasing problems. 

It provides **educational insight** into how input size reduction and function forms impact time complexity and algorithm efficiency.
