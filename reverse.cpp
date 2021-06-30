#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

public class solution {
    public int reverseBits(int n) {
       int result = 0;
       for(int i=0; i<32;i++)
       {
        result <<= 1;
        if ((n & 1) == 1)
           result++;
           n >>= 1;
        }
        return result;
        }

};

