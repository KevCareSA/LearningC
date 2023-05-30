#include <stdio.h>



int main()
{
    /*Logical && operator
    If both LHS and RHS operands are true then the result will be true, 
    in all other cases the result will be false
    */
    printf("%d\n",(3<4) && (4<5)); //true
    printf("%d\n",(3<4) && (4>5)); //false
    printf("%d\n",(3>4) && (4<5)); //false
    printf("%d\n",(3>4) && (4>5)); //false
    printf("\n\n");

    /*
    `||`: Logical **Or** Operator:
    If both LHS and RHS operands are false then the result will be false, 
    in all other cases the result will be
    true
    */

    printf("%d\n",(3<4) || (4<5)); //true
    printf("%d\n",(3<4) || (4>5)); //false
    printf("%d\n",(3>4) || (4<5)); //false
    printf("%d\n",(3>4) || (4>5)); //false
    printf("\n\n");

}
