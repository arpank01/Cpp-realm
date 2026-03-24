# Description of all Keywords in C

## auto
The auto keyword declares automatic variables. For example:

```c
auto int var1;
```

This statement suggests that var1 is a variable of storage class auto and type int.

Variables declared within function bodies are automatic by default. They are recreated each time a function is executed.do not change any text  

Since automatic variables are local to a function, they are also called local variables. To learn more, visit C storage class.

---

## break and continue
The break statement terminates the innermost loop immediately when it's encountered. It's also used to terminate the switch statement.

The continue statement skips the statements after it inside the loop for the iteration.

```c
for (i=1;i<=10;++i){
   if (i==3)
   continue;
   if (i==7)
   break;
   printf("%d ",i);
}
```

Output

```
1 2 4 5 6
```

When i is equal to 3, the continue statement comes into effect and skips 3. When i is equal to 7, the break statement comes into effect and terminates the for loop. To learn more, visit C break and continue statement

---

## switch, case and default
The switch and case statement is used when a block of statements has to be executed among many blocks. For example:

```c
switch(expression)
{
    case '1':
    //some statements to execute when 1
    break;
    case '5':
    //some statements to execute when 5
    break;
    default:
    //some statements to execute when default;
}
```

Visit C switch statement to learn more.

---

## char
The char keyword declares a character variable. For example:

```c
char alphabet;
```

Here, alphabet is a character type variable.

To learn more, visit C data types.

---

## const
An identifier can be declared constant by using the const keyword.

```c
const int a = 5;
```

To learn more, visit C variables and constants.

---

## do...while

```c
int i;
do 
{
   printf("%d ",i);
   i++;
}
while (i<10)
```

To learn more, visit C do...while loop

---

## double and float
Keywords double and float are used for declaring floating type variables. For example:

```c
float number;
double longNumber;
```

Here, number is a single-precision floating type variable whereas, longNumber is a double-precision floating type variable.

To learn more, visit C data types.

---

## if and else
In C programming, if and else are used to make decisions.

```c
if (i == 1)
   printf("i is 1.")
else
   printf("i is not 1.")
```

If the value of i is other than 1, the output will be :

```
i is not 1
```

To learn more, visit C if...else statement.

---

## enum
Enumeration types are declared in C programming using keyword enum. For example:

```c
enum suit
{
    hearts;
    spades;
    clubs;
    diamonds;
};
```

Here, an enumerated variable suit is created having tags: hearts, spades, clubs, and diamonds.

To learn more, visit C enum.

---

## extern
The extern keyword declares that a variable or a function has external linkage outside of the file it is declared.

To learn more, visit C storage type.

---

## for
There are three types of loops in C programming. The for loop is written in C programming using the keyword for. For example:

```c
for (i=0; i< 9;++i){
  printf("%d ",i);
}
```

Output

```
0 1 2 3 4 5 6 7 8
```

To learn more, visit C for loop.

---

## goto
The goto statement is used to transfer control of the program to the specified label. For example:

```c
for(i=1; i<5; ++i)
{
    if (i==10)
    goto error;
}
printf("i is not 10");
error:
    printf("Error, count cannot be 10.");
```

Output

```
Error, count cannot be 10.
```

To learn more, visit C goto.

---

## int
The int keyword is used to declare integer type variables. For example:

```c
int count;
```

Here, count is an integer variable.

To learn more, visit C data types.

---

## short, long, signed and unsigned
The short, long, signed and unsigned keywords are type modifiers that alter the meaning of a base data type to yield a new type.

```c
short int smallInteger;
long int bigInteger;
signed int normalInteger;
unsigned int positiveInteger;
```

Range of int type data types

| Data types  | Range                    |
|------------|--------------------------|
| short int  | -32768 to 32767          |
| long int   | -2147483648 to 214743648 |
| signed int | -32768 to 32767          |
| unsigned int | 0 to 65535            |

---

## return
The return keyword terminates the function and returns the value.

```c
int func() {
    int b = 5;
    return b;
}
```

This function func() returns 5 to the calling function. To learn more, visit C user-defined functions.

---

## sizeof
The sizeof keyword evaluates the size of data (a variable or a constant).

```c
#include <stdio.h>
int main()
{
    printf("%u bytes.",sizeof(char));
}
```

To learn more, visit C operators.

Output

```
1 bytes.
```

---

## register
The register keyword creates register variables which are much faster than normal variables.

```c
register int var1;
```

---

## static
The static keyword creates a static variable. The value of the static variables persists until the end of the program. For example:

```c
static int var;
```

---

## struct
The struct keyword is used for declaring a structure. A structure can hold variables of different types under a single name.

```c
struct student{
    char name[80];
     float marks;
     int age;
}s1, s2;
```

To learn more, visit C structures.

---

## typedef
The typedef keyword is used to explicitly associate a type with an identifier.

```c
typedef float kg;
kg bear, tiger;
```

---

## union
A union is used for grouping different types of variables under a single name.

```c
union student {
    char name[80];
    float marks;
    int age;
}
```

To learn more, visit C unions.

---

## void
The void keyword meaning nothing or no value.

```c
void testFunction(int a) {
  .....
}
```

Here, the testFunction() function cannot return a value because its return type is void.

---

## volatile
The volatile keyword is used for creating volatile objects. A volatile object can be modified in an unspecified way by the hardware.

```
const volatile number
```

Here, number is a volatile object.

Since number is a constant, the program cannot change it. However, hardware can change it since it is a volatile object.
