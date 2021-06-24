#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <stdio.h>

using namespace std;

void basicSolve();
void otherFunc();
void listofFunc();
void primeNumber();
void getFactors();
void getGCF();
void getLCM();
void simpleRad();
void cleanfiles();

int main()
{
    int option;
    cout << "What would you like to do?: " << endl;
    cout << "Basic Calculatons (1), Other (2), List everything I can do (3): ";
    cin >> option;

    switch(option)
    {
    case 1:
        basicSolve();
        break;

    case 2:
        otherFunc();
        break;

    case 3:
        listofFunc();
        cout << "What would you like to do?: " << endl;
        cout << "Basic Calculatons (1), Other (2): ";
        cin >> option;
        if(option == 1)
        {
            basicSolve();
        }
        else if(option == 2)
        {
            otherFunc();
        }
        else
        {
            cout << endl << "Not an option, see all options here:" << endl;
            listofFunc();
        }
        break;
    default:
        cout << endl << "That isn't an option" << endl;
    }

    cleanfiles();

    return 0;
}

void basicSolve()
{
    int op;
    double x, y;
    double result;

    printf("What would you like to do? \n");
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;

    cin >> op;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second numer: ";
    cin >> y;

    switch(op)
    {
    case 1:
        result = x + y;
        printf("Your answer is %f", result);
        break;
    case 2:
        result = x - y;
        printf("Your answer is %f", result);
        break;
    case 3:
        result = x * y;
        printf("Your answer is %f", result);
        break;
    case 4:
        result = x / y;
        printf("Your answer is %f", result);
        break;
    default:
        cout << "Error: input error" << endl;
    }
}

void otherFunc()
{
    double dx, dy;
    int ix, iy;
    int stored, storedTwo, storedThree;
    double danswer;
    int ianswer;
    int option;

    printf("What would you like to do: \n");
    cout << "1: Power of" << endl;
    cout << "2: Smaller Number" << endl;
    cout << "3: Larger Number" << endl;
    cout << "4: Prime Factor" << endl;
    cout << "5: Return Squareroot of Sum of Roots" << endl;
    cout << "6: Remainder of" << endl;
    cout << "7: Round the Number" << endl;
    cout << "8: Squareroot" << endl;
    cout << "9: Simplify Squareroot" << endl;
    cout << "10: Is Number Prime?" << endl;
    cout << "11: All Factors of" << endl;
    cout << "12: Find GCF/GCD of" << endl;
    cout << "13: Find LCM of" << endl;
    cout << "14: Find Tangent of" << endl;
    cout << "15: Find Cosine of" << endl;
    cout << "16: Find Sine of" << endl;

    cin >> option;

    switch(option)
    {
    case 1:
        cout << "Enter first number: ";
        cin >> ix;
        cout << "Enter second numer: ";
        cin >> iy;

        ianswer = pow(ix, iy);
        printf("Your answer is %d", ianswer);
        break;

    case 2:
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;

        danswer = fmin(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 3:
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;

        danswer = fmax(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 4:
        cout << "Enter Number: ";
        cin >> ix;
        while(ix % 2 == 0)
        {
            cout << "2 • ";
            ix = ix / 2;
        }
        for(int i = 3; i <= sqrt(ix); i += 2)
        {
            while(ix % i ==0)
            {
                cout << i << " • ";
                ix = ix / i;
            }
        }
        if(ix > 2)
        {
            cout << ix << '\t';
        }
        break;

    case 5:
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;
        danswer = hypot(dy, dx);
        printf("Your answer is %f", danswer);
        break;

    case 6:
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;
        danswer = remainder(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 7:
        cout << "Enter number: ";
        cin >> dx;
        danswer = round(dx);
        printf("Your answer is %f", danswer);
        break;

    case 8:
        cout << "Enter number: ";
        cin >> dx;
        danswer = sqrt(dx);
        printf("Your answer is %f", danswer);
        break;

    case 9:
        simpleRad();
        break;

    case 10:
        primeNumber();
        break;

    case 11:
        getFactors();
        break;

    case 12:
        getGCF();
        break;

    case 13:
        getLCM();
        break;

    case 14:
        cout << "Enter number: ";
        cin >> dx;
        danswer = tan(dx);
        printf("The tangent of %f is %f", dx, danswer);
        break;

    case 15:
        cout << "Enter number: ";
        cin >> dx;
        danswer = cos(dx);
        printf("The cosine of %f is %f", dx, danswer);
        break;

    case 16:
        cout << "Enter number: ";
        cin >> dx;
        danswer = sin(dx);
        printf("The sine of %f is %f", dx, danswer);
        break;

    default:
        cout << endl << "Error: input error" << endl;
    }

}

void listofFunc()
{
    cout << "<!-- START OF LIST --!>" << endl;
    cout << "BASIC FUNCTIONS: " << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "------------------------" << endl;
    cout << "OTHER FUNCTIONS" << endl;
    cout << "1: Power of" << endl;
    cout << "2: Smaller Number" << endl;
    cout << "3: Larger Number" << endl;
    cout << "4: Prime Factor" << endl;
    cout << "5: Hypotenuse of" << endl;
    cout << "6: Remainder of" << endl;
    cout << "7: Round the number" << endl;
    cout << "8: Squareroot of" << endl;
    cout << "9: Simplify Square Root" << endl;
}

void primeNumber()
{
    int n, i, m = 0, flag = 0;

    cout << "Enter number: ";
    cin >> n;

    m = n / 2;

    for(i = 2; i <= m; i++)
    {
        if(n % i ==0)
        {
            printf("%d is not Prime", n);

            flag = 1;

            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is Prime", n);
    }
}

void getFactors()
{
    int number, temp = 1;
    cout << "Enter number: ";
    cin >> number;
    printf("The factors of %d are: ", number);

    while(temp <= number)
    {
        if(not(number % temp))
        {
            cout << temp << " ";
        }

        temp++;
    }
    cout << endl;
}

void getGCF()
{
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    while(n1 != n2)
    {
        if(n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    cout << "The GCF/GCD is: " << n1;
}

void getLCM()
{
    int n1, n2, max;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    max = (n1 > n2) ? n1 : n2;

    do
    {
        if(max % n1 == 0 && max % n2 ==0)
        {
            printf("The LCM is %d\n", max);
            break;
        }
        else
        {
            ++max;
        }
    } while(true);
}

void simpleRad()
{
    int i, n, n2, last, final;
        last = 0, final = 1;
        printf("Enter number to calculate root: ");
        scanf("%d", & n);
        n2 = n;
        for (i = 2; i <= n; ++i) {
            if (n % i == 0) {
                if (i == last) {
                    final = final * last;
                    last = 0;
                } else {
                    last = i;
                }
                n /= i;
                i--;
            }
        }
    n = n2 / (final * final);
    printf("\nThe answer is: %d√%d", final, n);
}

void cleanfiles()
{
    ofstream cleanfile("files/file.txt");
    cleanfile << "";

    ofstream cleanradical("files/radical.txt");
    cleanradical << "";

    ofstream cleanwhole("files/whole.txt");
    cleanwhole << "";

    cleanfile.close();
    cleanradical.close();
    cleanwhole.close();
}
