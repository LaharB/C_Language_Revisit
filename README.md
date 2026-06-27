# Summary

----------------

<details><summary>1.Variables</summary>

# Variables

- variable = A reusable container for a value.
- Behaves as if it were the value it contains.
  
- int = whole numbers (4 bytes in modern systems)
- float = single-precision decimal number (4 bytes)
- double = double-precision decimal number (8 bytes)
- char = single character (1 byte)
- char[] = array of characters (size varies)
- bool = true or false (1 byte, requires <stdbool.h>)

</details> 

-----------

<details><summary>2.Format Specifiers</summary>

# Format Specifiers and Modifiers

**Format Specifier** - Special tokens that begin with `%` followed by a character that specifies the datatype and optional modifiers (width, precision, flags). They control how data is displayed or interpreted.

### Basic Format Specifiers
* `%d` - Integer (e.g., `int age = 25;`)
* `%f` - Float (e.g., `float price = 19.99;`). Note: For output purposes, `%f` also does the job for doubles.
* `%lf` - Double (e.g., `double pi = 3.1415926535;`). Used with `scanf("%lf")` while taking inputs.
* `%c` - Character (e.g., `char currency = '$';`)
* `%s` - String / Character Array (e.g., `char name[] = "Bro Code";`)

---

## Format Specifiers with Modifiers

### Width
Specifies the minimum number of characters to print. 
* You can add `0` before a number (like `4d`) to put `0`s in place of spaces.
* Add `+` before `d` (e.g., `%+d`) to show `+ve` and `-ve` numbers with their signs. By default, the left side is appended with spaces.
* Add `-` before a number (like `%-d` or `-4d`) to left-justify the numbers spacing; it will have all the space after the numbers.

### Precision
* **Default:** `6` precision.
* `%.1f` - Sets precision to 1 decimal place (e.g., `19.99` will be rounded to `20.0`).
* `%.2f` - Sets precision to 2 decimal places.

*(Note: Modifiers can include width, precision, and flags).*

</details>

-----------

<details><summary>3. Arithmetic Operators</summary>

# Arithmetic Operators

**Arithmetic Operators** are used to perform common mathematical operations.

### Basic Operators
* `+` : Addition (e.g., `z = x + y;`)
* `-` : Subtraction (e.g., `z = x - y;`)
* `*` : Multiplication (e.g., `z = x * y;`)
* `/` : Division (e.g., `z = x / y;`). 
  * *Note:* If dividing an integer by an integer, the decimal part is dropped. Even if assigned to a `float` variable `z`, the answer will still be an integer result unless one of the operands is explicitly a float.
* `%` : Modulus (e.g., `z = x % 2;`). Returns the remainder of a division.

### Increment & Decrement
* `++` : Increment operator. Increases an integer value by one (e.g., `x++;`).
* `--` : Decrement operator. Decreases an integer value by one (e.g., `x--;`).

### Augmented Assignment Operators
Shortcuts to replace a statement where a variable is assigned a value calculated from itself.
* `+=` : Addition assignment (e.g., `x += 2;` is the same as `x = x + 2;`)
* `-=` : Subtraction assignment (e.g., `x -= 3;` is the same as `x = x - 3;`)
* `*=` : Multiplication assignment (e.g., `x *= 2;` is the same as `x = x * 2;`)
* `/=` : Division assignment (e.g., `x /= 2;` is the same as `x = x / 2;`)

</details>

---------

<details><summary>4. User Input</summary>

# User Input

Taking input from the user in C requires standard input/output functions, primarily `scanf` and `fgets`. 

### `scanf()`
Reads formatted input from the standard input (keyboard).
* Requires the **address-of operator** `&` before the variable name so the value is stored at that specific memory address (e.g., `scanf("%d", &age);`).
* **Limitation with strings:** `scanf` stops reading after encountering any whitespaces. It is not ideal for strings containing spaces (like a full name).

### The Newline `\n` Buffer Issue
When reading mixed data types (like numbers followed by characters/strings), hitting the "Enter" key leaves a newline character (`\n`) in the input buffer. The program might pick this up instead of waiting for the next input.
* **Fix for `scanf` (char):** Add a space before the format specifier to tell it to skip the newline/whitespaces. 
  * *Example:* `scanf(" %c", &grade);`
* **Fix for `fgets`:** Use `getchar();` immediately before your `fgets` function to consume and clear the `\n` character left in the buffer.

### `fgets()`
The preferred method to get a string of text that includes spaces.
* **Syntax:** Takes 3 parameters: `fgets(variable, sizeof(variable), stdin);` (Using `sizeof()` avoids manually typing the string size every time).
* **Removing the Newline Character:** `fgets` reads the entire line, including the "Enter" key press (`\n`). To prevent unwanted line breaks or undefined behavior when printing, replace the newline character with a **null terminator** (`\0`).
  * *Example:* `name[strlen(name) - 1] = '\0';`
  * *(Note: This string manipulation requires `#include <string.h>` at the top of your file).*

</details>

-----------------------------------
