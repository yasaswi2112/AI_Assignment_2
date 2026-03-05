1. bfs.c
Breadth First Search (BFS) implementation.

Description
Breadth First Search explores a graph level by level, visiting all nodes at the current depth before moving to the next level.

Features
-Uses queue data structure
-Guarantees shortest path in unweighted graphs
-Commonly used in:
-Path finding
-Network broadcasting
-Social network analysis

Time Complexity
O(V + E)

2. dfs.c
Depth First Search (DFS) implementation.

Description
Depth First Search explores a graph by going as deep as possible along each branch before backtracking.

Features
-Uses stack or recursion
-Useful for:
-Topological sorting
-Cycle detection
-Path finding

Time Complexity
O(V + E)

3. dls.c
Depth Limited Search (DLS) implementation.

Description
Depth Limited Search is a variation of DFS where the search depth is limited to a specific level to prevent infinite exploration.

Features
-Prevents infinite loops
-Used in large or infinite search spaces
-Requires a depth limit parameter

4. idfs.c
Iterative Deepening Depth First Search (IDFS) implementation.

Description
IDFS combines advantages of DFS and BFS.
It repeatedly performs DFS with increasing depth limits.

Features
-Uses depth-limited search repeatedly
-Guarantees optimal solution like BFS
-Uses less memory like DFS

Time Complexity
O(b^d)

Where
b = branching factor
d = depth of solution

5. missionaries_cannibals.c
Solution to the Missionaries and Cannibals Problem.

Problem Description
Three missionaries and three cannibals must cross a river using a boat that can carry two people at a time.

Constraints

-Cannibals should never outnumber missionaries on either side.
-The boat must carry at least one person.

Purpose
Demonstrates state space search and constraint satisfaction in AI.

6. waterjug.c
Solution to the Water Jug Problem.

Problem Description
Given two jugs with fixed capacities, the goal is to measure a specific amount of water using the available operations.

Allowed Operations
-Fill a jug
-Empty a jug
-Pour water between jugs

Purpose
Illustrates state space representation and search algorithms.

7. captcha.c
Simple CAPTCHA generation and verification system.

Description
The program generates a random CAPTCHA string and asks the user to re-enter it.

Purpose
Demonstrates a basic human verification system used in security applications.

Features
-Random string generation
-User input verification

8. turing_test.c
Simulation related to the Turing Test concept.

Description
The Turing Test evaluates whether a machine can exhibit intelligent behavior indistinguishable from a human.

Purpose
This program simulates a simple chatbot-like interaction to demonstrate the concept.
