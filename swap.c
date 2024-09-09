// Simple swap code
// Example programs by Prashant Joshi
// prashant.joshi@leapscale.com
// www.pgjoshi.com

#include <stdio.h>

// A swap function that looks to definitely do the swapping
// but is will only swap the copies of the numbers passed
// in the function swap()
// Swaps copies

int swap(int x, int y)
{
    // A variable to hold the value
    int temp;
    // Make the swap using temp variable
    temp = x;
    x=y;
    y=temp;
    return 0;
}

// A swap function that looks to definitely do the swapping
// and indeed will swap the numbers as it works on the pointers
// of the numbers and thus will be a true swap
// Swaps by using pointers

int swapp(int *px, int *py)
{
    int tmp;
    // See what' happening here and articulate it using the 
    // exact terminoligy
    tmp=*px;
    *px=*py;
    *py=tmp;
    return 0;

}

int main(int argc, char const *argv[])
{
    int a, b;
    a=10;
    b=12;
    // Swap by using the funtion which passes by value
    swap(a, b);
    printf("Value of a and b is, %d %d\n", a, b);
    // Swap by using the pointers
    swapp(&a, &b);
    printf("Value of a and b is, %d %d\n", a, b);
    return 0;
}
