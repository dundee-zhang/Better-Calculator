#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

class factorialClass
{
public:
    factorialClass(double num);
    double calculateFactorial();
private:
    double startNum;
};

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
void factorialsFunc();
void taxFunction();

int main()
{
    int option;
    cout << "What would you like to do?: " << endl;
    cout << "[1] Basic Calculations (+, -, /, *)" << endl;
    cout << "[2] Geometry/Angles (Area, Perimeter, Volume)" << endl;
    cout << "[3] Powers" << endl;
    cout << "[4] Factorials and Related" << endl;
    cout << "[5] Other Functions" << endl;
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
        factorialsFunc();
        break;

    case 5:
        otherFunc();
        break;

    case 727:
        cout << "COMING SOON" << endl;
        cout << "- Factoring Polynomials and stuff" << endl;
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

    cout << "OTHER OPTIONS" << endl;
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
    cout << "[11] Tax calculation" << endl;

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

    case 11:
        taxFunction();
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
    cout << "[4] Surface Area of:" << endl;
    cout << "[5] Circumference" << endl;
    cout << "[6] Hypotenuse of: " << endl;
    cout << "[7] Find Tangent of" << endl;
    cout << "[8] Find Cosine of" << endl;
    cout << "[9] Find Sine of" << endl;
    cout << endl;
    cout << "<!-- POWERS --!>" << endl;
    cout << "[1] Power of" << endl;
    cout << "[2] Square of" << endl;
    cout << "[3] Square Root of" << endl;
    cout << "[4] Simplify Square Root of" << endl;
    cout << "[5] Cube of" << endl;
    cout << endl;
    cout << "<!-- FACTORIALS --!>" << endl;
    cout << "[1] Factorial of (Up to 9 for now): " << endl;
    cout << "[2] Number of Paths in a grid going 2 directions: " << endl;
    cout << "[3] Choose Notation: " << endl;
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
    cout << "[11] Tax calculation" << endl;

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
    double firstDouble, secondDouble, thirdDouble, doubleAnswer, baseArea;
    int optionChose, subOption;
    double triangleBase, triangleHeight, triangleArea;
    string stringVar = "";
    double piNum = 3.1415926535;

    cout << "GEOMETRY/ANGLES OPTIONS:" << endl;
    cout << "[1] Area of: " << endl;
    cout << "[2] Perimeter of: " << endl;
    cout << "[3] Volume of: " << endl;
    cout << "[4] Surface Area of:" << endl;
    cout << "[5] Circumference" << endl;
    cout << "[6] Hypotenuse of: " << endl;
    cout << "[7] Find Tangent of" << endl;
    cout << "[8] Find Cosine of" << endl;
    cout << "[9] Find Sine of" << endl;

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
        cout << "SURFACE AREA" << endl;
        cout << "What shape do you want the surface area of?: " << endl;
        cout << "[1] Cube" << endl;
        cout << "[2] Rectangular Prism" << endl;
        cout << "[3] Triangular Prism" << endl;
        cout << "[4] Right Pyramid" << endl;
        cout << "[5] Right Cylinder" << endl;
        cout << "[6] Right Circular Cone" << endl;
        cout << "[7] Sphere" << endl;
        cout << "[8] Hemisphere" << endl;

        cin >> subOption;

        switch(subOption)
        {
        case 1:
            cout << "SURFACE AREA OF CUBE" << endl;

            cout << "Enter side length: ";
            cin >> firstDouble;

            secondDouble = pow(firstDouble, 2);
            doubleAnswer = 6 * secondDouble;

            printf("The surface area of the cube is %f", doubleAnswer);
            break;

        case 2:
            cout << "SURFACE AREA OF RECTANGULAR PRISM" << endl;

            cout << "Enter base length: ";
            cin >> firstDouble;

            cout << "Enter height length: ";
            cin >> secondDouble;

            cout << "Enter depth length: ";
            cin >> thirdDouble;

            doubleAnswer = 2 * ((firstDouble * secondDouble) + (secondDouble * thirdDouble) + (thirdDouble * firstDouble));

            printf("The surface area of the rectangular prism is %f", doubleAnswer);
            break;

        case 3:
            cout << "SURFACE AREA OF TRIANGULAR PRISM" << endl;

            cout << "Enter triangle base: ";
            cin >> triangleBase;

            cout << "Enter triangle height: ";
            cin >> triangleHeight;

            cout << "Enter first side length: ";
            cin >> firstDouble;

            cout << "Enter second side length: ";
            cin >> secondDouble;

            cout << "Enter length/depth: ";
            cin >> thirdDouble;

            triangleArea = triangleBase * triangleHeight;

            doubleAnswer = triangleArea + ((firstDouble + secondDouble + triangleBase) * thirdDouble);

            printf("The surface area of the triangular prism is %f", doubleAnswer);
            break;

        case 4:
            cout << "SURFACE AREA OF RIGHT PYRAMID" << endl;

            cout << "Enter base length: ";
            cin >> firstDouble;

            cout << "Enter base width: ";
            cin >> secondDouble;

            cout << "Enter triangle base: ";
            cin >> triangleBase;

            cout << "Enter triangle height: ";
            cin >> triangleHeight;

            triangleArea = 2 * (triangleBase * triangleHeight);

            doubleAnswer = (firstDouble * secondDouble) * triangleArea;

            printf("The surface area of the right pyramid is %f", doubleAnswer);
            break;

        case 5:
            cout << "SURFACE AREA OF CYLINDER" << endl;

            cout << "Enter radius: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            baseArea = 2 * piNum * firstDouble * secondDouble;

            doubleAnswer = baseArea + (2 * piNum * (firstDouble * firstDouble));

            printf("The surface area of the cylinder is %f", doubleAnswer);
            break;

        case 6:
            cout << "SURFACE AREA OF CONE" << endl;

            cout << "Enter radius: ";
            cin >> firstDouble;

            cout << "Enter height: ";
            cin >> secondDouble;

            baseArea = firstDouble + sqrt((secondDouble * secondDouble) + (firstDouble * firstDouble));


            doubleAnswer = piNum * firstDouble * baseArea;

            printf("The surface area of the cone is %f", doubleAnswer);
                break;

        case 7:
            cout << "SURFACE AREA OF A SPHERE" << endl;

            cout << "Enter radius: ";
            cin >> firstDouble;

            doubleAnswer = 4 * piNum * pow(firstDouble, 2);

            printf("The surface area of the sphere is %f", doubleAnswer);
            break;

        case 8:
            cout << "SURFACE AREA OF A HEMISPHERE" << endl;

            cout << "Enter radius: ";
            cin >> firstDouble;

            doubleAnswer = 3 * piNum * pow(firstDouble, 2);

            printf("The surface area of the hemisphere is %f", doubleAnswer);
            break;

        default:
            cout << "Sorry, not an option yet" << endl;
        }
        break;

    case 5:
        cout << "CIRCUMFERENCE OF A CIRCLE" << endl;
        cout << "Enter radius: ";
        cin >> firstDouble;

        doubleAnswer = 2 * firstDouble * piNum;
        printf("The circumference of the circle is: %f\n", firstDouble);
        break;

    case 6:
        cout << "HYPOTENUSE" << endl;
        cout << "Enter a: ";
        cin >> firstDouble;
        cout << "Enter b: ";
        cin >> secondDouble;
        doubleAnswer = hypot(firstDouble, secondDouble);
        printf("C is %f", doubleAnswer);
        break;

    case 7:
        cout << "TANGENT" << endl;
        cout << "Enter number: ";
        cin >> firstDouble;
        doubleAnswer = tan(firstDouble);
        printf("The tangent of %f is %f", firstDouble, doubleAnswer);
        break;

    case 8:
        cout << "COSINE" << endl;
        cout << "Enter number: ";
        cin >> firstDouble;
        doubleAnswer = cos(firstDouble);
        printf("The cosine of %f is %f", firstDouble, doubleAnswer);
        break;

    case 9:
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

factorialClass::factorialClass(double num)
{
    startNum = num;
}

double factorialClass::calculateFactorial()
{
    double factAnswer = 1.0;
    while(startNum > 0)
    {
        factAnswer *= startNum;
        startNum -= 1;
    }
    return factAnswer;
}

void factorialsFunc()
{
    int choseOption;
    double factorialNum, factorialNum1, factorialNum2, addedFactorialNum, gridAnswer, cNotationAnswer;

    cout << "FACTORIALS" << endl;
    cout << "[1] Factorial of (Up to 9 for now): " << endl;
    cout << "[2] Number of Paths in a grid going 2 directions: " << endl;
    cout << "[3] Choose Notation: " << endl;

    cin >> choseOption;

    if(choseOption == 1)
    {
        cout << "FACTORIAL OF (UP TO 9 FOR NOW)" << endl;
        cout << "Enter number: ";

        cin >> factorialNum;

        factorialClass factorialObj1(factorialNum);
        cout << "The factorial of " << factorialNum << " is " << factorialObj1.calculateFactorial() << endl;
    }
    else if(choseOption == 2)
    {
        cout << "GRID 2 WAY PATHWAYS" << endl;

        cout << "Enter number of spaces on bottom: ";
        cin >> factorialNum1;

        cout << "Enter number of spaces on side: ";
        cin >> factorialNum2;

        addedFactorialNum = factorialNum1 + factorialNum2;

        factorialClass factorialSum(addedFactorialNum);

        factorialClass gridObj1(factorialNum1);
        factorialClass gridObj2(factorialNum2);

        gridAnswer = factorialSum.calculateFactorial() / (gridObj1.calculateFactorial() * gridObj2.calculateFactorial());

        cout << gridAnswer << endl;
    }
    else if(choseOption == 3)
    {
        cout << "CHOOSE NOTATION" << endl;

        cout << "Enter x (xCy): ";
        cin >> factorialNum1;

        cout << "Enter y (xCy): ";
        cin >> factorialNum2;

        addedFactorialNum = factorialNum1 - factorialNum2;

        factorialClass chooseObj1(factorialNum1);

        factorialClass chooseSum(addedFactorialNum);
        factorialClass chooseObj2(factorialNum2);

        cNotationAnswer = chooseObj1.calculateFactorial() / (chooseSum.calculateFactorial() * chooseObj2.calculateFactorial());

        cout << "The answer of " << factorialNum1 << "C" << factorialNum2 << " is: " << cNotationAnswer << endl;
    }
    else
    {
        cout << "Not an option yet, sorry" << endl;
    }
}

void taxFunction()
{
    int optionChose;
    double taxMulti;
    double taxPercent;
    double afterTaxTotal;
    double moneyAmount;

    cout << "TAXES" << endl;
    cout << "What would you like to do?: " << endl;
    cout << "[1] Ontario Tax" << endl;
    cout << "[2] Custom Amount" << endl;
    cout << "[0] End" << endl;

    cin >> optionChose;

    if(optionChose == 1)
    {
        cout << "ONTARIO TAX" << endl;
        cout << "Tax is 13%" << endl;

        taxPercent = 13;
        taxMulti = (taxPercent / 100) + 1;

        cout << "Enter price: ";
        cin >> moneyAmount;

        afterTaxTotal = taxMulti * moneyAmount;

        cout << "Your total after tax is: " << afterTaxTotal << endl;
    }
    else if(optionChose == 2)
    {
        cout << "OTHER TAX" << endl;
        cout << "Tax is unset" << endl;

        cout << "Enter tax percent: ";
        cin >> taxPercent;

        taxMulti = (taxPercent / 100) + 1;

        cout << "Enter price: ";
        cin >> moneyAmount;

        afterTaxTotal = taxMulti * moneyAmount;

        cout << "Your total after tax is: " << afterTaxTotal << endl;
    }
    else
    {
        printf("Not an option yet, sorry\n");
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
