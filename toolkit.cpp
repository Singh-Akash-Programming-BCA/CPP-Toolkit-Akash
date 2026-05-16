#include<iostream>
using namespace std;
// Akash C++ Mega Toolkit
void triangleChecker(){
     int a, b, c;
    cout<<"enter 1st side:";
    cin>>a;
    cout<<"enter 2nd side:";
    cin>>b;
    cout<<"enter 3rd side:";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle" <<endl;
    }
    else{
        cout<<"Invalid Triangle" <<endl;
    }
    
}
       // calculator if-else version
    void calculatorIfElse(){
   double n1, n2;
    char op;
    cout<<"Enter like 5+3: "; 
    cin>> n1 >> op >> n2;
    if(op== '+')     cout<<"Result:" <<n1+n2<<endl;
    else if(op=='-') cout<<"Result:" <<n1-n2<<endl;
    else if(op=='*') cout<<"Result:" <<n1*n2<<endl;
    else if(op=='/'){
        if(n2!=0) cout<<"Result:" <<n1/n2<<endl;
         else cout<<"error: cannot divide by zero"<<endl;
    }
        else cout<<"Invalid Operator" <<endl;
    }
      // calculator switch-case version
      void calculatorSwitch(){
        double n1, n2;
        char op;
        cout<<"Enter like 8*3";
        cin>>n1>>op>>n2;
        switch(op){
             case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
         if(n2!=0) cout<<n1/n2<<endl;
         else cout<<"Error: cannot divide by zero" <<endl;
            break;
         default:
         cout<<"Invalid Operator" <<endl;
         break;
        }
      }
         // Sum of 1 to N
          void sumOfN(){
            int n, sum = 0;
            cout<<"Enter N: ";
            cin>>n;
            for(int i = 1; i<=n; i++){
                sum = sum +i;
            }
            cout<<"Sum of 1 to "<<n<<" = "<<sum<<endl;
          }
            // Loop 
            void LoopSum(){
                 int n, num, sum = 0;
    cout<<"How many numbers do you want to add? ";
    cin>>n;
    for(int i = 1; i<= n; i++){
        cout <<"Enter number: " ;
        cin>>num;
        sum = sum + num; 
    }
    cout<<"Total Sum = " << sum << endl;
  }
  int main(){
    int choice;
    cout<<"-- C++ Toolkit --"<<endl;
    cout<<"1. Triangle Checker"<<endl;
    cout<<"2. Calculator If-Else"<<endl;
    cout<<"3. Calculator Switch"<<endl;
    cout<<"4. Sum of 1 to N"<<endl;
    cout<<"5. Add N Number - LoopSum"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    if(choice == 1) triangleChecker();
    else if(choice == 2) calculatorIfElse();
    else if(choice == 3) calculatorSwitch();
    else if(choice == 4) sumOfN();
    else if(choice == 5) LoopSum();
    else cout<<"Invalid choice"<<endl;
    return 0;
      
  }