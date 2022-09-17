Tech Interview Handbook Logo
Tech Interview Handbook

Coding interview preparationTechniques to solve questions
On this page
Top techniques to approach and solve coding interview questions

The biggest fear most candidates will have during a coding interview is: what if I get stuck on the question and don't know how to do it? Fortunately, there are structured ways to approach coding interview questions that will increase your chances of solving them. From how to find a solution or approach, to optimizing time and space complexity, here are some of the top tips and best practices that will help you solve coding interview questions.

How to find solutions to coding interview problems
When given a coding interview question, candidates should start by asking clarifying questions and discussing a few possible approaches with their interviewers. However, this is where most candidates tend to get stuck. Thankfully, there are ways to do this in a structured manner.

Note that not all techniques will apply to every coding interview problem, and you can also use multiple techniques on one single problem! As you apply these techniques during your practice, you will develop the intuition for which technique will be useful for the problem at hand.

1. Visualize the problem by drawing it out
Ever wondered why coding interviews are traditionally done on whiteboards and videos explaining answers to coding questions tend to use diagrams? Whiteboards make it easy to draw diagrams which helps with problem solving! A huge part of coding is understanding how the internal state of a program changes and diagrams are super useful tools for representing the internal data structures state. If you are having a hard time understanding how the solution is obtained, come up with a visual representation of the problem and if necessary, the internal states at each step.

This technique is especially useful if the input involves trees, graphs, matrices, linked lists.

Example
How would you return all elements of a matrix in spiral order? Drawing out the matrix and the steps your iterator needs to take in each direction will help tremendously in allowing you to see the pattern.

2. Think about how you would solve the problem by hand
Solving the problem by hand is about solving the problem without writing any code, like how a non-programmer would. This already happens naturally most of the time when you are trying to understand the example given to you.

What some people don't realize is that sometimes a working solution is simply a code version of the manual approach. If you can come up with a concrete set of rules around the approach that works for every example, you can write the code for it. While you might not arrive at the most efficient solution by doing this, it's a start which will give you some credit.

Example
How do you validate if a tree is a valid Binary Search Tree without writing any code? You first check if the left subtree contains only values less than the root, then check that the right subtree contains only values bigger than the root, then repeat for each node. This process seems feasible. Now you just have to turn this process into code.

3. Come up with more examples
Coming up with more examples is something useful you can do regardless of whether you are stuck or not. It helps you to reinforce your understanding of the question, prevents you from prematurely jumping into coding, helps you to identify a pattern which can be generalized to any input, which is the solution! Lastly, the multiple examples can be used as test cases at the end when verifying your solution.

Stop memorizing solutions
Grokking the Coding Interview teaches you techniques and question patterns to ace coding interviews. Grab your lifetime access today!

4. Break the question down into smaller independent parts
If the problem is large, start with a high-level function and break it down into smaller constituting functions, solving each one separately. This prevents you from getting overwhelmed with the details of doing everything at once and keeps your thinking structured.

Doing so also makes it clear to the interviewer that you have an approach, even if you don't manage to finish coding all of the smaller functions.

Example
The Group Anagrams problem can be broken down into two parts - hashing a string, grouping the strings together. Each part can be solved separately with independent implementation details. You could start off with this code:

def group_anagrams(strings):
  def hash(string):
    # Fill in later
    pass

  def group_strings(strings_hashes):
    # Fill in later
    pass

  strings_hashes = [(string, hash(string)) for string in strings]
  return group_strings(strings_hashes)


And proceed to fill in the implementation of each function. However, do note that sometimes the most efficient solutions will require you to break some abstractions and do multiple operations in one pass of the input. If your interviewer asks you to optimize based on your well-abstracted solution, that is one possible path forward.

5. Apply common data structures and algorithms at the problem
Unlike real-world software engineering where the problems are usually open-ended and might not have clear solutions, coding interview problems tend to be smaller in nature and are designed to be solvable within the duration of the interview. You can also expect that the knowledge required to solve the problem is not out of this world and they would have been taught during college. Thankfully, the number of common data structures and algorithms is finite and a hacky approach which works from my experience is to try going through all the common data structures and applying them to the problem.

These are the data structures to keep in mind and try, in order of frequency they appear in coding interview questions:

Hash Maps: Useful for making lookup efficient. This is the most common data structure used in interviews and you are guaranteed to have to use it.
Graphs: If the data is presented to you as associations between entities, you might be able to model the question as a graph and use some common graph algorithm to solve the problem.
Stack and Queue: If you need to parse a string with nested properties (such as a mathematical equation), you will almost definitely need to use stacks.
Heap: Question involves scheduling/ordering based on some priority. Also useful for finding the max K/min K/median elements in a set.
Tree/Trie: Do you need to store strings in a space-efficient manner and look for the existence of strings (or at least part of them) very quickly?
Routines

Sorting
Binary search: Useful if the input array is sorted and you need to do faster than O(n) searches
Sliding window
Two pointers
Union find
BFS/DFS
Traverse from the back
Topological Sorting


Ref: https://www.techinterviewhandbook.org/coding-interview-techniques/
