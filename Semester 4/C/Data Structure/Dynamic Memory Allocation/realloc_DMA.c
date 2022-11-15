#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int *ptr = NULL;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter values \n");
    for (i = 0; i < n; i++)
    {

        printf("Enter values %d : ", i);
        scanf("%d", (ptr + i));
    }
    printf("printing values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
        /* * indirection operator */
    }
    /* making the memory free */
    printf("\nEnter new size: ");
    scanf("%d", &n);
    int *ptr1 = (int *)realloc(ptr, sizeof(int) * n);
    printf("\nprinting values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr1 + i));
        /* * indirection operator */
    }
    free(ptr1);

    /*
        Output
        Enter value of n: 5
        Enter values
        Enter values 0 : 1
        Enter values 1 : 2
        Enter values 2 : 3
        Enter values 3 : 4
        Enter values 4 : 5
        printing values: 1 2 3 4 5
     */
    /***
     * Added code
# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
#
# On branch main
# Your branch is up to date with 'origin/main'.
#
# Changes to be committed:
#	renamed:    Semester 4/OOPS/Abstract Class/abstract.cpp -> Semester 4/C++/OOPS/Abstract Class/abstract.cpp
#	renamed:    Semester 4/OOPS/Access Modifier/AccessModifier.cpp -> Semester 4/C++/OOPS/Access Modifier/AccessModifier.cpp
#	renamed:    Semester 4/Data Structure/C/C Basics/Array/Sqrt.cpp -> Semester 4/C++/OOPS/Class/Sqrt.cpp
#	renamed:    Semester 4/OOPS/Constructors/Default Constructor.cpp -> Semester 4/C++/OOPS/Constructors/Default Constructor.cpp
#	renamed:    Semester 4/OOPS/Constructors/parameterized constructors.cpp -> Semester 4/C++/OOPS/Constructors/parameterized constructors.cpp
#	renamed:    Semester 4/OOPS/Home Work/Employee/Employee.cpp -> Semester 4/C++/OOPS/Home Work/Employee/Employee.cpp
#	renamed:    Semester 4/OOPS/Inheritence/Hierarchical/intro.cpp -> Semester 4/C++/OOPS/Inheritence/Hierarchical/intro.cpp
#	renamed:    Semester 4/OOPS/Inheritence/Hybrid/intro.cpp -> Semester 4/C++/OOPS/Inheritence/Hybrid/intro.cpp
#	renamed:    Semester 4/OOPS/Inheritence/Multi-Level/intro.cpp -> Semester 4/C++/OOPS/Inheritence/Multi-Level/intro.cpp
#	renamed:    Semester 4/OOPS/Inheritence/Multiply/intro.cpp -> Semester 4/C++/OOPS/Inheritence/Multiply/intro.cpp
#	renamed:    Semester 4/OOPS/Inheritence/Single Level/intro.cpp -> Semester 4/C++/OOPS/Inheritence/Single Level/intro.cpp
#	renamed:    Semester 4/OOPS/Inheritence/SingleLevel.cpp -> Semester 4/C++/OOPS/Inheritence/SingleLevel.cpp
#	renamed:    Semester 4/OOPS/Inline Function/inline_intro.cpp -> Semester 4/C++/OOPS/Inline Function/inline_intro.cpp
#	renamed:    Semester 4/OOPS/Key Word/this_keyword_intro.cpp -> Semester 4/C++/OOPS/Key Word/this_keyword_intro.cpp
#	renamed:    Semester 4/OOPS/Member Funtion & Data Member/DataMember&MemberFunction.cpp -> Semester 4/C++/OOPS/Member Funtion & Data Member/DataMember&MemberFunction.cpp
#	renamed:    Semester 4/OOPS/Operator Overloading/Binary_Operator_Overloading.cpp -> Semester 4/C++/OOPS/Operator Overloading/Binary_Operator_Overloading.cpp
#	renamed:    Semester 4/OOPS/Operator Overloading/operator_overloading.cpp -> Semester 4/C++/OOPS/Operator Overloading/operator_overloading.cpp
#	renamed:    Semester 4/OOPS/Parameter Passing/ParameterPassing..cpp -> Semester 4/C++/OOPS/Parameter Passing/ParameterPassing..cpp
#	renamed:    Semester 4/OOPS/Scope Resolution/Function_Scope.cpp -> Semester 4/C++/OOPS/Scope Resolution/Function_Scope.cpp
#	renamed:    Semester 4/OOPS/Scope Resolution/scope_resolution.cpp -> Semester 4/C++/OOPS/Scope Resolution/scope_resolution.cpp
#	renamed:    Semester 4/OOPS/Structure/Structure.cpp -> Semester 4/C++/OOPS/Structure/Structure.cpp
#	renamed:    Semester 4/OOPS/Virtual Class/virtual_class.cpp -> Semester 4/C++/OOPS/Virtual Class/virtual_class.cpp
#	renamed:    Semester 4/OOPS/Virtual Funtion/virtual_function.cpp -> Semester 4/C++/OOPS/Virtual Funtion/virtual_function.cpp
#	renamed:    Semester 4/Data Structure/C/2D Array/lowerTraingle.c -> Semester 4/C/C Basics/2D Array/lowerTraingle.c
#	renamed:    Semester 4/Data Structure/C/2D Array/upperTriangle.c -> Semester 4/C/C Basics/2D Array/upperTriangle.c
#	renamed:    Semester 4/OOPS/Class/Sqrt.cpp -> Semester 4/C/C Basics/Array copy/Sqrt.cpp
#	renamed:    Semester 4/Data Structure/C/C Basics/Array/sumOfDiagonal.c -> Semester 4/C/C Basics/Array copy/sumOfDiagonal.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Array/transposeOfAmatrix.c -> Semester 4/C/C Basics/Array copy/transposeOfAmatrix.c
#	new file:   Semester 4/C/C Basics/Array/Sqrt.cpp
#	new file:   Semester 4/C/C Basics/Array/sumOfDiagonal.c
#	new file:   Semester 4/C/C Basics/Array/transposeOfAmatrix.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/armstrongNumber.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/armstrongNumber.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/countDigits.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/countDigits.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/firstDigit.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/firstDigit.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/maximumNumber.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/maximumNumber.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/middleDigit.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/middleDigit.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/numberOfFactors.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/numberOfFactors.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/palandromeDigit.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/palandromeDigit.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/reverse.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/reverse.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/smallNumber.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/smallNumber.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/strong.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/strong.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/strong1.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/strong1.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/sumDigits.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/sumDigits.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/sumStartEnd.c -> Semester 4/C/C Basics/C Basics/Operators/Digit Based/sumStartEnd.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/armstrongNumber.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/armstrongNumber.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/countDigits.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/countDigits.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/firstDigit.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/firstDigit.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/maximumNumber.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/maximumNumber.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/numberOfFactors.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/numberOfFactors.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/reverse.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/reverse.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/smallNumber.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/smallNumber.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/strong.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/strong.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/strong1.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/strong1.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/C Basics/Operators/Digit Based/sumDigits.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/sumDigits.c
#	renamed:    Semester 4/Data Structure/C/C Basics/Operators/Digit Based/sumStartEnd.c -> Semester 4/C/C Basics/Practice Problems/C Basics/Operators/Digit Based/sumStartEnd.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/Gross.c -> Semester 4/C/C Basics/Practice Problems/Gross.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/NumberSwap_1.c -> Semester 4/C/C Basics/Practice Problems/NumberSwap_1.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/Number_Swap_2.c -> Semester 4/C/C Basics/Practice Problems/Number_Swap_2.c
#	renamed:    Semester 4/Data Structure/C/Practice Problems/conversion.c -> Semester 4/C/C Basics/Practice Problems/conversion.c
#	renamed:    Semester 4/Data Structure/C/Dynamic Memory Allocation/calloc_DMA.c -> Semester 4/C/Data Structure/Dynamic Memory Allocation/calloc_DMA.c
#	renamed:    Semester 4/Data Structure/C/Dynamic Memory Allocation/malloc_DMA.c -> Semester 4/C/Data Structure/Dynamic Memory Allocation/malloc_DMA.c
#	renamed:    Semester 4/Data Structure/C/Dynamic Memory Allocation/read.md -> Semester 4/C/Data Structure/Dynamic Memory Allocation/read.md
#	new file:   Semester 4/C/Data Structure/Dynamic Memory Allocation/realloc_DMA.c
#	new file:   Semester 4/C/Data Structure/Dynamic Memory Allocation/realloc_DMA.exe
#	renamed:    Semester 4/Data Structure/C/Linked List/single_Linked_List.c -> Semester 4/C/Data Structure/Linked List/single_Linked_List.c
#	renamed:    Semester 4/Data Structure/C/Queue/QueueDMA.c -> Semester 4/C/Data Structure/Queue/QueueDMA.c
#	renamed:    Semester 4/Data Structure/C/Queue/circularQueue.c -> Semester 4/C/Data Structure/Queue/circularQueue.c
#	renamed:    Semester 4/Data Structure/C/Queue/queue.c -> Semester 4/C/Data Structure/Queue/queue.c
#	renamed:    Semester 4/Data Structure/Sorting/insertionsort.c -> Semester 4/C/Data Structure/Sorting/insertionsort.c
#	renamed:    Semester 4/Data Structure/Sorting/mergeSort.c -> Semester 4/C/Data Structure/Sorting/mergeSort.c
#	renamed:    Semester 4/Data Structure/Sorting/quickSort.c -> Semester 4/C/Data Structure/Sorting/quickSort.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/binarySearchStack.c -> Semester 4/C/Data Structure/Stack/Array Based/binarySearchStack.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/intro.c -> Semester 4/C/Data Structure/Stack/Array Based/intro.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/linearSeach.c -> Semester 4/C/Data Structure/Stack/Array Based/linearSeach.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/stack.c -> Semester 4/C/Data Structure/Stack/Array Based/stack.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/sumOfEvenElements.c -> Semester 4/C/Data Structure/Stack/Array Based/sumOfEvenElements.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/sumOfOddElemetns.c -> Semester 4/C/Data Structure/Stack/Array Based/sumOfOddElemetns.c
#	renamed:    Semester 4/Data Structure/C/Stack/Array Based/sumOfStackElements.c -> Semester 4/C/Data Structure/Stack/Array Based/sumOfStackElements.c
#	new file:   Semester 4/C/Data Structure/Structure/structure.c
#

     *
     *
    */
    return 0;
}