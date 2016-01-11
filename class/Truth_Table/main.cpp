/* 
    File:   main.cpp
    Author: Whitney Hetrick
    Created on January 11, 2016, 09:00 AM
    Purpose: Display Truth Table and compare swaps 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here 
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    int a=2,b=3,temp;
    
    
    //Create Heading
    cout<< "X Y !X !Y X&&Y X||Y X^Y (x^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"      ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Second row
    x=true; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"      ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Third Row
    x=false; y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"      ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
   //Fourth row
    x=false; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"      ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //swap using temp
    cout<<"Swap using temp"<<endl;
    cout<<temp=a<<"temp=a"<<endl;
    cout<<a=b<<"a=b"<<endl;
    cout<<b=temp<<"b=temp"<<endl;
   
    
    //swap using exclusive or operator
    cout<<"Swap using exclusive or operator"<<endl;
    cout<<a =a^b<<endl;
    cout<<b=(a^b)^b<<"b =a"<<endl;
    cout<<a=(a^b)^a<<"a =b"<<endl;
    
    //Calculate or map inputs to outputs
    
    //Output results
  
  
    //Exit stage right
    return 0;
}

