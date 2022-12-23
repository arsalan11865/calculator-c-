#include<iostream> 
#include<math.h> 
using namespace std; 
int main () 
{ 
float fistvalue,b,PI; 
int x; 
cout<<endl;
cout<<"=================================\n"; 
cout<<"ID 11865\t Name Arsalan Aziz\n"; 
cout<<"=================================\n";
cout<<"***********\n"; 
cout<<"Operations\t\n"; 
cout<<"************\n"; 
cout<<"1: Division\t\t"<<endl;
cout<<"2: Multiplication\t"<<endl; 
cout<<"3: Subtraction\t\t"<<endl; 
cout<<"4: Addition\t\t"<<endl; 
cout<<"5: Exponent\t\t"<<endl; 
cout<<"6: Square root\t\t"<<endl;
cout<<"7: Sin\t\t"<<endl;
cout<<"8: Cos\t\t"<<endl;
cout<<"9: Tan\t\t"<<endl;
cout<<"10: Inverse of Sin"<<endl;
cout<<"11: Inverse of Cos"<<endl;
cout<<"12: Inverse of Tan"<<endl; 
cout<<"13: Log"<<endl;
cout<<"14: Log with base 10"<<endl;
cout<<"Enter the function that you want to perform : "; 
cin>>x; 
PI=3.14159265; 
switch(x) 
{ 
case 1: 
cout<<"Enter 1st number : "; 
cin>>fistvalue; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Division = "<<fistvalue/b<<endl; 
break; 
case 2: 
cout<<"Enter 1st number : "; 
cin>>fistvalue; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Multiplication = "<<fistvalue*b<<endl; 
break; 
case 3: 
cout<<"Enter 1st number : "; 
cin>>fistvalue; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Subtraction = "<<fistvalue-b<<endl; 
break; 
case 4: 
cout<<"Enter 1st number : "; 
cin>>fistvalue; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Addition = "<<fistvalue+b<<endl; 
break; 
case 5: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Enter the exponent : "; 
cin>>b; 
cout<<"Exponent = "<<pow(fistvalue,b)<<endl; 
break; 
case 6: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Square Root = "<<sqrt(fistvalue)<<endl; 
break; 
case 7: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Sin = "<<sin(fistvalue)<<endl; 
break; 
case 8: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Cos = "<<cos(fistvalue)<<endl; 
break; 
case 9: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Tan = "<<tan(fistvalue)<<endl; 
break; 
case 10: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Inverse of Sin = "<<asin(fistvalue)*180.0/PI<<endl; 
break; 
case 11: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Inverse of Cos = "<<acos(fistvalue)*180.0/PI<<endl; 
break; 
case 12: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Inverse of tan = "<<atan(fistvalue)*180.0/PI<<endl; 
break; 
case 13: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Log = "<<log(fistvalue)<<endl; 
break; 
case 14: 
cout<<"Enter the number : "; 
cin>>fistvalue; 
cout<<"Log with base 10 = "<<log10(fistvalue)<<endl; 
break; 
default: 
cout<<"Wrong Input"<<endl; 
} 
}
