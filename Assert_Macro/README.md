# Assert Macro:
The assert Macro is a tool to ensure that the expected conditions are true where the 'assert' statement
is located. If the conditions are not met, then the program will display an error message and abort.

### Usage:
```c++
#include <cassert>

assert(boolean_expression);
```

The assert macro can be controlled via:
```c++
#define NDEBUG //disables assert
```
