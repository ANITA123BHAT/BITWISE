/*
2.  check ith bit is set or not(set means ith bit from right is 1 or not check) 
ex: n=11 and i=2;
1011 here i=2 2nd bit is 1 so yes; 

*/

#include<iostream>
int main(){
    int n,i;
    std::cin>>n>>i;
    if(n& (1 << (i-1))){
        std::cout<<"yes bit is set"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }
    return 0;
}