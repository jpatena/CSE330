// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena, JinYong Doh
// Lab 2
// Title: Infix to postfix expression conversion

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// compare the precedence of operators
int prec(string input)
{
   if(input == "*") return 2;
   if(input == "/") return 2;
   if(input == "+") return 1;
   if(input == "-") return 1;
}

// converts infix to postfix expression
string convert(string infix)
{
   stack<string> mystack;
   string postfix;
   int i = 0;

   // while there is more input
   while(i<infix.size())
   {
      string input = infix.substr(i,1);

      // if input is an operator
      if (input == "*" || input == "/" || input == "+" || input == "-" || input == "(" || input == ")")
      {
         // '(' has lowest pc recedence in stack, highest outside
         if(input == "(") 
         {
            mystack.push(input); // push to stack
         }
         // else if input is ')'   
         else if(input == ")")
         {
            // while stack is not empty and top stack is not '('
            while(!mystack.empty() && mystack.top() != "(")
            {
               postfix += mystack.top(); // prints top element
               mystack.pop(); // remove top element on stack
            }

            // if stack not empty
            if(!mystack.empty())
            {
               mystack.pop(); // remove top element
            }

            // error if no matching "("
            else
            {
               while(!mystack.empty()) mystack.pop(); // clear stack
               return "Error, no matching '('."; // returns error             
            }
         }
 
         // else if stack is empty or prec(top stack) < prec(input)
         // bottom of stack has low precedence than anything
         else if(mystack.empty() || prec(mystack.top()) < prec(input))
         {
            mystack.push(input); // push input on stack
         }

         // else if prec(top of stack >= prec(input)
         else if(prec(mystack.top()) >= prec(input))
         {
            // while stack not empty and prec(top of stack) >= prec(input)
            while(!mystack.empty() && prec(mystack.top()) >= prec(input))
            {
               postfix += mystack.top(); // print top stack
               mystack.pop(); // remove top element on stack
            }
            mystack.push(input);
         }
      }

      // input is an operand (a-z, 0-9)
      else
      {
         postfix += input; // print input
      }
      ++i;
   }

   // while stack is not empty
   while(!mystack.empty())
   {
      postfix += mystack.top(); // prints top element
      mystack.pop(); // remove top element on stack
   }

   // error, if no matching ')'
   // checks for '(' in postfix string
   for(int i=0; i<postfix.size(); ++i)
   {
      if(postfix.substr(i,1) == "(")
      {
         while(!mystack.empty()) mystack.pop(); // clear stack
         return "Error, no matching ')'."; // returns error
      }
   }
   return postfix;
}

int main() // main program
{
   string infix1 = "a+b-c";
   cout << infix1 << " -> " << convert(infix1) << endl;

   string infix2 = "a+b*c";
   cout << infix2 << " -> " << convert(infix2) << endl;

   string infix3 = "(a+2)/(5+d)";
   cout << infix3 << " -> " << convert(infix3) << endl;

   string infix4 = "(a+2)/(5+d";
   cout << infix4 << " -> " << convert(infix4) << endl;

   string infix5 = "a+2)/(5+d)";
   cout << infix5 << " -> " << convert(infix5) << endl;

   return 0;
}
