#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include <string>
#include <cstdlib>

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
void geometryFunc();
void powersFunc();

int main()
{
    int option;
    cout << "What would you like to do?: " << endl;
    cout << "[1] Basic Calculations (+, -, /, *)" << endl;
    cout << "[2] Geometry/Angles (Area, Perimeter, Volume)" << endl;
    cout << "[3] Powers" << endl;
    cout << "[4] Other Functions" << endl;
    cout << "[727] Coming Soon" << endl;
    cout << "[0] List of What I Can Do" << endl;

    cin >> option;

    switch(option)
    {
    case 1:
        basicSolve();
        break;

    case 2:
        geometryFunc();
        break;

    case 3:
        powersFunc();
        break;

    case 4:
        otherFunc();
        break;

    case 727:
        cout << "COMING SOON" << endl;
        cout << "- Surface Area" << endl;
        cout << "- Whatever stuff I need" << endl;
        break;

    case 0:
        listofFunc();
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

    printf("BASIC FUNCTIONS \n");
    printf("What would you like to do? \n");
    cout << "[1] Add" << endl;
    cout << "[2] Subtract" << endl;
    cout << "[3] Multiply" << endl;
    cout << "[4] Divide" << endl;

    cin >> op;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second numer: ";
    cin >> y;

    switch(op)
    {
    case 1:
        printf("ADDITION \n");
        result = x + y;
        printf("Your answer is %f", result);
        break;

    case 2:
        printf("SUBTRACTION \n");
        result = x - y;
        printf("Your answer is %f", result);
        break;

    case 3:
        printf("MULTIPLICATION \n");
        result = x * y;
        printf("Your answer is %f", result);
        break;

    case 4:
        printf("DIVISION \n");
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
    int ix, iy, count;
    int x = 0;
    int stored, storedTwo, storedThree;
    double danswer, average;
    int ianswer;
    int option;

    printf("What would you like to do: \n");
    cout << "[1] Smaller Number" << endl;
    cout << "[2] Larger Number" << endl;
    cout << "[3] Prime Factor" << endl;
    cout << "[4] Remainder of" << endl;
    cout << "[5] Round the Number" << endl;
    cout << "[6] Is Number Prime?" << endl;
    cout << "[7] All Factors of" << endl;
    cout << "[8] Find GCF/GCD of" << endl;
    cout << "[9] Find LCM of" << endl;
    cout << "[10] Average of" << endl;

    cin >> option;

    switch(option)
    {
    case 1:
        printf("SMALLER OF \n");
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;

        danswer = fmin(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 2:
        printf("LARGER OF \n");
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;

        danswer = fmax(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 3:
        printf("PRIME FACTOR \n");
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

    case 4:
        printf("REMAINDER OF \n");
        cout << "Enter first number: ";
        cin >> dx;
        cout << "Enter second numer: ";
        cin >> dy;
        danswer = remainder(dx, dy);
        printf("Your answer is %f", danswer);
        break;

    case 5:
        printf("ROUNDED OF \n");
        cout << "Enter number: ";
        cin >> dx;
        danswer = round(dx);
        printf("Your answer is %f", danswer);
        break;

    case 6:
        printf("IS IT PRIME? \n");
        primeNumber();
        break;

    case 7:
        printf("FACTORS OF \n");
        getFactors();
        break;

    case 8:
        printf("FIND GCF \n");
        getGCF();
        break;

    case 9:
        printf("FIND LCM \n");
        getLCM();
        break;

    case 10:
        printf("GET AVERAGE \n");
        cout << "How many numbers?" << endl;
        cin >> count;

        while(x < count)
        {
            cout << "Enter Number: ";
            cin >> dx;
            danswer += dx;
            x++;
        }
        average = danswer / count;
        cout << "The average is: " << average << endl;
        break;

    default:
        cout << endl << "Error: input error" << endl;
    }

}

void listofFunc()
{
    cout << endl;
    cout << "<!-- START OF LIST --!>" << endl;
    cout << endl;
    cout << "<!-- BASIC --!>" << endl;
    cout << "[1] Add" << endl;
    cout << "[2] Subtract" << endl;
    cout << "[3] Multiply" << endl;
    cout << "[4] Divide" << endl;
    cout << endl;
    cout << "<!-- GEOMETRY AND ANGLES --!>" << endl;
    cout << "[1] Area of: " << endl;
    cout << "[2] Perimeter of: " << endl;
    cout << "[3] Volume of: " << endl;
    cout << "[4] Circumference" << endl;
    cout << "[5] Hypotenuse of: " << endl;
    cout << "[6] Find Tangent of" << endl;
    cout << "[7] Find Cosine of" << endl;
    cout << "[8] Find Sine of" << endl;
    cout << endl;
    cout << "<!-- POWERS --!>" << endl;
    cout << "[1] Power of" << endl;
    cout << "[2] Square of" << endl;
    cout << "[3] Square Root of" << endl;
    cout << "[4] Simplify Square Root of" << endl;
    cout << "[5] Cube of" << endl;
    cout << endl;
    cout << "<!-- OTHER/UNORGANIZED YET --!>" << endl;
    cout << "[1] Smaller Number" << endl;
    cout << "[2] Larger Number" << endl;
    cout << "[3] Prime Factor" << endl;
    cout << "[4] Remainder of" << endl;
    cout << "[5] Round the Number" << endl;
    cout << "[6] Is Number Prime?" << endl;
    cout << "[7] All Factors of" << endl;
    cout << "[8] Find GCF/GCD of" << endl;
    cout << "[9] Find LCM of" << endl;
    cout << "[10] Find Average of" << endl;
    cout << endl;

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

void geometryFunc()
{
    double firstDouble, secondDouble, thirdDouble, doubleAnswer;
    int optionChose, subOption;
    string stringVar = "";
    double piNum = 3.1415926535;

    cout << "GEOMETRY/ANGLES OPTIONS:" << endl;
    cout << "[1] Area of: " << endl;
    cout << "[2] Perimeter of: " << endl;
    cout << "[3] Volume of: " << endl;
    cout << "[4] Circumference" << endl;
    cout << "[5] Hypotenuse of: " << endl;
    cout << "[6] Find Tangent of" << endl;
    cout << "[7] Find Cosine of" << endl;
    cout << "[8] Find Sine of" << endl;

    cin >> optionChose;

    switch(optionChose)
    {
    case 1:
        cout << "AREA OF: " << endl;
        cout << "What shape do you want the area of?: " << endl;
        cout << "[1] Square" << endl;
        cout << "[2] Rectangle" << endl;
        cout << "[3] Triangle" << endl;
        cout << "[4] Circle" << endl;
        cout << "[5] Trapezoid" << endl;
        cout << "[6] Parallelogram" << endl;

        cin >> subOption;

        switch(subOption)
        {
        case 1:
            cout << "AREA OF SQUARE" << endl;
            cout << "Enter side length: ";

            cin >> firstDouble;

            doubleAnswer = firstDouble * firstDouble;

            printf("The area of your square is: %f\n", doubleAnswer);
            break;

        case 2:
            cout << "AREA OF RECTANGLE" << endl;

            cout << "Enter length: ";
            cin >> firstDouble;

            cout << "Enter width: ";
            cin >> secondDouble;

            doubleAnswer = firstDouble * secondDouble;

            printf("The area of your rectangle is: %f\n", doubleAnswer);
            break;

        case 3:
            cout << "AREA OF TRIANGLE" << endl;

            cout << "Enter base: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            doubleAnswer = (firstDouble * secondDouble) / 2;

            printf("The area of your triangle is: %f\n", doubleAnswer);
            break;

        case 4:
            cout << "AREA OF CIRCLE" << endl;

            cout << "Enter radius: ";
            cin >> firstDouble;

            cout << endl << "Pi is going to be 3.1415926535" << endl;

            doubleAnswer = (firstDouble * firstDouble) * piNum;

            printf("The area of your circle is: %f\n", doubleAnswer);
            break;

        case 5:
            cout << "AREA OF TRAPEZOID" << endl;

            cout << "Enter base: ";
            cin >> firstDouble;

            cout << "Enter top: ";
            cin >> secondDouble;

            cout << "Enter height: ";
            cin >> thirdDouble;

            doubleAnswer = ((firstDouble + secondDouble)/2) * thirdDouble;

            printf("The area of your rectangle is: %f\n", doubleAnswer);
            break;

        case 6:
            cout << "AREA OF PARALLELOGRAM" << endl;

            cout << "Enter base: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            doubleAnswer = firstDouble * secondDouble;

            printf("The area of your parallelogram is: %f\n", doubleAnswer);
            break;
            break;

        default:
            cout << "Not an option yet, sorry" << endl;
        }
        break;

    case 2:
        cout << "PERIMETER OF: " << endl;
        cout << "What shape do you want the perimeter of?: " << endl;
        cout << "[1] Square" << endl;
        cout << "[2] Rectangle" << endl;
        cout << "[3] Triangle" << endl;
        cout << "[4] Trapezoid" << endl;
        cout << "[5] Parallelogram" << endl;
        cout << "[6] Other (infinite addition)" << endl;

        cin >> subOption;

        switch(subOption)
        {
        case 1:
            cout << "PERIMETER OF SQUARE" << endl;
            cout << "Enter first side length: ";

            cin >> firstDouble;

            doubleAnswer = firstDouble * 4;

            printf("The perimeter of your square is: %f\n", doubleAnswer);
            break;

        case 2:
            cout << "PERIMETER OF RECTANGLE" << endl;

            cout << "Enter length: ";
            cin >> firstDouble;

            cout << "Enter width: ";
            cin >> secondDouble;

            doubleAnswer = (firstDouble * 2) + (secondDouble * 2);

            printf("The perimeter of your rectangle is: %f\n", doubleAnswer);
            break;

        case 3:
            cout << "PERIMETER OF TRIANGLE" << endl;

            cout << "Enter side 1: ";
            cin >> firstDouble;

            cout << "Enter side 2: ";
            cin >> secondDouble;

            cout << "Enter side 3: ";
            cin >> thirdDouble;

            doubleAnswer = firstDouble + secondDouble + thirdDouble;

            printf("The perimeter of your triangle is: %f\n", doubleAnswer);
            break;

        case 4:
            cout << "PERIMETER OF TRAPEZOID" << endl;

            cout << "Enter base: ";
            cin >> firstDouble;

            cout << "Enter top: ";
            cin >> secondDouble;

            cout << "Enter sides: ";
            cin >> thirdDouble;

            doubleAnswer = firstDouble + secondDouble + (thirdDouble * 2);

            printf("The perimeter of your trapezoid is: %f\n", doubleAnswer);
            break;

        case 5:
            cout << "PERIMETER OF PARALLELOGRAM" << endl;

            cout << "Enter base: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            doubleAnswer = (firstDouble * 2) + (secondDouble * 2);

            printf("The perimeter of your parallelogram is: %f\n", doubleAnswer);
            break;

        case 6:
            cout << "INFINITE ADDITION" << endl;
            while(stringVar != "quit") {
                cout << "The current sum is: "<< doubleAnswer << endl;
                cout << "Continue adding or enter \"quit\" to quit: ";
                cin >> stringVar;
                doubleAnswer += atof(stringVar.c_str());
            }
            break;

        default:
            cout << "Sorry not a thing yet" << endl;
        }
        break;

    case 3:
        cout << "VOLUME OF: " << endl;
        cout << "What shape do you want the volume of?: " << endl;
        cout << "[1] Cube" << endl;
        cout << "[2] Rectangular Prism" << endl;
        cout << "[3] Triangular Prism" << endl;
        cout << "[4] Sphere" << endl;
        cout << "[5] Regular Cylinder" << endl;
        cout << "[6] Regular Cone" << endl;
        cout << "[7] B * H * D" << endl;

        cin >> subOption;

        switch(subOption)
        {
        case 1:
            cout << "VOLUME OF CUBE" << endl;
            cout << "Enter side length: ";
            cin >> firstDouble;

            doubleAnswer = (firstDouble * firstDouble * firstDouble);

            printf("The volume of the cube is: %f\n", doubleAnswer);
            break;

        case 2:
            cout << "VOLUME OF RECTANGULAR PRISM" << endl;

            cout << "Enter base length: ";
            cin >> firstDouble;

            cout << "Enter height length: ";
            cin >> secondDouble;

            cout << "Enter depth length: ";
            cin >> thirdDouble;

            doubleAnswer = (firstDouble * secondDouble * thirdDouble);
            printf("The volume of your rectangular prism is: %f\n", doubleAnswer);
            break;

        case 3:
            cout << "VOLUME OF TRIANGULAR PRISM" << endl;
            cout << "Enter base length: ";
            cin >> firstDouble;

            cout << "Enter height length: ";
            cin >> secondDouble;

            cout << "Enter depth length: ";
            cin >> thirdDouble;

            doubleAnswer = ((firstDouble * secondDouble) / 2) * thirdDouble;
            printf("The volume of your triangular prism is: %f\n", doubleAnswer);
            break;

        case 4:
            cout << "VOLUME OF SPHERE" << endl;
            cout << "Enter radius: ";
            cin >> firstDouble;

            doubleAnswer = (4/3) * piNum * (firstDouble * firstDouble * firstDouble);
            printf("The volume of your sphere is: %f\n", doubleAnswer);
            break;

        case 5:
            cout << "VOLUME OF REGULAR CYLINDER" << endl;
            cout << "Enter radius: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            doubleAnswer = secondDouble * piNum * (firstDouble * firstDouble);
            printf("The volume of your cylinder is: %f\n", doubleAnswer);
            break;

        case 6:
            cout << "VOLUME OF REGULAR CONE" << endl;
            cout << "Enter radius: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            doubleAnswer =  (secondDouble * piNum * (firstDouble * firstDouble)) / 3;
            printf("The volume of your cylinder is: %f\n", doubleAnswer);
            break;

        case 7:
            cout << "B * H * D" << endl;
            cout << "Enter base length: ";
            cin >> firstDouble;

            cout << "Enter height length: ";
            cin >> secondDouble;

            cout << "Enter depth length: ";
            cin >> thirdDouble;

            doubleAnswer = (firstDouble * secondDouble * thirdDouble);
            printf("The volume of your prism is: %f\n", doubleAnswer);
            break;

        default:
            cout << "Sorry not a thing yet" << endl;
        }
        break;

    case 4:
        cout << "CIRCUMFERENCE OF A CIRCLE" << endl;
        cout << "Enter radius: ";
        cin >> firstDouble;

        doubleAnswer = 2 * firstDouble * piNum;
        printf("The circumference of the circle is: %f\n", firstDouble);
        break;

    case 5:
        cout << "HYPOTENUSE" << endl;
        cout << "Enter a: ";
        cin >> firstDouble;
        cout << "Enter b: ";
        cin >> secondDouble;
        doubleAnswer = hypot(firstDouble, secondDouble);
        printf("C is %f", doubleAnswer);
        break;

    case 6:
        cout << "TANGENT" << endl;
        cout << "Enter number: ";
        cin >> firstDouble;
        doubleAnswer = tan(firstDouble);
        printf("The tangent of %f is %f", firstDouble, doubleAnswer);
        break;

    case 7:
        cout << "COSINE" << endl;
        cout << "Enter number: ";
        cin >> firstDouble;
        doubleAnswer = cos(firstDouble);
        printf("The cosine of %f is %f", firstDouble, doubleAnswer);
        break;

    case 8:
        cout << "SINE" << endl;
        cout << "Enter number: ";
        cin >> firstDouble;
        doubleAnswer = sin(firstDouble);
        printf("The sine of %f is %f", firstDouble, doubleAnswer);
        break;

    default:
        cout << endl << "Error: input error" << endl;
    }
}

void powersFunc()
{
    int optionChose;

    int firstInt, secondInt, intAnswer;
    double firstDouble, secondDouble, doubleAnswer;

    cout << "POWERS" << endl;
    printf("What would you like to do? \n");
    cout << "[1] Power of" << endl;
    cout << "[2] Square of" << endl;
    cout << "[3] Square Root of" << endl;
    cout << "[4] Simplify Square Root of" << endl;
    cout << "[5] Cube of" << endl;

    cin >> optionChose;

    switch(optionChose)
    {
    case 1:
        printf("POWER OF \n");
        cout << "Enter first number: ";
        cin >> firstInt;
        cout << "Enter second numer: ";
        cin >> secondInt;

        intAnswer = pow(firstInt, secondInt);
        printf("Your answer is %d", intAnswer);
        break;

    case 2:
        printf("SQUARE OF\n");
        cout << "Enter number: ";
        cin >> firstInt;

        intAnswer = pow(firstInt, 2);
        printf("Your answer is %d", intAnswer);
        break;

    case 3:
        printf("SQUARE ROOT OF \n");
        cout << "Enter number: ";
        cin >> firstDouble;

        doubleAnswer = sqrt(firstDouble);
        printf("Your answer is %f", doubleAnswer);
        break;

    case 4:
        printf("SIMPLIFY SQUARE ROOT \n");
        simpleRad();
        break;

    case 5:
        printf("CUBE OF\n");
        cout << "Enter number: ";
        cin >> firstInt;

        intAnswer = pow(firstInt, 3);
        printf("Your answer is %d", intAnswer);
        break;

    default:
        cout << "Not an option yet, sorry" << endl;
    }
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
