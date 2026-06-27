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

