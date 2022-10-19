#include <iostream>
#include <string.h>
#include "Expression.h"
#include "Evaluation.h"
using namespace std;

int main(){
                int ch;
                string value;
                while(1) {
                if (ch==-1) break;
                else{
                 cout<<"\n";
                cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
                cout<<"\t\t\t\t+            Stack Operations             +\n";
                cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
                cout<<"\t\t\t\t+ 1. Convert From Infix To Postfix.       +\n";
                cout<<"\t\t\t\t+----|Hint! A+B -------------> AB+|-------+\n";
                cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
                cout<<"\t\t\t\t+ 2. Calculate Postfix Expression Result. +\n";
                cout<<"\t\t\t\t+----|Hint! 12+ -------------> 3  |-------+\n";
                cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
                cout<<"\t\t\t\t+ 3. Exit.                                +\n";
                cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                cout<<"\t\t\t\t     Enter your choice 1, 2 or 3: ";
                cin>>ch; }
                    switch(ch) {

                case 1:
                    cout<<"\t\t\t\t *Infix: ";
                    getline (cin>>ws, value);
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout <<"\t\t\t\t *Postfix: ";
                    convert(value);
                    cout<<"\n\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout<<endl<<endl<<endl;
                    break;
                case 2:
                    cout<<"\t\t\t\t *Postfix: ";
                    getline (cin>>ws, value);
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout <<"\t\t\t\t *Result: ";
                    cout<<evaluation(value);
                    cout<<"\n\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout<<endl<<endl<<endl;
                    break;
                case 3:
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout<<"\t\t\t\t                Thank You <3                   "<<endl;
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    exit(0);
                default:
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    cout<<"\t\t\t\t             Invalid Value!                    "<<endl;
                    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
                    break;
            }   } return 0;  } 

