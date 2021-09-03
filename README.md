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
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  ├── ______.c<br/>
  └── ______.c<br/>
  </p>
    </details>
Week 4 Memory<br/>
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
### Pointers :sparkles:
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

Run practice code: week2/Practice/arraysNpointers for more...

## Array of Arrays :pencil:

```string words[2]```<br/>

```words[0] = "HI!"```<br/>
```words[1] = "BYE"```<br/>

see week2/Practice/arrayOfarrays for example



## Additional resources:gift::

Operators in C: https://www.programiz.com/c-programming/c-operators

Markdown cheatsheet https://github.com/tchapi/markdown-cheatsheet

Manual pages for the C: https://manual.cs50.io/

In progress: https://youtu.be/gR6nycuZKlM
