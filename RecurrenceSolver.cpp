#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void master_theorem() {
    double a,a1,b1, b, k, p=0;
    int value = 0;
    int select = 0;

        cout << "ENTER 'a' (a >= 1): ";
        cin >> a;
      if (a < 1)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }
        cout << "ENTER 'b' (b > 0): ";
        cin >> b;
      if (b < 0)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }
        
        cout << "ENTER 'a' (a >= 1): ";
        cin >> a1;
      if (a1 < 1)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }
        cout << "ENTER 'b' (b > 0): ";
        cin >> b1;
      if (b1 < 0)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }
    do {
        cout << "For f(n):\n"
             << "1. VALUE\n"
             << "2. n^k\n"
             << "3. log^p(n)\n"
             << "4. n^k * log^p(n)\n"
             << "5. 2^n\n"
             << "SELECT ANY OPTION: ";
        cin >> select;
    } while (select < 1 || select > 5); 

    if (select == 2 || select == 4 ) {
        cout << "Enter k: ";
        cin >> k;
    }

    if (select == 3 || select == 4) {
        cout << "Enter p: ";
        cin >> p;
    }

    if (select == 1) {
        cout << "Enter value: ";
        cin >> value;
        
    }
    cout<<"\nTIME COMPLEXITY"<<endl;
   if(select== 5)
   {
      cout<<"0(2^n)"<<endl;
      cout<<"Exponential"<<endl;
      return;
   }
    double bk = pow(b, k);
double l = (log(a) / log(b));

if (p >= 0) {
    cout << "-----METHOD:  MASTER -----" << endl;
    if (a > bk) {
        cout<<"CASE1:"<<endl;
        cout << "0(n^" << l << ")" << endl;
        cout<<"Efficiency class "<<endl;
   if(l==1)
{
    cout<<"linear"<<endl;
}
else if(l==2)
{
    cout<<"Quadratic"<<endl;
}
else if(l==3)
{
    cout<<"Cubic"<<endl;
}
else
{
    cout<<"polynomial"<<endl;
}
    } else if (a == bk) {
         cout<<"CASE2:"<<endl;
        if (k == 0 && p == 0) {
            cout << "0(lg n)" << endl;
        } else if (k == 0) {
            cout << "0(lg^" << p + 1 << " n)" << endl;
        } else if (p == 0) {
            if (k == 1) cout << "0(n lg n)" << endl;
            else cout << "0(n^" << k << " lg n)" << endl;
        } else {
            if (k == 1) cout << "0(n lg^" << p + 1 << " n)" << endl;
            else cout << "0(n^" << k << " * lg^" << p + 1 << " n)" << endl;
        }
        cout<<"Efficiency class "<<endl;
        cout<<"logrithmic"<<endl;
    } else {
         cout<<"CASE3:"<<endl;
         if(p==0)
         {
             cout << "0(n^" << k << ")"<<endl;
        cout<<"Efficiency class "<<endl;
         if(k==1)
{
    cout<<"linear"<<endl;
}
else if(k==2)
{
    cout<<"Quadratic"<<endl;
}
else if(k==3)
{
    cout<<"Cubic"<<endl;
}
else
{
    cout<<"polynomial"<<endl;
}
         }
         else{
        cout << "0(n^" << k << " * log^" << p << "(n))" << endl;
        cout<<"Efficiency class "<<endl;
        cout<<"logrithmic"<<endl;}
    }
} else {
    cout << "----------METHOD:  EXTENDED MASTER-----" << endl;
    if (a > bk) {
         cout<<"CASE1:"<<endl;
        cout << "0(n^" << l << ")" << endl;
         cout<<"Efficiency class "<<endl;
   if(l==1)
{
    cout<<"linear"<<endl;
}
else if(l==2)
{
    cout<<"Quadratic"<<endl;
}
else if(l==3)
{
    cout<<"Cubic"<<endl;
}
else
{
    cout<<"polynomial"<<endl;
}
    } else if (a == bk) {
         cout<<"CASE2:"<<endl;
        if (p > -1) {
            cout << "0(n^" << l << " * log^" << (p + 1) << "(n))" << endl;
             cout<<"Efficiency class "<<endl;
        cout<<"logrithmic "<<endl;
        } else if (p == -1) {
            cout << "0(n^" << l << " * log log(n))" << endl;
             cout<<"Efficiency class "<<endl;
        cout<<"logrithmic "<<endl;
        } else {
            cout << "0(n^" << l << ")" << endl;
             cout<<"Efficiency class "<<endl;
        cout<<"linear "<<endl;
        }
    } else {
         cout<<"CASE3:"<<endl;
        if (p >= 0) {
            cout << "0(n^" << k << " * log^" << p << "(n))" << endl;
               cout<<"Efficiency class "<<endl;
        cout<<"logrithmic "<<endl;
        } else {
            cout << "0(n^" << k << ")" << endl;
               cout<<"Efficiency class "<<endl;
        cout<<"linear "<<endl;
        }
    }
}

return;
}

void decreasing_function() {
    int base, factor, power;
    string fn;
    int select;


        cout << "ENTER 'base' (a >= 1): ";
        cin >> base;
        if (base < 1)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }

        cout << "ENTER 'factor' (b > 0): ";
        cin >> factor;
      if (factor < 0)
        {
            cout<<"\n INVALID INPUT.\n";
            return;
        }
    do {
        cout << "For f(n):\n"
             << "1. Constant\n"
             << "2. n^k\n"
             << "3. log(n)\n"
             << "SELECT ANY OPTION: ";
        cin >> select;
    } while (select < 1 || select > 3);

    if (select == 2) {
        do {
            cout << "ENTER power: ";
            cin >> power;
        } while (power < 0);
    }

    if (select == 1) {
        do {
            cout << "Enter value: ";
            cin >> fn;
          
        } while (fn <= "48" && fn >= "57");
    } else if (select == 2) {
        fn = "n^" + to_string(power);
          
    } else if (select == 3) {
        fn = "log(n)";
        
    }

    if (base == 1) {
         cout<<"CASE1:"<<endl;
        cout << "O(" << fn << " * n)\n";
        if(fn=="log(n)")
        {
           cout<<"logrithmic"<<endl;
        }
        else
        {
        cout<<"polynomial"<<endl;
        }
        
    } else if (base > 1) {
         cout<<"CASE2:"<<endl;
        cout << "O(" << fn << " * " << base << "^(n/" << factor << "))\n";
        cout<<"exponential"<<endl;
    } else {
         cout<<"CASE3:"<<endl;
        cout << "O(" << fn << ")\n";
        cout<<"polynomial"<<endl;
    }
    return;
}

int main() {
    char c='n';
    do
    {
    int option=0;
    do {
        cout<<"RECCURRENCE RELATION "<<endl;
        cout << "  1. Master Theorem\n"
             << "  2. Muster Theorem\n"
             << "ENTER OPTION: ";
        cin >> option;
    } while (option != 1 && option != 2);
    if (option == 1) {
        master_theorem();
    } else {
        decreasing_function();
    }
    cout<<"\n\n\nSTART AGAIN? (if yes : y)";
    cin>>c;
    }while(c=='y' || c=='Y');
    return 0;
}