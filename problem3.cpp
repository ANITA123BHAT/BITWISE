/*
how many bits you need to represent a number 'n' ?
ex: n=11;
1011 =4 bitneeded
n=105
1101001 = we need 7 bit;
 so logic :
    int countdigits(int n){
        int count=0;
        while(n>0){
            ++count;
            n/=2;
        }
        return count;
    }
    O(logm) time; m is number of digits in num;

IN order to make it simple just 
decimal : floor(log10(n)+1)
binary : floor(log2(n)+1)

4.Get bit at given position;
5. set bit  at a position
*/
#include<iostream>

/*Get bit at given position*/
int getbit(int n, int pos){
    return ((n& (1 << pos))!=0);
}

/*set bit  at a position*/
int setbit(int n, int pos){
    return (n | (1<<pos));
}
/*clear bit at given position*/
int clearbit(int n,int pos){
    int mask=~(1 << pos);
    return (n & mask);
}
int main(){
    std::cout<<getbit(5,2)<<std::endl;
    std::cout<<setbit(5,1)<<std::endl;
    std::cout<<clearbit(5,2)<<std::endl;
}