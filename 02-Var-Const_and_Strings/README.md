# VARIABLES, CONSTANT AND STRINGS

A `Variable` is a container into which you can store
values — values that are unknown or values that can change.

C deals with different types of values, therefore a variable must be declared as a specific type.

In C, the variable type matches the variable’s content—the type of value being stored:

- `Int` variables hold only `integer values` or `whole numbers`.
- `Float` variables hold floating-point values only.
- `Char` variables hold single values such as the letter 'x'.
- The C language lacks a `string` variable type.
Instead, a character array is used.

## Declaration And Initialization Of Variables In C

In order to process different data types and data values in the computer, we need to declare and assign variables.

`Declaring ` variables automatically allocates memory to values.

----
`Declaring a variable:`

- data_type variable_name

    eg: `int` x;

    :- `int` is the data type and

    :- `x` is the name of the variable.

----
`Initializing a variable:`

- name of variable = value

    eg: x = 10;

    :- `x` is assigned a value of 10.
--
Put together during code:

include <stdio.h>

int main()  
{

    int x = 10;   /*declaration and initilization*/

    printf("We have %d bags of sand", x); 

    return (0);
}

----

# STRINGS 

A character is a single letter or symbol. 
Put two characters together and you have a string.
A string is an array of characters terminated by null `'\0'`. 

They are not a variable type, just a collection or array of
characters all marching together in a line.

strings are identified by `%s` in I/O functions 

`Strings are not a variable type therefore they cant be declared independently,
they use arrays to be declared since they are a collection of characters:`

This is how to declare them:

`char string[] = "hello,world";`

    NOTE: The terminating null '\0' is important, because it is the only way the function that work with a string can know where the string ends.	
    
    -the null ‘\0’ looks as if two characters are typed but the compiler treats it as a single character. It is an escape sequence.

`using a scanf() function with strings:`

    #include<stdio.h>

    int name()

    {
        char name[25];
        
        printf(”\n enter your name”);
        scanf(“%s”,name);
        printf(“ Hello  %s!\n”, name);
        
        return 0;
    }

Out put:

enter your name; Kevin

`Hello Kevin!`

Note :- while entering the string using scanf() ,we must be cautious about two things:
A) The length of the string should not exceed the size of the character array.
B) Scanf() is not capable of receiving multi word strings. 
Therefore, names such as  ‘Hello World’ would be un-acceptable. 
The way to get around this limition is by using the function ‘gets()’.

# STRING FUNCTIONS

    -strlen(): a function that returns the number of characters in a string.
        -So it basically looks at the length of the string.
	    -A variable len to assign strlen() is 
        needed: len =  strlen(array name);
	    -It is declared in the <string.h> header file. 
        -The function iterates over the string until it finds the null character.
        -

    -strcpy(): This function copies the contents of 
        one string into another.
	    -If strings are equal, the function returns 
        the value of 0. 
	    -If strings are not equal, the function 
         returns a value of either < 0 or > 0.
	    -The function compares strings one 
         character at a time.
	    -When a character from the left-hand string 
         does not match the character 
	     from the right-hand-side string, the 
         function can either: 

	    :- Return a value less than 0 if unmatched 
           ls char comes before the rs char
	    :- Return a value greater than 0 if unmatched 
           ls char comes after the rs char.

    -strcat(): The strcat function concatenates/
        sticks two strings together. 
	-It appends the source_str string to 
     the destination_str string. 
	-The function is of the following signature: 
