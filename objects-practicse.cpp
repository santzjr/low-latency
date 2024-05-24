#include <iostream>
#include <string>
using namespace std 


class MyClass {
  public:
    void myMethod() {
      cout <<  "Hello World!";
    }
    int myNum;
    string myString;
};

class Car {
  public:
    string brand; 
    string model;
    int year;
}

int main() {
  
  MyClass myObj;
  myObj.myNum = 15;
  myObj.myString= "Some text";
  cout << myObj.num << "\n";

  void myObj::myMethod(){
     cout << "Hello World!"

  Car carObj;
  carObj.brand = "Ford";
  carObj.model = "Mustang";
  carObj.year = 1969;

  cout << myObj.myString; 
  cout << carObj.brand
  
  return 0;  
}
