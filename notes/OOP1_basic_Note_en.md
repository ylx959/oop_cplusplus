# C++ Object-Oriented Programming (OOP) — Basic Concepts

## 1. Objects

### What Is an Object

A **group of memory** allocated by the runtime environment according to the declarations in a **class** (think of it as a blueprint).

It stores a set of data that fully describes a specific **unit of computation**. For example:

- A set of data that fully describes an **order**
- A set of data that fully describes a **buyer**
- A set of data that fully describes a **product**
- A set of data that fully describes a **date and time**
- A set of data that fully describes a **credit card payment**

In other words:

> A group of memory represents the complete data of a specific unit of computation. We call this group of memory an **object**.

So, from a programming language's point of view:

> ✅ **Object = a collection of memory.**

### What an Object Has

| Member | Purpose | Other Common Names | Name in Java |
| --- | --- | --- | --- |
| **Data Members** | Store data (variables) | Attributes, state | Fields |
| **Member Functions** | Operate on data | Behavior, abilities | Methods |

### Why Object-Oriented Programming

Before object orientation came **procedural (function-oriented) programming**. As **computational complexity grew**, languages added support for object orientation one after another.

The fundamental difference between object-oriented and procedural programming:

> ✅ **Objects store data, and objects also operate on data.**

| Era | Declaring a New Type | Relationship Between Data and Functions |
| --- | --- | --- |
| Procedural (C) | `struct` | A struct is just a collection of data with **no ability to compute**; it can only be passed as a parameter for functions to operate on → **data and functions are unrelated** |
| Object-oriented (C++) | `class` | An object is a collection of data that **can also compute** → **data and functions are members of the same object** |

### Objects of the Same Class Always Have the Same Members

- Data members with the same **name**, but their **values** may differ.
- Member functions with the same **name**, but their **results** may differ.

### Each Object Manages and Operates on Its Own Data

Unless there is a special design requirement, each object basically operates only on its own data.

---

## 2. Classes

### What Is a Class

Like `int`, a class is a valid **type** in C++.

### Why Develop Classes

Because the program needs objects, we **develop classes according to the objects' requirements**.

### What Classes Are Used For

- Declaring variables
- Declaring pointers
- Declaring references
- Casting objects
- Identifying objects
- ⭐ **Serving as the blueprint the runtime uses to create objects**

### What a Class Contains

- **Object members**
  - Object data members
  - Object member functions
- **Class members**
  - Class data members
  - Class member functions
- **Constructors**
- Others

---

## 3. Object Variables

### Declaration

```cpp
ClassName objectName;
```

When the variable is declared, **the environment creates an object according to the class declaration** and **assigns** the object's memory address to the variable.

### Member Access

```cpp
objectName.dataMember
objectName.memberFunction()
```

Access object members using **"variable . member"**.

### Assignment

```cpp
objectName = otherObjectName;
```

- A variable is **bound** to its object: the variable **cannot be assigned another object's memory address**.
- Assignment **copies** the **values of the data members** of the object on the right of `=` into the data members of the object on the left.

**Example:**

```cpp
c1 = c2;  // C++: copy the values of c2's data members into c1
```

> ⚠️ **Difference from Java**: In Java, `c1 = c2` makes c1 **refer to** the object that c2 refers to.

### Object Variable Parameters

| Item | Syntax |
| --- | --- |
| Function prototype | `void function(ClassName objectName)` |
| Call statement | `function(objectName);` |

Passing an object variable in the call's parentheses **copies** the values of that object's data members into the function's object parameter.

### Object Variable Return Values

| Item | Syntax |
| --- | --- |
| Function prototype | `ClassName function()` |
| Call statement | `ClassName objectName = function();` |

---

## 4. Object Pointers

### Declaration

```cpp
ClassName * pointerName;
// or
ClassName * pointerName = new ClassName;
```

### Creating Objects

```cpp
new ClassName
new ClassName()
```

### Assignment

```cpp
pointerName = memory address;
```

**Example:**

```cpp
pointerName = new ClassName;      // point to a newly created object
pointerName = &objectName;        // point to an existing object
pointerName = otherPointerName;   // point to the object another pointer points to
```

### Member Access

```cpp
pointerName->dataMember
pointerName->memberFunction()
```

Access object members using **"pointer -> member"**.

### Object Pointer Parameters

| Item | Syntax |
| --- | --- |
| Function prototype | `void function(ClassName * pointer)` |
| Call statement | `function(memory address);` |

### Object Pointer Return Values

| Item | Syntax |
| --- | --- |
| Function prototype | `ClassName * function()` |
| Call statement | `ClassName * pointer = function();` |

---

## 5. Object Variable References

### Declaration

```cpp
ClassName & referenceName = objectName;
```

### Object Variable Reference Parameters

| Item | Syntax |
| --- | --- |
| Function prototype | `void function(ClassName & referenceName)` |
| Call statement | `function(objectName);` |

### Object Variable Reference Return Values

| Item | Syntax |
| --- | --- |
| Function prototype | `ClassName & function(ClassName & referenceName)` |
| Call statement | `function(objectName);` |

---

## 6. Object Pointer References

### Declaration

```cpp
ClassName *& referenceName = pointerName;
```

### Object Pointer Reference Parameters

| Item | Syntax |
| --- | --- |
| Function prototype | `void function(ClassName *& referenceName)` |
| Call statement | `function(pointerName);` |

### Object Pointer Reference Return Values

| Item | Syntax |
| --- | --- |
| Function prototype | `ClassName *& function(ClassName *& referenceName)` |
| Call statement | `function(pointerName);` |

---

## Summary: Four Ways to Access Objects

| Approach | Declaration | Member Access | As a Parameter |
| --- | --- | --- | --- |
| Object variable | `ClassName obj;` | `obj.member` | Copies the data member values |
| Object pointer | `ClassName * p;` | `p->member` | Passes the memory address |
| Object variable reference | `ClassName & r = obj;` | `r.member` | Is the original object itself (no copy) |
| Object pointer reference | `ClassName *& rp = p;` | `rp->member` | Is the original pointer itself (can change where it points) |
