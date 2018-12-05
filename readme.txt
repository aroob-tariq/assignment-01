Readme file for linked list and complex class
-----Complex class----
A class names complex is created and memebers are initialized using a constructor.
Member functions are defined.Return type is void for all of these functions.In add function real and imaginary part of given number are passed to the function from main added seperately.  In sub (subtraction) function real and imaginary part of given number are passed to the function from main and subtracted seperately. In following functions which are mul and divide (for multiplication and division respectively) numbers are passed in similar manner and operations are applied.
-----Linked list-----
first a structure namely node is created with members of type complex and node. A class named linkedlist is defined and members are initialized with constructor as NULL. Various functions are defined whichb include deletenode , insert at end , insertnode, traverse.
for traverse function there is no input argument and return type is void as well. the function defines a local pointer variable of type node, while loop is used to check for the end of list, values stored in list are displayed until the end of list.
for delete function first condition is when node is empty nothing occurs as there is no node to be deleted. if the position is given as zero then a temp value which points to head is deleted and head is pointed to next node in list. for loop is used to check for the given position, a node type pointer is initialized which points to a node which is at next of temporary variable pointer. Next varible is then stored as pointer of temporary variable.Insert node function is similar to delete function except for the part where variable is deleted,  in insert function a new variable is initialized and inserted in node and vaues are rearranged according to the given position of node.
for insert at start function  a new node pointer is created and haed is pointed to this new node. for insert at end two node type pointers are created one is temporary variable which stores given value which is to be inserted.While loop is applied and in each iteration the variable points to the node next to it , if the list ends the value is stored otherwise the process contines till the end of list.
----main---
in main complex objects are defined and initialized. linked list is created and complex objects are stored. respected operations are performed and values are stored in a new complex object. the values are displayed using traverse function.

 
