# cvect

Cvect is a C version of pyvect python module which is created for the purpose of simplifying most of the popular vector algebra calculations from basic angle between vectors, projection of one vector over the other to some higher vector calculations like finding the area, distance, volume and centroid of various popular vector shapes and much more. 
Works with both C and C++. 
View the python version [here](https://github.com/ToastCoder/pyvect/)

### Developed by: 
* [Vigneshwar Ravichandar](https://github.com/ToastCoder/) 
* [Moulishankar M R](https://github.com/Moulishankar10) 

### Tested configuration:
* Pop OS 20.10 
* gcc 10.2.0 
* g++ 10.2.0
* GNU Make 4.3 

### Setup: 
1. Download the repository
2. Copy the files inside of src folder to the required destination folder.
3. Make sure the following files and directories exist.
```
    /area
    /cent
    /dist
    /prod
    /section
    /volume
    cvect.h
    cvect.c
``` 
4. #### For C: 
    One can directly use import the cvect library and all of its sub-libraries in the following way 
    ```c
    #include "cvect.h"
    ``` 
   #### For C++:
   One can import the cvect library and all of its sub-libraries using **extern** in the following way 
   ```cpp
   extern "C"
   {
       #include "cvect.h"
   } 
5. Now, the user can access all the functions in the cvect library.

### License:
[MIT](https://choosealicense.com/licenses/mit/)

### Any bugs/suggestions:
Leave a message [here](https://t.me/ToastCoder)
