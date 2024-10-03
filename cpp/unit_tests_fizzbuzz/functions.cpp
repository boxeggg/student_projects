#include <iostream>
using namespace std;

string FizzBuzz(int n){
for(int i=1; i<=n; i++){

if(i%3 == 0 && i%5 == 0){
std::cout<<"Fizz Buzz"<<std::endl;
}
if(i%3 == 0){
std::cout<<"Fizz"<<std::endl;
}
if(i%5 == 0){
std::cout<<"Buzz"<<std::endl;
}

}
}
