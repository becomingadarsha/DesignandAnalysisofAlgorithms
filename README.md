## Course Title : Design and Analysis of Algorithms :computer:

---
__Before we Start__
 The programs in this repo generates the running time of algorithm and it might vary from machine to machine as it depends on multiple factors : 
:zap: Single vs Multi Processor
:zap: Read/Write Speed to Memory
:zap: 32 bit vs 64 bit
:zap: Input

___:hammer: But for Time Complexity Analysis we only bother about Input. 
:hammer: How the time is taken by program grows with the growth of inputs ?___

To do so, we first define the hypothetical model machine with given characteristics : 
:arrow_right: Single Processor
:arrow_right: 32 bit
:arrow_right: Sequential Execution
:arrow_right: 1 unit for time for Arithmetic and Logical Operations
:arrow_right: 1 unit for time for Assignments and return

___:exclamation: All other costs are negligible and we don't account for it.___


---

```
Full Marks: 60 + 20 + 20
Course No: CSC314
Pass Marks: 24 + 8 + 8
Nature of the Course: Theory + Lab 
Credit Hrs: 3
Semester: V
Tribuvan University
```

**_Course Description : This course introduces basic elements of the design and analysis of computer algorithms. Topics include asymptotic notations and analysis, divide and conquer strategy, greedy methods,dynamic programming, basic graph algorithms NP-completeness, and approximation algorithms. For each topic, beside in-depth coverage, one or more representative problems and their algorithms shall be discussed._**

---

**Course Objectives:
:cyclone: Analyze the asymptotic performance of algorithms.
:cyclone: Demonstrate a familiarity with major algorithm design techniques
:cyclone: Apply important algorithmic design paradigms and methods of analysis.
:cyclone: Solve simple to moderately difficult algorithmic problems arising in applications.
:cyclone: Able to demonstrate the hardness of simple NP-complete problems**

---

**Course Contents:**

**Unit 1: Foundation of Algorithm Analysis (4)**
1.1. Algorithm and its properties, RAM model, Time and Space Complexity, detailed analysis
of algorithms (Like factorial algorithm), Concept of Aggregate Analysis
1.2. Asymptotic Notations: Big-O, Big-Ω and Big-Ө Notations their Geometrical Interpretation
and Examples.
1.3. Recurrences: Recursive Algorithms and Recurrence Relations, Solving Recurrences
(Recursion Tree Method, Substitution Method, Application of Masters Theorem)

**Unit 2: Iterative Algorithms (4)**
2.1. Basic Algorithms: Algorithm for GCD, Fibonacci Number and analysis of their time and
space complexity
2.2. Searching Algorithms: Sequential Search and its analysis
2.3. Sorting Algorithms: Bubble, Selection, and Insertion Sort and their Analysis

**Unit 3: Divide and Conquer Algorithms (8)**
3.1. Searching Algorithms: Binary Search, Min-Max Finding and their Analysis
3.2. Sorting Algorithms: Merge Sort and Analysis, Quick Sort and Analysis (Best Case, Worst
Case and Average Case), Heap Sort (Heapify, Build Heap and Heap Sort Algorithms and
their Analysis), Randomized Quick sort and its Analysis
3.3. Order Statistics: Selection in Expected Linear Time, Selection in Worst Case Linear Time
and their Analysis.

**Unit 4: Greedy Algorithms (6)**
4.1. Optimization Problems and Optimal Solution, Introduction of Greedy Algorithms,
Elements of Greedy Strategy.
4.2. Greedy Algorithms: Fractional Knapsack, Job sequencing with Deadlines, Kruskal’s
Algorithm, Prims Algorithm, Dijkstra’s Algorithm and their Analysis
4.3. Huffman Coding: Purpose of Huffman Coding, Prefix Codes, Huffman Coding
Algorithm and its Analysis

**Unit 5: Dynamic Programming (8)**
5.1. Greedy Algorithms vs Dynamic Programming, Recursion vs Dynamic Programming,
Elements of DP Strategy
5.2. DP Algorithms: Matrix Chain Multiplication, String Editing, Zero-One Knapsack
Problem, Floyd Warshwall Algorithm, Travelling Salesman Problem and their
Analysis.
5.3. Memoization Strategy, Dynamic Programming vs Memoization

**Unit 6: Backtracking (5)**
6.1. Concept of Backtracking, Recursion vs Backtracking
6.2. Backtracking Algorithms: Subset-sum Problem, Zero-one Knapsack Problem, N-queen
Problem and their Analysis.

**Unit 7: Number Theoretic Algorithms (5)**
7.1. Number Theoretic Notations, Euclid’s and Extended Euclid’s Algorithms and their
Analysis.
7.2. Solving Modular Linear Equations, Chinese Remainder Theorem, Primility Testing: Miller-
Rabin Randomized Primility Test and their Analysis

**Unit 8: NP Completeness (5)**
8.1. Tractable and Intractable Problems, Concept of Polynomial Time and Super Polynomial
Time Complexity
8.2. Complexity Classes: P, NP, NP-Hard and NP-Complete
8.3. NP Complete Problems, NP Completeness and Reducibility, Cooks Theorem, Proofs of NP
Completeness (CNF-SAT, Vertex Cover and Subset Sum)
8.4. Approximation Algorithms: Concept, Vertex Cover Problem, Subset Sum Problem

---

**Laboratory Work:**
This course can be learnt in effective way only if we give focus is given in practical aspects of algorithms and techniques discussed in class. Therefore student should be able to implement the algorithms and analyze their behavior. Students should:
:pushpin: Implement comparison sorting algorithms and perform their empirical analysis.
:pushpin: Implement divide-and-conquer sorting algorithms and perform their empirical analysis.
:pushpin: Implement algorithms for order statistics and perform their empirical analysis.
:pushpin: Implement algorithms by using Greedy, DP and backtracking paradigm
:pushpin: Implement NP-complete problems and realize their hardness.

---

**_Recommended Books:_**

1. Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest and Clifford Stein,
   “Introduction to algorithms”, Third Edition.. The MIT Press, 2009.
2. Ellis Horowitz, Sartaj Sahni, Sanguthevar Rajasekiaran, “Computer Algorithms”, Second
   Edition, Silicon Press, 2007.
3. Kleinberg, Jon, and Eva Tardos **, “** Algorithm Design **”** , Addison-Wesley, First Edition,
   2005


___Feel free to create a pull request and contribute to this repo.___