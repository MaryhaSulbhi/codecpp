//boilerplate 
//it is a type of template code,which is used to write again and again whenever we have to write any program
//#include<iostream>//these are preprocessor directives means which are used to write any code in our program.all preprocessor directives starts with #
//using namespace std;
//int main()//it is the starting of our execution of function
//{
  //  return 0;//it indicate the last point of our code
//}//these brackets are use to determine the block of code
 //#include<iostream>
 // using namespace std;//
 //int main()
 //{
 //    cout<<"hello world";
 //    return 0;

 //}
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     cout<< "****\n";
//     cout << "***\n";
//     cout << "**\n";
//     cout << "*\n";
//     return 0;
//  }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int b=5;
//     cout <<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age=25;
//     int marks=45;
//     cout<<"size of int="<<sizeof(int)<<endl;        #####sizeof is used to find the size of data type in bytes################
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age=22;
//     char grade='A';
//     float gpa=3.5;
//     bool isstudent=true;
    
//     cout<<"size of int="<<sizeof(int)<<endl;
//     cout<<"size of char="<<sizeof(char)<<endl;
//     cout<<"size of float="<<sizeof(float)<<endl;
//     cout<<"size of bool="<<sizeof(bool)<<endl;
//     return 0;


// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age=22;
//     char grade='A';
//     float gpa=3.5;
//     bool isstudent=true;

//     cout<<age<<" "<<grade<<" "<<gpa<<" "<<isstudent<<" "<<endl;              #########it prints all the values in a single line##########
//     cout<<"size of int="<<sizeof(int)<<endl;
//     cout<<"size of char="<<sizeof(char)<<endl;
//     cout<<"size of float="<<sizeof(float)<<endl;
//     cout<<"size of bool="<<sizeof(bool)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     float PI1=3.1459265359;
//     double PI2=3.1459265359;                                                 ############float and double are used to store decimal values##########

//     cout<<"PI="<<PI1<<endl;
//     cout<<"PI2="<<PI2<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int age=22;
//   char grade='a';
//   float PI=3.1459265359;
//   bool ishello=false;                                                         ##########bool is used to store true or false values##########
//   double marks=334.7;
//   cout<<"marks="<<marks;
//   cout<<"\n"<<ishello;
//   cout<<"\nPI="<<PI;
//   cout<<"\nage="<<sizeof(age);
//   cout<<"\ngrade="<<grade;
//   int value=grade;
//   int newMarks=(int)marks;  ###########type casting is used to convert one data type to another##########
//   cout<<"\nnewMarks="<<newMarks;
//   cout<<"\nvalue="<<value;
//   return 0;

// };
// ###########################################################


// ############# taking an input from user####################

// #include<iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"enter the age=";
//   cin>>age;  #########cin is used to take input from user##########
//   cout<<"your age is :"<<age;
//   return 0;
// }
// ############################################


// ###############different types of operators#####################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int a=50,b=20;
//   cout<<"sum="<<a+b;
//   cout<<"\nsubtraction="<<a-b;
//   cout<<"\nmultiplication="<<a*b;
//   cout<<"\ndivision="<<a/b;
//   cout<<"\nmodulus="<<a%b;
//   cout<<"\npre increment="<<++a;
//   cout<<"\npost increment="<<a++;
//   cout<<"\npre decrement="<<--a;
//   cout<<"\npost decrement="<<a--;
//   cout<<"\nbitwise and="<< (a&b);
//   cout<<"\nbitwise or="<< (a|b);
//   cout<<"\nbitwise xor="<< (a^b);
//   cout<<"\nleft shift="<< (a<<b);
//   cout<<"\nright shift="<< (a>>b);
//     return 0; 
// }

// ############# taking input from user and printing it ######################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"enter the age=";
//   cin>>age;
//   cout<<"your age is :"<<age;
//   int marks;
//   cout<<"\nentre your marks=";
//   cin>>marks;
//   cout<<"your marks are:"<<marks;
//   return 0;
// }



// ############# ##########   ######## elif statement#############  #############  #################

// ############greater than two numbers#########################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int a=20;
//   int b=50;
//   cout<<"the first number a="<<a;
//   cout<<" \nthe second number b="<<b;
//   if(a>b){
//     cout<<"/na is greater then b";
//   }
//   else if(b>a){
//     cout<<"\nb is greater then a";
  
//     }else{
//       cout<<"\nboth are equal";
//     }
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=0;
//   if(n>0){
//     cout<<" positive number";
//   }else if(n<0){
//     cout<<"number is negative";
//   }else{
//     cout<<"number is zero";
//   }
//   return 0;
// }

// ############# leap year or not ####################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int year;
//   cout<<"enter the year=";
//   cin>>year;
//   if(year%4==0 && year%100!=0 || year%400==0){
//     cout<<"year is leap year";
//   }else{
//     cout<<"year is not leap year is not leap year";
//   }
//   return 0;
// }


// #############voting eligiblity  ################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"enter your age=";
//   cin>>age;
//   if(age>=18){
//     cout<<"you are eligible to vote";
//   }else{
//     cout<<"you are not eligible to vote";
//   }
//   return 0;
// }
// ########### even or not###########
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"enter the number=";
//   cin>>n;
//   if(n%2==0){
//     cout<<"number is even";
//   }else{
//     cout<<"number is odd";
//   }
  
//   return 0;
// }

// ############ greater number by user input ###############
// #include<iostream>
// using namespace std;
// int main()
// {
//   int a,b;
//   cout<<"enter the value of a=";
//   cin>>a;
//   cout<<"enter the value of b=";
//   cin>>b;
//   if(a>b){
//     cout<<"a is greater than b";
//   }else if(b>a){
//     cout<<"b is greater than a";
//   }else{
//     cout<<"both are equal";
//   }
//     return 0;
// }
// #################### grade system ###################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int marks;
//   cout<<"enter your marks:";
//   cin>>marks;
//   if(marks>=90){
//     cout<<"grade A+";
//   }
//     else if(marks>=80){
//       cout<<"grade A";
//     }
//     else if(marks>=70){
//       cout<<"grade B+";
//     }
//     else if(marks>=60){
//       cout<<"grade B";
//     }
//     else if(marks>=50){
//       cout<<"grade C+";
//     }
//     else{
//       cout<<"FAIL";
//     }
//       return 0;
//     }

// ################# lower case and upper case letter ###################
// #include<iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   cout<<"enter the character=";
//   cin>>ch;
//   if(ch>='a'&& ch<='z')
//   {
//     cout<<"lower case letter";

//   }
//   else if(ch>='A'&& ch<='Z')
//   {
//     cout<<"upper case letter";
//     }
//   else if(ch>='0'&& ch<='9')
//   {
//     cout<<"digit";
//   }
//   else{
//     cout<<"special character";
//   }
//   return 0;
// }

// #############conditionl operator##########
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  cout<<"enter the number=";
//  cin>>n;
//  cout<<(n>=0?"positive number":"negative number");
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int count=1;  
//   while(count <=5)
//   {
//     cout<<count<< " ";
//     count++;  //for finite loop
//   }
//   cout<<endl;
//   return 0;
// }
// ################# 
// #include<iostream>
// using namespace std;
// int main()
// {
//   // int n=50;
//   int count=1;
//   while(count<=50)
//   {
//     cout<< count <<" ";
//     count++;
//   }
//   return 0;
// }
// ###########for loop################

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=6;
//   for(int i=0;i<=n/2;i++)
//   {
//     cout<<i<<" ";
//   }
//   return 0;
// }


// ###########sum of num from 1 to n  ###########

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=5;
//   int sum =0;
//   for(int i=1;i<=n;i++)
//   {
//     sum=sum+i;
//   }
//   cout<<sum ;
//   return 0;
// }

// ############sum of odd num######
// #include<iostream>
// using namespace std;
// int main()
// {
//   int x;
//   cout<<"enter the value of x=";
//   cin>>x;
//   for (int i=1;i<=x;i++)
//   {int m=10;
//     for(int i=1;i<=m;i++){
      
//   cout<<"*****"<<endl;      //#### for multiple lines we use endl here
//     }
//   cout<<endl;
//   }

//   // for(int i=1;i<=x;i++){
//   //   cout<<"*"; // #### here we don't use endl because we want to print in same line
//   // }
//   // cout<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   for(int i=1;i<=5;i++){
//     int m=10;
//     for(int j=1;j<=m;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   for(int i=1;i<=5;i++){
//     int m=5;
//     for(int i=1;i<=m;i++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
  // cout<<"hello "<<"maryha "<<"byy";
  // float a=3.14;
  // int newa=(int)a;
  // cout<<newa;

  // ###########basic calculator#################################3
// int a,b;
// char c;
// cout<<"enter the first number=";
// cin>>a;
// cout<<"enter the opertor (+,-,/,%,*)=";
// cin>>c;
// cout<<"enter the second number=";
// cin>>b;
// if(c=='+'){
//   cout<<"sum="<<a+b;
// }
// else if(c=='-'){
//   cout<<"subtraction="<<a-b;
// }
// else if(c=='*'){
//   cout<<"multiplication="<<a*b;
// }
// else if(c=='/'){
//   cout<<"division="<<a/b;
// }
// else if(c=='%'){
//   cout<<"modulus="<<a%b;
// }
// else{
//   cout<<"invalid operator";
// }
//   return 0;
// }


// ################PATTERN PRINTING###########################################################
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n,i,j;
//   cout<<"enter the number you want to print the pattern=";
//   cin>>n;
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++)
//   {
//     cout<<"*"<<" "; 
//   }
//   cout<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=4;
//   for(int i=0;i<n;i++){
//     char ch='A';
//     for(int j=0;j<n;j++){
//       cout<<ch<<" ";
//       ch=ch+1;

//     }
//     cout<<endl;
//   }
//   return 0;
// }



// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=4;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }

//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=4;
//   int num=1;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<num<<" ";
//       num++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #################  lower Half Triangle  #############

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=4;
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }

//   return 0;
// }


// ############# Right Half Triangle ###############

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=4;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n=5;
//   int num=1;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//       cout<<num<<" ";
//       num++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int n=5;
//   for(int i=0;i<n; i++){
//     for(int j=1; j<=i+1; j++){
//       cout<<j<<" ";

//     }
//     cout<<endl;
//   }
//   return 0 ;
// }

// ###########Reverse/ backward Right Half Triangle ##########
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n=5;
//   for(int i=n; i>0; i--){
//    cout<<i<<endl;
//   }
//   for(int i=0;i<n; i++){
//     for(int j=i+1; j>0; j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }



// ####################################   Functions    ##############################
// syntax of function
// return_type function_name(parameter_list){               #########[ function may or may not contain the parameter list ]#####
//   // function body;
//   return value;
// }

// we can call the function by the function name

// #include<iostream>
// using namespace std;
// // function to add two numbers

// int sum(int a, int b)
// {
//   int Sum=a+b;  
//   return Sum;  // return the sum of a and b
// }
// int main()
// {
//   int num1 , num2;
//   cout<<"Enter tyhe first number: ";
//   cin>>num1;
//   cout<<"Enter the second number: ";
//   cin>>num2;

//   int result = sum(num1, num2);  // call the function 
//   cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<result<<endl;  

//   return 0;
// }


// #include<iostream>
// using namespace std;

//   int minOfTwoNumbers(int a, int b)
//   {
//     return (a < b) ? a : b;  
//   }
// int main()
// {
//  int a, b;
//  cout<<"enter the two numbers:\n";
//  cout<<"enter the fisrt number: ";
//  cin>>a;
//   cout<<"enter the second number: ";
//   cin>>b;
//  int minNumber = minOfTwoNumbers(a, b);  
//  cout<<"minimum number is ="<<minNumber<<endl;




//  now by using the return we can return the value of minimum number from the function to the main function and then we can print it in the main function
// int minOfTwoNumber(int a, int b)   //######## (int a, int b) is a5e the parameters
// {
//   if(a<b)
//   {
//     return a;
//   }
//   else{
//     return b;
//   }
//   }

// int main()
// {
//   int minNUmber = minOfTwoNumber(10,20);  //#########(10,20) is the argument passed to the function 
//   cout<<"minimum number is: "<<minNUmber<<endl;
// return 0;
// }

// Sum of numbers 1 to N using function

// #include<iostream>
// using namespace std;
// int sumOfNumbers(int N)
// {
//   int sum =0;
//   for(int i=1 ; i<=N; i++)
//   {
//     sum += i;
//   }
//   return sum;  //return the value of sum
// }
// int main()
// {
//   int N;
//   cout<<"Enter the value of N:";
//   cin>>N;
//   int Sum = sumOfNumbers(N);
//   cout<<"Sum of the N numbers are :"<<Sum<<endl;
//   return 0;
// }


// #include<iostream>
// using namespace std;
// //factorial of N numbers using function 

// int factorialN(int N)
// {
//   int fact =1;
//   for(int i=1 ; i<=N ; i++)
//   {
//     fact*=i;
//   }
//   return fact;
// }
// int main()
// {
//   int N;
//   cout<<"Enter the value of N :";
//   cin>>N;
//   int factorial = factorialN(N);
//   cout<<" factorial of"<<N<<"is :"<<factorial<<endl;
//   return 0;
// }

// //### pass by value in function   #########
// #include<iostream>
// using namespace std;
// int sum(int a, int b)
// {
//   a=a+10;
//   b=b+10;
//   return a+b;
// }
//  int main()
//  {
//   int a=5 , b=10;
//   cout<<sum(a,b)<<endl; // it gives the value of a and b as 25 because we are passing the value of a and b to the function and not the address of a and b
//   cout<<a<<"\n"<<b<<endl;  // it gives the value of a and b as 5 and 10 because we are passing the value of a and b to the function and not the address of a and b
//   return 0;
//  }

 

//##########  Sum of the digits of a number.   ###########


// #include<iostream>
// using namespace std;
// int sumOfDigits(int num)
// {
//   int digitSum =0;
//   while(num>0)
//   {
//     int lastDig = num%10; // get the last digit of the number
//     num/=10; // remove the last digit from the number
//     digitSum+= lastDig ; // add the last digit to the sum 
//   }
//   return digitSum;
// }
// int main()
// {
//   // int num;
//   // cout<<"Enter the number :";
//   // cin>>num; //### by taking input from the user ####
//   // int Sum = sumOfDigits(num);
//   // cout<<"sum of the digits of the number is :"<<Sum<<endl;
//   cout<<"Sum :"<<sumOfDigits(2356)<<endl; // directly calling the function with a number or we can say that by passing the arguments
//   return 0;
// }


//#######  Calculate nCr binomial coefficient for n & r using functions ######
// #include<iostream>
// using namespace std;
// int factorial(int n){
//  int fact = 1;
//   for(int i=1 ; i<=n ; i++){
//     fact *=i;
//   }
//   return fact;
// }
// int nCr(int n, int r)
// {
//   int fact_n =factorial(n);
//   int fact_r =factorial(r);
//   int fact_nmr = factorial(n-r);
//   return fact_n / (fact_r * fact_nmr);  // nCr = n! / (r! * (n-r)!)
// }

// int main()
// {
//   int n,r;
//   cout<<"Enter the value of n:";
//   cin>>n;
//   cout<<"Enter the value of r:";
//   cin>>r;
//   nCr(n,r);
//   cout<<"nCr for "<<n<<" and "<<r<<" is :"<<nCr(n,r)<<endl;
//   return 0;
// }


//  ##########################################################  USE OF CLASS  ###################################################################


// #include<iostream>
// using namespace std;
// class person
// {
//   char name[30];
//   int age;
//   public:
//      void getdata(void);
//      void display(void);
// };

// void person :: getdata(void)
// {
//   cout<<"Enter your name : ";
//   cin>>name;
//   cout<<"Enter your age : ";
//   cin>>age;
// }
// void person :: display(void)
// {
//   cout<<"\n Name :"<<name;
//   cout<<"\n Age :"<<age;
// }

// int main(){
//   person p;
//   p.getdata();
//   p.display();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int n=7,flag=0;
//   for(int i=2;i<n;i++){
//     if(!(n%i)){
//       cout<<"not prime";
//       flag=1;
//       break;

//     }
//   }
//   if(!flag)
//   cout<<"prime";
//   return 0;

// }


//##########################doubt##############################################
// #include<iostream>
// using namespace std;
// int main(){
//   int a[10]= {10,12,2,15,2,3,4,6,30,0};
//   int n=10,max;
//   max=a[0];
//   for(int i=0;i<n;i++){
//     if(a[i]>max){
//       max=a[i];
//       if(a[n-i]>max){
//         max=a[n-i];
//       }
//   }
// }
//   return 0;
// }

//######################### maximum value in an array ##########################
// #include <iostream>
// using namespace std;

// int main() {
//     int a[10] = {10, 12, 2, 15, 2, 3, 4, 6, 30, 0};
//     int n = 10, max;
    
//     max = a[0]; //####initialize max with the first element of the array
    
//     for (int i = 1; i < n; i++) {    // Start loop from index 1 since max is already initialized with a[0]
//         if (a[i] > max) {   // Compare current element with max
//             max = a[i]; // Update max if the current element is greater
//         }
//     }
    
//     cout << "Maximum value: " << max << endl;  
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
 
}