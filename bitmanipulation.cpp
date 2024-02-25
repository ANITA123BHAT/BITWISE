/*
MSB(Most Segnificant Bit ) &  LSB(Least Significant Bit)
NOTE:
    The first byte in the binary sequence is considered the most significant because it has the largest value.
    The hexadecimal number reflects this by listing the MSB first (8F), followed by the LSB (9D). 
    The hexadecimal value, like the binary sequence, is considered big-endian format.
    However, if the hexadecimal value is listed as 9D8F, the order is little-endian because the LSB is listed first.

    Both MSB and LSB can play a role when transmitting and storing data.
    For example, if the bits are sent serially over the network -- one bit at a time -- they are typically transmitted in one of two ways: 
    MSB first or LSB first.
    A bit is designated as most significant because it has the greatest place value in the binary number, 
    so the least significant bit lies at the other end. 
    This is important information to have when receiving or retrieving data because it tells a program how to interpret the binary data.



BIT MANIPULATION:
1.Binary Left and Right Shift:
N=22;
binary representation= 0   001011   0
                       MSB          LSB     

1.23=(10111)
    =1*2^4 +0*2^3+1*2^2 +1*2^1 +1*2^0

There are 6 operator:
 1.NOT (~)
 2.AND(&)
 3.OR(|)
 4.XOR(^)
 5left shift <<
 6. right shift >>

1. NOT(~) unary operator : use with only one operand;
6=(0110)
~6=(1001)
2. AND(&) :it is a binary operator
        1&1=1
        1&0=0
        0&1=0
        0&0=0
3.OR(|): it is binary operator;
        1|1=1
        1|0=1
        0|1=1
        0|0=0

4. XOR(^) :it is binary operator:
    1^1=0;
    1^0=1;
    0^1=1;
    0^0=0
5.Left shift( << ) is a "multiplication of 2"
 5=(00000101)
    5 << 1  = 00001010=10
6. right shift >> "dividing by 2" 
    5 >>1
    (00000101)== (00000010)  =2

 */


