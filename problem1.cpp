/*
1. Given two number 'a' and 'b' . you need to convert 'a' inot 'b' by doing bitwise OR
with 'a' i.e 'a|X=b'. count how many X ARE there? (where X>0)
ex: a=2, b=3;
    so there are 2 numbers
    2|1 =3
    2|2=2
    2|3=3
ALGORITHM:
1. from i=1 to b;
2. check if a|i ==b
    count++
3.exit;

to make it optimal: use  bitwise operator;

*/
#include<iostream>
int getvalue(int a, int b){
    int res=1;
    while(a && b){//if a or b becomes 0 just stop it;
        if(a&1==1){
            if(b&1==1){
                res=res*2;
            }
            else{
                return 0;
            }
        }
        a=a>>1;
        b=b>>1;
    }
    return res;
}
int main(){
    int a, b;
    std::cin>>a>>b;
    std::cout<<getvalue(a,b)<<std::endl;
    return 0;
}