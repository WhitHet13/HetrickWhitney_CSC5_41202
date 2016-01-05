/* 
    Author: Whitney Hetrick
    Created on January 5, 2016, 9:30 AM
    Purpose: Calculate Paycheck, Straight Time
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
    float payRate=1e1f;//Pay rate in $'s/hr
    unsigned char hrsWrkd=40;  //Hours worked in (hrs)
  
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd; //Pay check ($'s)
    
    //Output results
    cout<< "Pay Rate     = $" <<payRate<< "'s/h"<<endl;
    cout<< "Hours Worked = " << static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $" <<payChk<<endl;
  
    //Exit stage right
    return 0;
}

