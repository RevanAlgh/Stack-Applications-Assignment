#pragma once
#include <iostream>
#include <math.h>
using namespace std;

        struct Node{
            double info;
            Node *next;};
       
        class Stack{
            private:
            Node *top;
            public:
            Stack(){top=NULL;}
            double pop();
            void push(double);
            bool isEmpty(){if(top == NULL ) return true; else return false;}
            double peak();
            };

        void Stack::push(double item){
            Node *p=new Node;
            p->info=item;
            p->next=top;
            top=p;  }

        double Stack::pop(){
            if(isEmpty()){cout<<"Underflow\n";return '0';} 
            else
                {
                    Node *t= top;
                    double item=top->info;
                    top = top->next;
                    delete t;
                    return item;
                } }

        double Stack::peak() {
            return top->info;
                  }

        double calc(double op1, double op2, char x){
            switch(x){  //or we could use if else statments
                case '+':
                return(op1+op2);

                case '-':
                return(op1-op2);

                case '*':
                return(op1*op2);

                case '/':
                return(op1/op2);

                case '%':
                return fmod(op1,op2);

                case '^':
                return pow(op1,op2);

                default:
                cout<<"\t\t\t\tIllegal Operation"<<endl;
                exit(1);
            }
            return((double)0); }


        double evaluation(string Re){
            Stack obj;
            char symb;
            double op1,op2,value;
            int i=0;
        //scan the input string reading one element at a time into symb
        while(Re[i]!='\0'){
            symb = Re[i];//
            if(isdigit(symb)) //The isdigit(c) is a function to check if the passed character is a digit or not.
               obj.push((double)symb -'0'); //from char to double
            else{ //if its a number
                op2=obj.pop();
                op1=obj.pop();
                value=calc(op1,op2,symb); //calc value
                obj.push(value);
            }//end else
            i++;  }//end while

        return (obj.pop()); //Underflow
        }


// reference
//https://stackoverflow.com/questions/19341982/evaluating-postfix-expression-pop-returns-incorrect-values-to-calculate-funct
        