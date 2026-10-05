# C++ Object-Oriented Programming (OOP) — Polymorphism and Virtual Functions

## 1. Polymorphism and Virtual Functions

> 💡 **Prerequisites**
> Polymorphism is an advanced OOP concept. Before studying this chapter, make sure you **understand and are comfortable with** the earlier "OOP Basic Concepts" and "Inheritance" material,
> especially the relationship between **classes, objects, and names**.

### Definition of Polymorphism

Implementing polymorphism means that **a pointer or reference declared with the base class type** can control objects of any derived class.

In other words:

> ✅ **A pointer or reference declared with the base class type can represent any derived class object.**

---

## 2. Concept Q&A

### Q1. What Is the Purpose of Polymorphism?

**A.** When you call a member function through **a pointer or reference declared with the base class type**, you get **different results** depending on **the actual object it points to**.

- Benefit: the same code can handle all derived class objects, avoiding the need to write a separate **overload** for each derived class.

```cpp
class Mouse {
public:
    virtual void click() { cout << "Mouse click" << endl; }
    virtual ~Mouse() {}
};

class OpticalMouse : public Mouse {
public:
    void click() override { cout << "Optical mouse click" << endl; }
};

void use(Mouse& m) { m.click(); }   // one function is enough; no need to overload for each derived class

OpticalMouse om;
use(om);   // output: Optical mouse click
```

> ⚠️ The base class function must be declared `virtual` for the derived class version to run when called through a pointer/reference.

---

### Q2. What Is is-a?

**A.** It describes the **inheritance** relationship **between classes**:

> **Derived class is-a base class** (holds whenever there is inheritance)

**Example:**

```
Wireless optical mouse is-a optical mouse is-a mouse is-a computer peripheral is-a electronic device
```

**Key point:** Because a derived class is-a base class, **an object of the derived type** is also **an object of the base type** → this is exactly why a base class pointer/reference can point to a derived class object.

---

### Q3. What Is Object Polymorphism?

**A.** Every object has a type, and in fact **has multiple types at once**; these types are always related by **parent–child (inheritance)** relationships.

| Object | Type Chain (child → parent) |
| --- | --- |
| The phone in your pocket | Smartphone → mobile phone → telephone → electronic device |
| The mouse on your desk | Wireless optical mouse → optical mouse → mouse → computer peripheral → electronic device |

Taking the mouse as an example, the mouse on your desk is **simultaneously** an object of type: wireless optical mouse, optical mouse, mouse, computer peripheral, and electronic device.

```cpp
WirelessOpticalMouse m;
OpticalMouse&    r1 = m;   // ✅ it is an optical mouse
Mouse&           r2 = m;   // ✅ it is a mouse
ComputerDevice*  p  = &m;  // ✅ it is a computer peripheral
```

---

### Q4. What Is has-a?

**A.** It describes the **composition** relationship **between classes**:

> If class A declares a **member variable** of class B, we can say **A has-a B**.

**Example:** A computer has-a CPU → a "Computer" object contains a "CPU" object.

```cpp
class CPU { /* ... */ };

class Computer {
    CPU cpu;   // Computer has-a CPU
};
```

---

## 3. is-a vs has-a

| Relationship | Meaning | Implementation | Example | Rule of Thumb |
| --- | --- | --- | --- | --- |
| **is-a** | "is a kind of" | Inheritance | Optical mouse is-a mouse | "A is a kind of B" makes sense |
| **has-a** | "has a" | Member variable (composition) | Computer has-a CPU | "A contains B" makes sense |

---

## 4. Polymorphic Assignment and Calls

### 1. Ways to Assign

| Approach | Description | Polymorphic? |
| --- | --- | --- |
| **Object variable** | Derived object → base class object variable | ❌ Just an **object copy** (the extra derived parts are sliced off) |
| **A. Pointer** | Derived object → base class pointer | ✅ |
| **B. Reference** | Derived object → base class reference | ✅ |
| **C. Collection** | Derived object → collection of base type (e.g., array, `vector`) | ✅ (the collection must store pointers) |
| **D. Parameter** | Derived object → function parameter of base type | ✅ (the parameter must be a pointer or reference) |

```cpp
OpticalMouse om;

Mouse  m  = om;    // ❌ object copy, not polymorphism
Mouse* p  = &om;   // ✅ pointer
Mouse& r  = om;    // ✅ reference
vector<Mouse*> list = { &om };   // ✅ collection
void use(Mouse& m);              // ✅ parameter
```

### 2. Function Calls: Only the "Declared Type" Matters

Whether through an object variable, reference, or pointer, **you can only call members that exist in the base class**; members added only in the derived class cannot be called.

### 3. Function Execution: Without `virtual`

Even if the derived class defines a member function with the same name, calling it through an object variable, reference, or pointer **always runs the base class version**.
→ To make the derived class version run, you need **virtual functions**, covered in the next section.

---

## 5. Virtual Functions

### 1. Base Class

| Item | Syntax |
| --- | --- |
| **A. Declare and define a virtual function** | Add the keyword `virtual` before the function declaration |
| **B. Declare a virtual destructor** | `virtual ~ClassName() {}` |

> ⚠️ A base class with virtual functions should also declare its destructor `virtual`; otherwise, when you `delete` a derived object through a base class pointer, the derived class destructor will not be called.

### 2. Derived Class

| Item | Description |
| --- | --- |
| **A. Override the base class virtual function** | Redeclare and redefine the virtual function from the base class (adding `override` is recommended) |
| **B. Call the virtual function through a polymorphic pointer** | Runs the **derived class**'s overridden version |
| **C. Call the virtual function through a polymorphic reference** | Runs the **derived class**'s overridden version |

> For an example, see [Q1. What Is the Purpose of Polymorphism?](#q1-what-is-the-purpose-of-polymorphism).

### 3. `dynamic_cast`: Converting a Base Pointer/Reference Back to a Derived Type

| Target | Syntax | On Failure |
| --- | --- | --- |
| **A. Pointer** | `dynamic_cast<Type*>(pointer)` | Result is `nullptr` (0) |
| **B. Reference** | `dynamic_cast<Type&>(reference)` | Throws `std::bad_cast` |

```cpp
Mouse* p = &om;
if (OpticalMouse* op = dynamic_cast<OpticalMouse*>(p)) {
    // cast succeeded; members specific to OpticalMouse can be used
}
```

> 💡 `dynamic_cast` can only be used on classes that have **at least one virtual function**.

---

## 6. Pure Virtual Functions and Abstract Classes

### 1. Declaring a Pure Virtual Function

```cpp
virtual type name(parameter list) = 0;
```

### 2. Abstract Classes

If a class **declares or inherits** one or more pure virtual functions (that have not yet been overridden), the class is an **abstract class**.

| Property | Description |
| --- | --- |
| **A. Cannot create objects** | `Shape s;` ❌ compile error |
| **B. Can be used as a polymorphic type** | `Shape* p = &circle;` ✅ |

```cpp
class Shape {
public:
    virtual double area() = 0;   // pure virtual function
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r = 1;
public:
    double area() override { return 3.14159 * r * r; }
};

Circle c;
Shape* p = &c;   // ✅ abstract class used as a polymorphic type
p->area();       // runs Circle::area
```
