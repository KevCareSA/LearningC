# OPERATORS

**Expression**:
    - is a valid combination of operators and operands, on evaluation it yields a result
    Ex: 2+2, 10-2 etc.

**Operator**:
    - is a symbol which performs an operation on the given operand(s).

**Operand**:
    - is a value on which an operator performs an operation.

Operators in any programming language are broadly categorized into:

- `Unary Operators`: accept only **one** operand.
- `Binary Operators`: accept **two** operands.
- `Ternary Operators`: accept **three** operands

## Types Of Operators: **LARA BICS**

- L - Logical (&&, ||, !)
- A - Arithmetic (+, -, *, /, %)
- R - Relational (<, >, <=, >=. ==, !=)
- A - Assignment (=)
- B - Bitwise (&, |, ~, ^, <<, >>)
- I - Incremeant and Decreament (++, --)
- C - Conditionals (?:)
- S - Sizeof (sizeof, &, *, etc)
- S - Seperators (array[], (semicolons;), (commas,), (block seperator), and more)

### **Logical (&&, ||, !)**

- Logical operators are also known as logical connectives.
- They are used to connect one or more
relational expressions or conditions.
- They accept Boolean operands i.e. **true** or **false**, on evaluation they yield the result either **true** `(1)` or **false** `(0)`

**Note**: `0` indicates false and any non zero value indicates true

`&&`: Logical And Operator:
If both **LHS** and **RHS** operands are **true** then the result will be **true**, in all other cases the result will be
**false**