#include<iostream>
using namespace std;

// functions--->>?
int add(int a, int b){
    int c = a+b;
    return c;
}
int main(){
//     cout<<"Hello World\n";  // We use cout<<  for any output
//     int n=9,a=5; 
//     cout<<"Marks obtained is :"<<n<<" and passing marks is : "<<a<<endl;

//     int x , y;
//     cout<<"Enter the first number: "<<endl; // endl is used for the next line
//     cin>>x;

//     cout<<"Enter the second number: "<<endl;
//     cin>>y;
    
//     cout<<"Sum of x and y is : "<<x+y;

//     int j;
//     cout<<"Enter your age: "<<endl;
//     cin>>j;

// // if else syntax------>>
//     if(j<18){
//         cout<<"You can vote";
//     }
//     else if(j==18){
//         cout<<"You can vote";
//     }
//     else{
//         cout<<"You are eligible for voting";
//     }
// conversion of string into integer ------------->>
// we have to include "include<"string>"
// Use stoi()  function

// Conversion of integer into string ------>>
// we have to include "include<cstdlib>"
// Use atoi() function

// We can slicing of any stirng---->>
//  we have to include "include<string>"
//  Use x.substr(2,5);

// switch case ----->
//     switch(j)
//     {
//     case 18:
//         cout<<"You are 18 years old";
//         break;
//     case 12:
//         cout<<"you are 12 years old";
//         break;
//     default:
//     cout<<"You are neither 12 nor 18";
//         break;
//     }

// while loop _---->
// int a,i;
// i=1;
// cout<<"Enter any number: ";
// cin>>a;
// while(i!=11){
//     cout<<a<<" X "<<i<<" = "<<a*i<<endl;
//     i=i+1;
// }

// do while loop----->
// int a;
// do{
//     cin>>a;
//     if(a==1){
//         cout<<"You select 1"<<endl;
//     }
//     else if(a==2){
//         cout<<"YOu select 2"<<endl;
//     }
//     else if(a==3){
//         cout<<"You selsct 3"<<endl;
//     }
// }while(a!=0);


// for loop ---->>.

// for(int i=0;i!=100;i++){
    // cout<<i<<endl;
// }
// function-->>
// cout<<add(12,54);


// array--->>

int arr[30]={3,7,4};
// cout<<arr[1];
int marks[4];
for (int i = 0; i < 4; i++)
{
    cin>>marks[i];
}
for (int i = 1; i <= 4; i++)
{
    cout<<"Marks of student "<<i<<" is: "<<marks[i]<<endl;
}


return 0;
}