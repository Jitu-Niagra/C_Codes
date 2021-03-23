#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    // int x;
    // cout<<"Type a number";
    // cin >> x;
    // cout << "Your number is: " << x;

    // numbers 
    // int 
    int myNum=1000;
    cout <<myNum;
    // float 
    float myFloat=5.75;
    cout <<myFloat;
    // double 
    double myDouble=19.99;
    cout<< myDouble;

    float f1=35e3;
    double d1= 12E4;

    cout << f1;
    cout<<d1;

    // Boolean 
 /*   bool isCodingFun=true;
    bool isFishTasty=false;
    cout << isCodingFun;
    cout << isFishTasty; */

    // char 
char a =65,b=66,c=67;
cout <<a , cout <<b, cout <<c ;

string greeting="Hello";
cout <<greeting;
cout << "\n\n";
cout<<"Opeartors \n";
// arithmetic operator 
// + -/* ++ -- %
// assignment operator 
int aSSignment= 10;
aSSignment += 10;
cout<< aSSignment;
// comparison operator  == >= != > < >= <=
// logical operator  && || !
// bitwise operator

// Strings you have to import the string 
// String concatenation 
cout<<"\n Strings \n\n";
string firstName="\n John";
string lastName="Doe";
string  fullName=firstName+" "+lastName;
cout<<fullName;
string fName=firstName.append(lastName);
cout<<fName;

// Numbers and Strings 
int x=10;
int y=20;
int z=x+y ;//30
cout<<z;

string xe="10";
string ye="20";
string ze=xe+ye; //1020
cout<<ze;

// string length  length/size
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout<< "\n The length of the text string is: " <<txt.length();
cout<< "\n The length of the text string is: " <<txt.size();

// Accessing strings 
string myString="Hello";
cout << myString[0];
cout<< myString[1];
// Changing string characters 
myString[0]='J';
cout<<myString;

// User input strings 
/*string fastName;
cout<<"Type your first name: ";
getline(cin,fastName);
cout << "Your name is: " <<fastName;*/

// Maths 
cout<<"Math \n\n";
// macx and min 
cout<<max(5,10);
cout<<min(20,1);
cout <<sqrt(64);
cout<<round(2.6);
cout<<log(2);

// Booleans 
cout<<"\n\n Booleans \n\n ";
bool isCodingFun=true;
bool isFishTasty=false;
cout<<isCodingFun;
cout<<isFishTasty;

// Boolean expressions 
int bolX=10;
int bolY=9;

cout<<(bolX>bolY);

cout<<(10>9);

cout<<(bolY==10);

// Condtions 
cout<<"\n\n Conditionals \n";
// if else 
if(20>18){
    cout<<"20 is greater than 18 \n\n";

}

int time=20;
if(time <18){
    cout << "Good day.";

}else{
    cout << "Good evening";
}

int dayTime=22;
if(dayTime<10){
    cout<<"Good morning.";
}else if(time <20){
    cout<<"Good day.";
}else{
    cout<<" \n\nGood Evening";
}
// Ternary operator 
string result=(time>18)?"Good day":"Good Evening";
 
int age=20;
string howOld=(age >18) ?"\n\nAdult" :"\n\nToddler";
cout<< howOld;

// Switch Statement
int day=4;
switch(day){
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
    case 4:
        cout <<"Thursday";
        break;
    case 5:
        cout <<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout <<"Sunday";
        break;
    default:
    cout<<"Looking forward to the weekend";
        

}

// While loop
 /*int i=0;
while(i<5){
    cout<< i<<"\n";
    i++;
}

// do while loop 
do{
    cout<< i<<'\n';
    i++;

}
while(i<9);*/


// for loop 
for(int i=0; i<10 ; i++){
    cout <<"\n"<< i<<"\n";
}

for(int i=0;i<=10;i=i+2){
    cout << i <<"\n";
}

/*for(int i=0;i<=10;i=i+1){
    cout << pow("*",2)<<"\n";
}*/
// break and continue statements 


}






