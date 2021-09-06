# CS50x-2020
My solutions and practice code for CS50x 2020 :bowtie:<br/>

## About this Repository

:point_right: This is my attempt at CS50 course. I will record relevant progress and source code for good practice. 

## Contents :speech_balloon:

README.md<br/>
  <details>
           <summary>Week 1 C</summary>
           <p> 
  ├── goodbye.c<br/>
  ├── hello.c<br/>
  ├── addtion.c<br/>
  ├── truncation.c<br/>
  ├── conditions.c<br/>
  ├── agree.c<br/>
  ├── meow.c<br/>
  ├── positive.c<br/>
  ├── mario.c<br/>
  ├── mario2.c<br/>
  ├── imprecision.c<br/>
  ├── cs50.c<br/>
  └── cs50.h<br/>
  </p>
    </details>
 <details>
           <summary>Week 2 Arrays</summary>
           <p> 
  ├── hello2.c<br/>
  ├── buggy0.c<br/>
  ├── buggy1.c<br/>
  ├── scores.c<br/>
  ├── brick.c<br/>
  ├── hi.c<br/>
  ├── string.c<br/>
  ├── uppercase.c<br/>
  ├── argv.c<br/>
  └── exit.c<br/>
  </p>
    </details>
 <details>
           <summary>Week 3 Algorithms</summary>
           <p> 
  ├── numbers.c<br/>
  ├── names.c<br/>
  ├── phonebook.c<br/>
  └── phonebook2.c<br/>
  </p>
    </details>

  <details>
           <summary>Week 4 Memory</summary>
           <p> 
  ├── address.c<br/>
  ├── address2.c<br/>
  ├── compare.c<br/>
  ├── copy.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  ├── ________.c<br/>
  └── ________.c<br/>
  </p>
    </details>
Week 5 Data Structures<br/>
Week 6 Python<br/>
Week 7 SQL<br/>
Week 8 HTML, CSS, JavaScript<br/>
Week 9 Flask<br/>
Week 10 Ethics<br/>
<br/>
Final Project<br/>


## Features :eyes:

Course link: https://cs50.harvard.edu/x/2021/

Compiling source code into machine code is made up of:
* preprocessing
* compiling
* assembling
* linking

All we have to be concerned about is compile the source code by using ```make``` or ```clang``` in the command line.

 
 ## Getting started :fire:

 C/C++ extensions are required for compiling and running CS50 C code:
 https://github.com/cs50/libcs50/releases

 To compile and execute the C code:
 ```bash
clang -o prog prog.c -lcs50
# and
./prog
```

## Arrays and Pointers :flashlight:
### Arrays

Let's say, for example, we declare an Array ```speed```

Declare an array:
```int speed[3] = {50, 80, 120};```
Printing the elements
```
for(int i = 0; i < 3; ++i) {
     printf("%d\n", speed[i]);
  }
```
### Pointers (Part A) :sparkles:
Pointers are used to store the addresses of an array.

We can declare a pointer variable called ptr
```int* ptr;```
Assign the address of speed[2]
```ptr = &speed[2];```

 Element      |Address       | Value        | 
------------- |------------- |------------- |
speed[0]      |0x7ffdceeb8e3c|   50         | 
speed[1]      |0x7ffdceeb8e40|   80         | 
speed[2]      |0x7ffdceeb8e44|   120        | 

if we print to the pointed value we use:
```printf("%d", *ptr);```
The output is 120

<ins>Example:</ins>
<table>
<tr>
<th>Code</th>
<th>Output</th>
</tr>
<tr>
<td>
<pre>
#include <stdio.h>

int main(void)
{
    int i, speed[3] = {50, 80, 120};

    printf("Element \t|\tAddress\t\t|\tValuen\n");

    for (i = 0; i < 3; i++)
    {
        printf("speed[%d]\t|\t%p\t|\t%d\n", i, &speed[i], speed[i]);
    }
}
</pre>
</td>
<td>

```
Element         |       Address         |       Valuen
speed[0]        |       0x7ffde513467c  |       50
speed[1]        |       0x7ffde5134680  |       80
speed[2]        |       0x7ffde5134684  |       120
```

</td>
</tr>
</table>

*Recall that addresses are binary numbers, but are often printed in hexadecimal base 16*

Pointers are discussed in detail in a subsequent section.

## Array of Arrays :pencil:

```string words[2]```<br/>

```words[0] = "HI!"```<br/>
```words[1] = "BYE"```<br/>

<ins>Example:</ins>
<table>
<tr>
<th>Code</th>
<th>Output</th>
</tr>
<tr>
<td>
<pre>
```
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE";

    for (int n = 0; n < 2; n++)
    {
        for (int i = 0; i < 4; i++)
        {

            if (words[n][i] != '\0')
                printf("%c\t|\t", words[n][i]);
            else if (words[n][i] == '\0')
                printf("\\0\t|\t");
        }
    }
    printf("\n");
}
</pre>
</td>
<td>


```H       |       I       |       !       |       \0      |       B       |       Y       |       E       |       \0      |```


</td>
</tr>
</table>

## Recursion

Recursion is the ability for a function to call itself. 


## Pointers (Part B)

Pointers are variables that stores the addresses of other variables.

Pointers take up to 8 bytes. Excluding the variable we are actually pointing at. In the below example n variable takes an additional 4 bytes as a value of type int.

<ins>Example:</ins>
<table>
<tr>
<th>Code</th>
<th>Output</th>
</tr>
<tr>
<td>
<pre>
#include <stdio.h>

int main()
{
    int n = 50;  //create a value of 50 labeled n
    int *p = &n; //declare a variable, p, that has the type of *, a pointer

    printf("---------------\n->Variable n\n---------------\n");
    printf("%p\n", &n); //%p is the format code for an address and & operator get the address of the variable
    printf("%i\n", n);  //print out the value of n
    printf("---------------\n->Variable p\n---------------\n");
    printf("%p\n", p);
    printf("%i\n", *p); //* operator the dereference operator lets us “go to” the location that a pointer is pointing to
}
</pre>
</td>
<td>

```
---------------
->Variable n
---------------
0x7ffd5a2fd1bc
50
---------------
->Variable p
---------------
0x7ffd5a2fd1bc
50
```

</td>
</tr>
</table>

## Additional resources:gift::

Operators in C: https://www.programiz.com/c-programming/c-operators

Markdown cheatsheet https://github.com/tchapi/markdown-cheatsheet

Manual pages for the C: https://manual.cs50.io/

In progress: https://youtu.be/NKTfNv2T0FE?t=4895
