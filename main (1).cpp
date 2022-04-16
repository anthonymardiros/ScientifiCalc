#include <iostream>
#include <cmath>

using namespace std;

void power() {
    double result = 1;
    double base;
    double expo;
    cout << "Base: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> expo;
    for (int i = 0; i < expo; i++) {
        result = result * base;
    }
    cout << result << endl << endl;
}

void sqroot() {
    double result;
    double a;
    cout << "Enter number: ";
    cin >> a;
    result = sqrt(a);
    cout << result << endl;
}

void ex() {
    double result = 1;
    double expo;
    cout << "Exponent: ";
    cin >> expo;
    for (int i = 0; i < expo; i++) {
        result = result * 2.7182818284590452353602874713527;
    }
    cout << result << endl;
}

void si() {
    double inp;
    cout << "sin(";
    cin >> inp;
    cout << sin(inp) << endl;
}

void is() {
    double inp;
    cout << "sin^-1(";
    cin >> inp;
    cout << asin(inp) << endl;
}

void co() {
    double inp;
    cout << "cos(";
    cin >> inp;
    cout << cos(inp) << endl;
}

void ic() {
    double inp;
    cout << "cos^-1(";
    cin >> inp;
    cout << acos(inp) << endl;
}

void ta() {
    double inp;
    cout << "tan(";
    cin >> inp;
    cout << tan(inp) << endl;
}

void it() {
    double inp;
    cout << "sin(";
    cin >> inp;
    cout << atan(inp) << endl;
}

void ac() {
    double radius;
    cout << "Radius: ";
    cin >> radius;
    cout << 3.14159 * (radius * radius) << endl;
}

void special() {
    cout << "List of special functions:" << endl;
    cout << "Raise to power [^]" << endl;
    cout << "Square root [sr]" << endl;
    cout << "e to the power of x [ex]" << endl;
    cout << "Sine [s]" << endl;
    cout << "Inverse sine [is]" << endl;
    cout << "Cosine [c]" << endl;
    cout << "Inverse cosine [ic]" << endl;
    cout << "Tangent [t]" << endl;
    cout << "Inverse tangent [it]" << endl;
    cout << "Area of circle [ac]" << endl << endl;
    
    bool w = true;
    string choice;
    while(w != false) {
        cout << "Choose function: ";
        cin >> choice;
        
        if (choice == "^") {
            power();
        } else if (choice == "sr") {
            sqroot();
        } else if (choice == "ex") {
            ex();
        } else if (choice == "s") {
            si();
        } else if (choice == "is") {
            is();
        } else if (choice == "c") {
            co();
        } else if (choice == "ic") {
            ic();
        } else if (choice == "t") {
            ta();
        } else if (choice == "it") {
            it();
        } else if (choice == "ac") {
            ac();
        } else {
            cout << "Error" << endl;
        }
    }
}

string decision;
void check() {
    cout << "Would you like to use special functions (not +, -, *, or /)? [yes/no]" << endl;
    cin >> decision;
    if(decision == "no") {
            double num1;
            char op;
            double num2;
            double result;
            bool status = true;
                
            while(status != false) {
                cout << "First number: ";
                cin >> num1;
                if (!cin) {
                    cout << "Error" << endl << endl;
                    check();
                }
                    
                cout << "Operator: ";
                cin >> op;
                if (op != '+' && op != '-' && op != '*' && op != '/' && op != '^') {
                    cout << "Error" << endl << endl;
                    check();
                }
                    
                cout << "Second number: ";
                cin >> num2;
                if (!cin) {
                    cout << "Error" << endl << endl;
                    check();
                }
                    
                if (op == '+') {
                    result = num1 + num2;
                } else if (op == '-') {
                    result = num1 - num2;
                } else if (op == '*') {
                    result = num1 * num2;
                } else if (op == '/') {
                    result = num1 / num2;
                }
                    
                cout << "Result: " << result << endl << endl;
                
            }
        
    } else if (decision == "yes") {
        special();
    } else {
        cout << "Error" << endl;
        check();
    }
}
    
int main() {
    check();
    return 0;
}
