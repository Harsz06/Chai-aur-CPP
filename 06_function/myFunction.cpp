// returnType functionName(parameters){
//     // function body
// }
// void -> empty in C++.

#include <iostream>
using namespace std;

//declaration of function
void serveChai(int cups);

void makeChai(){
    cout << "Boiling water, adding tea leaves, straining..." << '\n';
}

int checkTemperture(int temperature){
    return temperature;
}

void serveChai(string teaType = "Masala Tea"){
    int cups = 4;
    cout << "Serving " << teaType << endl;
}

int main(){
    int temp = checkTemperture(50);
    // std::cout << temp << '\n' << std::endl;

    // makeChai(); //calling a function

    // serveChai(3);

    serveChai();
    return 0;
}

//defination of function
void serveChai(int cups){
    cout << "Serving " << cups << " of chai" << endl;
}
