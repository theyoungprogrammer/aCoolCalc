// Calculator porgram 

#include<iostream> 
using namespace std;

// function for different operations 
// Add for two numbers
float addNum(float xA, float yA) {
    return (xA+yA); // xA means xADD
}
//subract two numbers
float subractNum(float xS, float yS) {
    return (xS-yS); // xS means xSubract and so on.....
}
float multiplyNum(float xM, float yM) {
    return (xM*yM); // multiply two number
}
float divideNum(float xD, float yD) {
    return (xD/yD); // divide for two numbers
}

// calc function as per given in the book is the main activity function
void calc() {
    // declaring necessary variables
    int option;    
    float opt1;
    float opt2;
    float result;
    // a menu for the users to perform certain actions
    cout<<"1->Add"<<endl<<"2->Subract"<<endl<<"3->Multiply"<<endl<<"4->Divide"<<endl<<"5->exit"<<endl;
    
// infinte while loop so that it wont exit unless the user wants to 
// user can exit using pressing the option '5' as per the menu
   while (true) {
    cout<<"Select any one from the above options -> ";
    cin>>option; // user-input for the option list 
    // if condition for if user wants to add two digits
    if(option==1) {
        cout<<"enter the first number -> ";
        cin>>opt1;
        cout<<"enter the second number -> ";
        cin>>opt2;
        result = addNum(opt1,opt2);
        cout<<result<<endl;
    }
    // else if for subraction
    else if(option==2) {
        cout<<"enter the first number -> ";
        cin>>opt1;
        cout<<"enter the second number -> ";
        cin>>opt2;
        result = subractNum(opt1,opt2);
        cout<<result<<endl;
    }
    // else if-2 for multiplication
    else if (option==3) {
        cout<<"enter the number -> ";
        cin>>opt1;
        cout<<"enter the second number -> ";
        cin>>opt2;
        result = multiplyNum(opt1,opt2);
        cout<<result<<endl;
    }
    // else if-3 for dividing two numbers    
    else if (option==4) {
        cout<<"enter the first number -> ";
        cin>>opt1;
        cout<<"enter the second number -> ";
        cin>>opt2;
        result = divideNum(opt1,opt2);
        cout<<result<<endl;
    }
    // else statement for getting out of the loop
    else {
        break;
    }
}
   
}
// end of calc() function 

// main function for co-ordination
int main() {
    calc(); // calling the activity function
    return (0);
}
// this program is a problem for 11th std students 
// this program was given by sir micheal gnanaraj
//bye bye
// u can also try switch statement instead of if-elseif-else 
// bye bye
//bye
//
//
//
//
//
//
//
//