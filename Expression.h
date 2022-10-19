#pragma once
#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;

        struct node{
            char info;
            node *next; };

        class stack{
            private:
            node *top;
            public:
            stack(){top=NULL;}
            char pop();
            void push(char);
            bool isEmpty(){if(top == NULL ) return true; else return false;}
            char peak();
        };

        void stack::push(char item){
            node *p=new node;
            p->info=item;
            p->next=top;
            top=p; }

        char stack::pop(){  
                if(isEmpty()){cout<<"Underflow\n";return  '0';}
                else
                {
                    node *t= top;
                    char item=top->info;
                    top = top->next;
                    delete t;
                    return item;
                } }

        char stack::peak(){
            if(isEmpty()){cout<<"Empty!"<<endl;return  '0';}
               return top->info;
                  }

        int priority(char x){
            if(x=='+'||x=='-')
               return 1;
            if(x=='*'||x=='/'||x=='%')
               return 2;   
            if(x=='^')
               return 3; 
            return 0;
                }

        bool pred (char a,char b) {
        if (a=='(' || b=='(' )
            return false;
        else if (b==')')
            return true;
        else if (a=='^'&&b=='^') 
            return false;           
        else if (priority (a) >= priority (b))
            return true;
        else return false;
         }

        void convert (string infix){
                string result;
                stack obj;
                char symbol;
                char topsym;
                int i=0;

            while (infix[i]!='\0') {
                symbol =infix[i];

                //first condition 
                if (isalpha (symbol) ) //function isalpha(c) to check if it is an alphabet
                  result+=symbol; //add topsymb to the postfix string
                else{ //else the symbol is a opration of (+ , - , * , / , ^)
                    while(!obj.isEmpty() && pred (obj.peak () , symbol)) {
                       topsym=obj.pop();
                        result+=topsym; //add topsymb to the postfix string
                    }//end while for else

                //secound condition     
                if (obj.isEmpty () || symbol!=')')
                    obj.push (symbol) ; 

                else topsym=obj.pop(); //( symbol==')' ) pop the open parenthesis and discard it
                    
                 } //end else
           i++;
            } //end while

            //output any remaining operators
            while(!obj.isEmpty ()){ 
            topsym=obj.pop() ;
            result+=topsym; //add topsymb to the postfix string
            }
            cout<<result;
            } //end while








//reference
//https://gist.github.com/heytulsiprasad/b50a7815a8415c272e3177da021f2ece