#include <iostream>
#include <string>
using namespace std;

// function with one parameter
// string greeting(string username){
    // cout << "Hello, " << username << endl;

//     return "";
// }
// function with 2 parameters
// string greet(string hisname, string password){
    // cout << "Hi" << "yourpasswordis" << hisname << password << endl;
    // return (hisname, password);
// }

// classwork
int addNumbers(int num1, int num2){
    return num1 + num2;
}

int main(){
    // cout << "Hello Earth" << endl;
    // Primitive DataType
        // string eg "abel" or "i am a programmer"
        // int  eg 123 or 7, 8, 10
        // double eg 3.127623627362
        // float eg 4.2
        // boolean eg true or false
        // char eg 'A', 'B'
    

    // Declaration of variable
    // int num = 12;
    // float numOne = 12.15;
    // bool isRegistered = true;
    // double score = 75.2637237363732;
    // string persons = "Osinachi";
    // char grade = 'A';

    // cout << "my number is " << num << endl;

    // string answer = greeting("Cybergate");
    // answer = greeting("Osinachi");
    // string nameis = greet("Osinachi");
    // string passwordis = greet("Osinachi", "12345");
    // cout << passwordis << endl;

    // run addNumbers
    // int result = addNumbers(3,7);

    // cout << "The Sum of " << result.num1 << " and " << result.num2 << " is " << result << endl;

    
    // cout << "The result is " << result << endl; // concatenatio
    int Sales = 95000;
    int Tax = 4;
    int CountyTax = 2;
    
    // Logic statement
    // int payableTax = (Sales * Tax) / 100;
    // int county = (Sales * CountyTax) / 100;

    // 20% of 70
    // 70% of 20

    // cout << "Payable Tax is $" << payableTax << endl;
    // cout << "County Tax is $" << county << endl;
    // cout << "Total Tax is $" << payableTax + county << endl;
    // cout << "Balance is $" << Sales - (payableTax + county) << endl;

    // ######################  LOOP ####################
    // For, while, do while
    // for (int i = 1; i <= 10; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    // classwork: "Write a program that will display i love c++ 20 times";
    //  string c = love ("i love c++");
    //  for (int c = 1; c <= 20; c++)
    //  {
    //     /* code */
    //     cout << c << endl;
    //  }
    string love = "I love C++";
    for(int i = 1; i <= 20; i++){
        // cout << i << ". I love C++" << endl;
        cout << i << " " << love << endl;
    }

    int i = 0;
    while(i < 10){
        cout << i << endl;
        i++;
    }

    
    
    
    return 0;
}

// for loop
// while 
// do while
// for (int i = 0; i < 10; i++){
//     cout << i << " " << endl;

//     return true;
// }