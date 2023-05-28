#include <stdio.h>

/*Logical && operator
    If both LHS and RHS operands are true then the result will be true, 
    in all other cases the result will be false
*/

int main()
{
    printf("%d\n",(3<4) && (4<5)); //true
    printf("%d\n",(3<4) && (4>5)); //false
    printf("%d\n",(3>4) && (4<5)); //false
    printf("%d\n",(3>4) && (4>5)); //false
}
