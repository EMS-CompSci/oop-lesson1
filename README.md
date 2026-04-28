# oop-basics
# Basics — Classes, Objects and Instantiation
### AQA A-Level Computer Science — Object-Oriented Programming in C++

## Basic Concepts

Relationship between CLASSes and OBJECTs.
Access modifiers PRIVATE PROTECTED PUBLIC.
INSTANTIATION of objects.
METHODS to interrogate or modify objects.

You leaarn through practice with the code in this file.
Read first, addidng comments to explain each line.
Run it, by pressing Ctrl+Shift+B.
Change some of the code, for example location of brakets and size of indents. Find out what your stylistic preference is.
Modify the program:
Add more point objects
Add methods to the Point class, e.g. 


If there is a compiler error, click on it in the Terminal to jump
directly to that line in your code.

## What you are building

A `Point` class that represents a location in 2D space.

| Task | What to do |
|------|-----------|
| 1 | Create your own points and experiment |
| 2 | Write `distanceTo()` using the distance formula |
| 3 | Write `midpointTo()` returning a new Point |


## Key vocabulary for this lesson

| Term | Meaning |
|------|---------|
| Class | A blueprint that defines attributes and methods |
| Object | A specific instance built from a class |
| Instantiation | The act of creating an object from a class |
| Attribute | A variable that belongs to a class |
| Method | A function that belongs to a class |
| Constructor | A special method that runs when an object is created |
| Encapsulation | Hiding data inside a class using `private` |
| Getter | A method that reads a private attribute |

## AQA specification links

This lesson covers:
- Class, object, instantiation
- Encapsulation
- Public and private specifiers


## Summary

OOP bundles data with the actions on the data in a CLASS
The data is referred to as ATTRIBUTES
The actions, akin to functions are referred to as METHODS
The BUNDLING achieves ENCAPSULATION of the data and actions.
INFOMRATION HIDING is achoeved by ACCESS MODIFIERS.
ACCESS MODIFIERS are either PRIVATE, PROTECTED, or PUBLIC
CLASSES are akin to a BLUEPRINT
OBJECTS of a class are CONSTRUCTED or INSTANTIATED from the class
by executing/calling the CONSTRUCTOR of the CLASS
 
In this example:
CLASS, the BLUEPRINT is  Point
OBJECTS are  p1, p2, p3 ...

Every object has its own copy of the data (attributes)

## REFLECTION QUESTIONS

1. What is the difference between a class and an object?
     Use Point as your example.

  2. What does 'private' mean? Why is it useful?
     What would go wrong if x and y were public?

  3. Why does the constructor have no return type?

  4. What does 'const' mean on a method?
     Why is it correct for getX() but wrong for a setter?

  5. p1 and p2 are both Points. Do they share the same x
     and y variables, or do they each have their own?
     How can you tell?

## Potentially new oncepts not related to OOP

Working in the terminal.
Namespace.
Building a program.
