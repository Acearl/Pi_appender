#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include "main.h" 

using namespace std;
//have user input numbers to whatever digit of pi it is.
//
vector<int> output = {};
string input = "";
float modulator;
char temp;
int main()
{
    int piNum;
    
    // cout<<M_PI<<endl;
    while(true)
    {
        cout<<"Enter the digit location of pi to be appended on a vector of ints"<<endl;
        cout<<"Ctrl + C to end the program."<<endl;
        std::cin >> input;

        if(input.length() > 1)
        {
            cout<<"Sorry, that input was larger than one character"<<endl;
        }
        else
        {  
            cout<<"Input :"<<input<<endl;
            piNum = calcDigit(stoi(input));
            //std::cout<< "hit2" <<piNum<< endl;
            output.push_back(piNum);
        }
        cout<<"Output :";
        for(int x : output){
            cout<<x;
        }

        cout<<endl;
        //cout<< "hit" <<endl;
    }
    return 0;
}

//credit to gpt on this method of finding the digit of pi
//Prior I was using string conversion with fmod. Along with 
//other but redundent manipulations. But that had poor
//percision and it wasnt getting any values past the 3rd digit.

int calcDigit(int x)
{
    double increasedPi = M_PI * pow(10, x-1);
    
    int target = static_cast<int>(increasedPi) % 10;
    
    return target;
}