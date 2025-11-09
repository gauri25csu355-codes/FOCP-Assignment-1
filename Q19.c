#include<stdio.h>

intmain(){

int searchInsert(int* nums, int numSize, int target) {
    int a = 0;
    int b = numSize - 1;
    int ans = numSize;
    while (a <= b) {
        int c = a + (b-a)/2;
        if (nums[c] >= target) {
            ans = c;
            b = c - 1;
        } else {
            a = c + 1;
        }
    }
    return ans;
}
return0;
}
