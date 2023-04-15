#       COMMENTS 

## Comments in C language

Comments are something like notes in the code.

Comments are used to explain code logic, so that we can be able to understand the code later as well as other developers can be able to read and understand the code easily.

Comments are used to increase the readability and understandability of the source code.
Comments are used to document the source code. (Documentation)

Note:
Comments are ignored by the C compiler.
Comments do not affect the execution of a program. 

---
#       Comments at work

There are 2 types of comments in C
`Single line` comment (// comment goes here)
`Multiline comment` (/* comment goes here */)

Single line comment: anything written after // in the line is treated as a comment
Multiline comment: anything written in between /* and */ is treated as a comment

Note: If we don't want to execute some part(s) of the code, we can comment them so that they can be
ignored by the compiler.



---------------------------------------------------------------------------------
The C language allows you to write a comment that crosses more than one line. For
instance, you can write a comment in C like this:

/*
This comment does not increase the size of
the executable file (binary code), nor does
it affect the performance speed.
*/

which is equivalent to this:
/* This comment does not increase the size of */
/* the executable file (binary code), nor does */
/* it affect the performance speed. */
