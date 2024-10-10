#include <iostream>
using namespace std;

string FizzBuzz(int n){
for(int i=1; i<=n; i++){

if(i%3 == 0 && i%5 == 0){
	return("FizzBuzz");
}
if(i%3 == 0){
	return("Fizz");
}
if(i%5 == 0){
	return("Buzz");
}

}
}
