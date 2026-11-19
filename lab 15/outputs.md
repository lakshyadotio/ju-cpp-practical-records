# Outputs for Lab 15

## q71_constructor_destructor_order.cpp
```text
Creating Derived object inside scope block:
[1] Base Class Constructor executed
[2] Derived Class Constructor executed
[3] Derived Class Destructor executed
[4] Base Class Destructor executed
Object destroyed and exited block.
```

## q72_multilevel_constructor_execution.cpp
```text
--- Multilevel Inheritance Constructor Chain ---
Grandparent constructor called with val: 10
Parent constructor called with val: 20
Child constructor called with val: 30
Child destructor called
Parent destructor called
Grandparent destructor called
--- Execution complete ---
```

## q73_multiple_inheritance_constructor.cpp
```text
Demonstrating Constructor/Destructor order in Multiple Inheritance:
[BaseOne] Constructor invoked
[BaseTwo] Constructor invoked
[DerivedMultiple] Constructor invoked
[DerivedMultiple] Destructor invoked
[BaseTwo] Destructor invoked
[BaseOne] Destructor invoked
```

## q74_runtime_polymorphism_virtual_func.cpp
```text
Runtime dispatch via Shape*: Drawing Circle: (O)
Runtime dispatch via Shape*: Drawing Rectangle: [___]
```

## q75_abstract_base_class.cpp
```text
--- Abstract Base Class Demonstration ---
Rectangle [5 x 3]
  Area:      15
  Perimeter: 16

Circle [radius = 4]
  Area:      50.2654
  Perimeter: 25.1327
```
