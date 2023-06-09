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

`&&`: Logical **And** Operator:
If both **LHS** and **RHS** operands are **true** then the result will be **true**, in all other cases the result will be
**false**

**Note**: in `&&`, both conditions have to be **true**.

| **LHS**   |  **RHS**  |  **LHS AND RHS**  |
| :-------: | :-------: | :----------------:|
|   true    |   true    |   true       |
|   true    |   false   |  false       |
|   false   |   true    |  false       |
|   false   |   false   |  false       |

`||`: Logical **Or** Operator:
If both **LHS** and **RHS** operands are **false** then the result will be **false**, in all other cases the result will be
**true**

**Note**: in `||`, atleast one conditions has to be **true**.

| **LHS**   |  **RHS**  |  **LHS AND RHS**  |
| --------- | --------- | ------------------|
|   true    |   true    |  		true        |
|   true    |   false   |  		true        |
|   false   |   true    |  		true        |
|   false   |   false   |  		false       |

`!`: Logical **Not** Operator:
 If the given operator is true, the result will be false. Vice versa

**Note**: `!` revesrese the condition.

| **LHS**   |  !**RHS** |
| --------- | --------- |
|   true    |   false   |
|   false   |   true    |

### **Arithmetic Operator**

- There are the four basic arithmetic operators, as well as the modulus operator (`%`), which is used to obtain the division remainder.

  - addition ->  x = 3 `+` 2; 5

  - subtraction -> x = 3 `-` 2; 1

  - multiplication -> x = 3 `*` 2; 6

  - division -> x = 3 `/` 2; 1

  - modulus (division remainder) -> x = 3 `%` 2; 1

**Notice**: that the division sign gives an incorrect result. This is because it operates on two integer values and will therefore truncate the result and return an integer. To get the correct value, one of the numbers must be explicitly converted to a floating-point number.

### **Relational (<, >, <=, >=. ==, !=)**

Rational operators are also known as `comparison` operators. They find the relationship between two values or they compare the relationship between two values; on comparison they yield either 0 or 1 results.

- `>`: grater than.
- `<`: less than.

- `<=`: less than or equal to.
- `>=`: grater than or equal to.

- `==`: equals to.
- `!=`: not equals to.
---

### **Assignment (=, SHA:(+=, -=, *=, /=, %=))***

Assignment operators are used to assign a value to a variable.

`=` : is the assignment operator.

RHS is a variable and LHS is a value or an exprssion.

- **LHS = RHS** where: variable = value or expression

  - a = 5

  - b = 5 + 1

  - x = a + b

  A common use of the assignment and arithmetic operators is to operate on a variable and then to save the result back into that same variable. These operations can be shortened with the combined assignment operators.

  Short Hand Assignment (SHA):

  x `+=` 5; /* x = x + 5; */
  
  x `-=` 5; /* x = x - 5; */
  
  x `*=` 5; /* x = x * 5; */
  
  x `/=` 5; /* x = x / 5; */
  
  x `%=` 5; /* x = x % 5; */
---

### **Bitwise (&, |, ~, ^, <<, >>)**

Bitwise operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing. 

## 3 Classes of Bitwise Operators

* Unary - used as a prefix to a bit vector
  * `~` one's [compliment](#bitwise-compliment-operator) / invert

* Binary operators working on 2 vectors of bits.
  * `&` [and](#bitwise-and)
  * `|` [or](#bitwise-or)
  * `^` [exclusive or](#bitwise-exclusive-or)

* Binary shift operators whose format is: `bit vector <operator\> integer`
  * `<<` [shift left](#bitwise-shift-left)
  * `>>` [shift right](#bitwise-shift-right)

## Bitwise Compliment Operator

The compliment operator will flip each bit to the opposite value 

* 0's become 1's and 1's become 0's
* E.g: ~[1, 0, 1, 0] = [0, 1, 0, 1]

Truth Table:

|a|~a|
|-|-|
| 0 | 1 |
| 1 | 0 |

## Bitwise AND (&)

bitwise operator takes two bit vectors **a** & **b** and produces **c**

* Each bit of a and b are compared at i
* When both a and b are 1, then c is 1.
* otherwise c is 0.

Truth Table:

|a|b|a & b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

## Bitwise OR ( | )

bitwise operator takes two bit vectors a | b and produces c

* Each bit of **a** and **b** are compared at i
* When either a **or** b **or** both are 1, then ci is 1.
* otherwise c is 0.
* can be seen as the sum of 2 bit vectors if there is no carry

Truth Table:

|a|b|a \| b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

## Bitwise EXCLUSIVE OR ( ^ )

bitwise operator takes two bit vectors a ^ b and produces c

* Each bit of **a** and **b** are compared at i
* When either ai and bi are not equal, ci is 1.
* otherwise ci is 0.

Truth Table:

|a|b|a ^ b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

## Bitwise Shift Left <<

Shifts the 1 bits left in bit vector by increments and truncates the rest with 0's

* can be also seen as value * 2 in C.
  ```C
  int main()
  {
  	//           b = 9 (00001001)
  	unsigned char b = 9;

	// The result is 18 (00010010)
    printf("b<<1 = %d\n", b << 1);
  }
  ```

## Bitwise Shift Right >>

Shifts the 1 bits right in bit vector by increments and truncates the rest with 0's

* can be also seen as value / 2 in C.
  ```C
  int main()
  {
  	//           b = 9 (00001001)
  	unsigned char b = 9;

	// The result is 4 (00000100)
    printf("b>>1 = %d\n", b >> 1);
  }
  ```

