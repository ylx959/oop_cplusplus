# C++ Object-Oriented Programming (OOP) — Encapsulation and Inheritance

## 1. Encapsulation

### Information Hiding

In object-oriented programming, **information hiding** means hiding the internal data of an object that should not be modified directly from outside, and exposing only the necessary functions for outside code to use, thereby protecting the object's data.

- Make **data members `private`** → prevents outside code from modifying them directly
- Use **`public` member functions** → to read or modify the data

> ✅ **Benefit**: All changes to the data must go through functions provided by the class, so those functions can perform checks that keep the object from entering an invalid state.

**Example:**

```cpp
class Person {
private:
    int age;

public:
    void setAge(int value) {
        if (value >= 0) {   // check: age cannot be negative
            age = value;
        }
    }
};
```

### Access Specifiers

| Specifier | Who Can Access |
| --- | --- |
| `private` | Only other members of **this class** |
| `protected` | This class + **derived classes** |
| `public` | **All** classes |

> 📝 TODO: Explain access with examples

### The Developer vs. User Mindset

From the very start of learning OOP, the emphasis has been on thinking in terms of **developers and users**.

> Access restrictions are how the **developer** **limits the user's access rights**.

- When developing class A → you are the **developer** of class A
- When using class B inside class A → you are a **user** of class B

When writing code, you usually **play both developer and user roles**, which makes it easy to mix them up.

A class user can use a class in two ways: through **objects** and through **inheritance**.

---

## 2. Inheritance

### What Is Inheritance

A mechanism in OOP for **avoiding duplicated code** and **reducing maintenance difficulty**.

Put members that multiple classes need into a parent class; **a child class simply inherits from the parent and gets those members without rewriting them**.

- Avoids writing duplicate code
- Reduces future maintenance difficulty: if code needs to change, only one class needs to be modified

When we write a new class and specify that it inherits from one or more existing classes, we are **using** those existing classes.

| Role | Name |
| --- | --- |
| New class | **Derived class** / **Child class** |
| Existing class | **Base class** / **Parent class** |

### Inherited ≠ Accessible

A derived class inherits **all members of the base class (including `private`)**, but:

| Base Class Member | Can the Derived Class Access It Directly? |
| --- | --- |
| `private` | ❌ No |
| `protected` | ✅ Yes |
| `public` | ✅ Yes |

### Guidelines for Using Access Specifiers

When you are the class developer:

| Requirement | Declare As |
| --- | --- |
| No access from derived classes or objects | `private` |
| No access from objects, but allow derived classes | `protected` |
| Allow access from objects | `public` |

### The Inheritance Operator `:`

```cpp
class Child : public Parent {
    // ...
};
```

What you can do in a derived class:

#### 1. Add New Members

You can add members to the derived class that the base class does not declare.

#### 2. Hide (Shadow) Base Class Members

You can declare members in the derived class that the base class already declares; **the new member hides the base class member with the same name**.

- **Same-named data members**: functions of the **derived class** access the derived class's data member; functions of the **base class** access the base class's data member.
- **Same-named functions with different parameter lists**: ⚠️ **this is NOT overloading** — the base class member function is still hidden.

#### 3. Overloading

> ✅ **Same name + different parameter list = Overloading**

> ⚠️ Differing **only in return type** does not constitute overloading.

---

## 3. Constructors

When an object is created, the environment calls the constructor defined in the class **after allocating memory**. The class developer writes **object initialization code** in the constructor, typically **setting the initial values of data members**.

**Rules:**

- The name must be **the same as the class name**
- **Can** have a parameter list (parameters can have **default values**)
- **Cannot** have a return type

### 1. Default Constructor

When creating an object, if the statement does not specify a constructor, the environment calls the **constructor with no parameters** by default, so the parameterless constructor is the **default constructor**.

- If the class **declares no constructors at all**, the compiler automatically generates a parameterless constructor.
- ⚠️ The auto-generated constructor **does not assign initial values to data members**, so the resulting object is unsafe.
- ⚠️ If the class **declares any constructor**, the compiler **will not** automatically generate a parameterless constructor.

### 2. Overloading Constructors

Besides the parameterless constructor, you can overload multiple constructors as needed.

### 3. `this`

Every member function has an implicit **pointer** `this` that points to **the object the function was called on**, used to access **object members**.

Two main uses:

1. Quickly finding the member you want to access in a professional IDE
2. Resolving **name conflicts between member variables and parameters**

### 4. Specifying Which Base Class Constructor a Derived Constructor Calls

If the base class **has no default constructor**, or has **multiple overloaded constructors**, the derived class constructor can specify which one to call.

---

## 4. Inheritance Access Restrictions

When a derived class declares inheritance from a base class, it can use an access specifier to **restrict the new access level of the base class members within the derived class**.

| Inheritance Mode | Effect |
| --- | --- |
| `private` inheritance | `private` members unchanged; all other members **become `private`** |
| `protected` inheritance | `private` and `protected` members unchanged; `public` members **become `protected`** |
| `public` inheritance | All member levels **remain unchanged** |

**Reference table** (rows: inheritance mode; columns: original access level of the base class member):

| Inheritance Mode \ Base Member | `private` | `protected` | `public` |
| --- | --- | --- | --- |
| **`private`** | private | private | private |
| **`protected`** | private | protected | protected |
| **`public`** | private | protected | public |
