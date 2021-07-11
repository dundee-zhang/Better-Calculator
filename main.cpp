#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstdlib>

#define YEAR 2021
#define CREDITNAME "Dundee Zhang"

class factorialClass
{
public:
    explicit factorialClass(double num);
    double calculateFactorial();

private:
    double startNum;
};

class gcfClass
{
public:
    gcfClass(double x, double y);
    void getGCF();
    [[nodiscard]] double returnGCF() const;

private:
    double gcfNumOne, gcfNumTwo;
};

void basicSolve();
void otherFunc();
void listofFunc();
void primeNumber();
void getFactors();
void getGCF();
void getLCM();
void simpleRad();
void geometryFunc();
void powersFunc();
void factorialsFunc();
void taxFunction();
void solveFactors();
void solveQuadraticEq();

int main()
{
    int option;
    std::cout << "What would you like to do?: " << std::endl;
    std::cout << "[1] Basic Calculations (+, -, /, *)" << std::endl;
    std::cout << "[2] Geometry/Angles (Area, Perimeter, Volume)" << std::endl;
    std::cout << "[3] Powers" << std::endl;
    std::cout << "[4] Factorials and Related" << std::endl;
    std::cout << "[5] Factoring" << std::endl;
    std::cout << "[6] Other Functions" << std::endl;
    std::cout << "[0] List of What I Can Do" << std::endl;
    std::cout << "[127] Credits" << std::endl;
    std::cout << "[727] Coming Soon" << std::endl;

    std::cin >> option;

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
            solveFactors();
            break;

        case 6:
            otherFunc();
            break;

        case 727:
            std::cout << "COMING SOON" << std::endl;
            std::cout << "- Probably somethings like random number gen" << std::endl;
            std::cout << "- Whatever stuff I need" << std::endl;
            break;

        case 127:
            std::cout << "(2021) Created by: " << CREDITNAME << std::endl;
            break;

        case 0:
            listofFunc();
            break;
        default:
            std::cout << std::endl << "That isn't an option" << std::endl;
    }

    return 0;
}

void basicSolve()
{
    int op;
    double x, y;
    double result;
    std::string stringVar;

    printf("BASIC FUNCTIONS \n");
    printf("What would you like to do? \n");
    std::cout << "[1] Add" << std::endl;
    std::cout << "[2] Infinite Adding" << std::endl;
    std::cout << "[3] Subtract" << std::endl;
    std::cout << "[4] Infinite Subtracting" << std::endl;
    std::cout << "[5] Multiply" << std::endl;
    std::cout << "[6] Infinite Multiplying" << std::endl;
    std::cout << "[7] Divide" << std::endl;
    std::cout << "[8] Infinite Dividing" << std::endl;

    std::cin >> op;

    switch(op)
    {
        case 1:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;

            printf("ADDITION \n");
            result = x + y;

            printf("Your answer is %f", result);
            break;

        case 2:
            std::cout << "Enter number: ";
            std::cin >> x;

            printf("INFINITE ADDITION \n");
            while(stringVar != "quit")
            {
                std::cout << "The current sum is: "<< x << std::endl;

                std::cout << "Continue adding or enter \"quit\" to quit: ";
                std::cin >> stringVar;

                x += atof(stringVar.c_str());
            }
            break;

        case 3:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;

            printf("SUBTRACTION \n");
            result = x - y;

            printf("Your answer is %f", result);
            break;

        case 4:
            std::cout << "Enter first number: ";
            std::cin >> x;

            printf("INFINITE SUBTRACTION \n");
            while(stringVar != "quit")
            {
                std::cout << "The current answer is: "<< x << std::endl;

                std::cout << "Continue adding or enter \"quit\" to quit: ";
                std::cin >> stringVar;

                x -= atof(stringVar.c_str());
            }
            break;

        case 5:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;

            printf("MULTIPLICATION \n");
            result = x * y;

            printf("Your answer is %f", result);
            break;

        case 6:
            std::cout << "Enter first number: ";
            std::cin >> x;

            printf("INFINITE MULTIPLICATION \n");
            while(stringVar != "quit")
            {
                std::cout << "The current product is: "<< x << std::endl;

                std::cout << "Continue adding or enter \"quit\" to quit: ";
                std::cin >> stringVar;

                x *= atof(stringVar.c_str());
            }
            break;

        case 7:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;

            printf("DIVISION \n");
            result = x / y;

            printf("Your answer is %f", result);
            break;

        case 8:
            std::cout << "Enter first number: ";
            std::cin >> x;

            printf("INFINITE DIVISION \n");
            while(stringVar != "quit")
            {
                std::cout << "The current answer is: "<< x << std::endl;

                std::cout << "Continue adding or enter \"quit\" to quit: ";
                std::cin >> stringVar;

                x /= atof(stringVar.c_str());
            }
            break;

        default:
            std::cout << "Error: input error" << std::endl;
    }
}

void otherFunc()
{
    double dx, dy;
    int year, answerInt, count;
    int x = 0;
    double danswer = 0.0, average;
    int option;

    std::cout << "OTHER OPTIONS" << std::endl;
    printf("What would you like to do: \n");
    std::cout << "[1] Smaller Number" << std::endl;
    std::cout << "[2] Larger Number" << std::endl;
    std::cout << "[3] Remainder of" << std::endl;
    std::cout << "[4] Round the Number" << std::endl;
    std::cout << "[5] Is Number Prime?" << std::endl;
    std::cout << "[6] Find GCF/GCD of" << std::endl;
    std::cout << "[7] Find LCM of" << std::endl;
    std::cout << "[8] Average of" << std::endl;
    std::cout << "[9] Tax calculation" << std::endl;
    std::cout << "[10] Age of" << std::endl;
    std::cout << "[0] Exit" << std::endl;

    std::cin >> option;

    switch(option)
    {
        case 1:
            printf("SMALLER OF \n");
            std::cout << "Enter first number: ";
            std::cin >> dx;
            std::cout << "Enter second number: ";
            std::cin >> dy;

            danswer = fmin(dx, dy);
            printf("Your answer is %f", danswer);
            break;

        case 2:
            printf("LARGER OF \n");
            std::cout << "Enter first number: ";
            std::cin >> dx;
            std::cout << "Enter second number: ";
            std::cin >> dy;

            danswer = fmax(dx, dy);
            printf("Your answer is %f", danswer);
            break;

        case 3:
            printf("REMAINDER OF \n");
            std::cout << "Enter first number: ";
            std::cin >> dx;
            std::cout << "Enter second number: ";
            std::cin >> dy;
            danswer = remainder(dx, dy);
            printf("Your answer is %f", danswer);
            break;

        case 4:
            printf("ROUNDED OF \n");
            std::cout << "Enter number: ";
            std::cin >> dx;
            danswer = round(dx);
            printf("Your answer is %f", danswer);
            break;

        case 5:
            printf("IS IT PRIME? \n");
            primeNumber();
            break;

        case 6:
            printf("FIND GCF \n");
            getGCF();
            break;

        case 7:
            printf("FIND LCM \n");
            getLCM();
            break;

        case 8:
            printf("GET AVERAGE \n");
            std::cout << "How many numbers?" << std::endl;
            std::cin >> count;

            while(x < count)
            {
                std::cout << "Enter Number: ";
                std::cin >> dx;
                danswer += dx;
                x++;
            }
            average = danswer / count;
            std::cout << "The average is: " << average << std::endl;
            break;

        case 9:
            taxFunction();
            break;

        case 10:
            std::cout << "What is the starting year?: ";
            std::cin >> year;

            answerInt = YEAR - year;

            printf("It is/They are %i years old\n", answerInt);
            break;

        case 0:
            std::cout << "Goodbye!" << std::endl;
            break;

        default:
            std::cout << std::endl << "Error: input error" << std::endl;
    }

}

void listofFunc()
{
    std::cout << std::endl;
    std::cout << "<!-- START OF LIST --!>" << std::endl;
    std::cout << "[0] Exit" << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- BASIC --!>" << std::endl;
    std::cout << "[1] Add" << std::endl;
    std::cout << "[2] Infinite Adding" << std::endl;
    std::cout << "[3] Subtract" << std::endl;
    std::cout << "[4] Infinite Subtracting" << std::endl;
    std::cout << "[5] Multiply" << std::endl;
    std::cout << "[6] Infinite Multiplying" << std::endl;
    std::cout << "[7] Divide" << std::endl;
    std::cout << "[8] Infinite Dividing" << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- GEOMETRY AND ANGLES --!>" << std::endl;
    std::cout << "[1] Area of: " << std::endl;
    std::cout << "[2] Perimeter of: " << std::endl;
    std::cout << "[3] Volume of: " << std::endl;
    std::cout << "[4] Surface Area of:" << std::endl;
    std::cout << "[5] Circumference" << std::endl;
    std::cout << "[6] Hypotenuse of: " << std::endl;
    std::cout << "[7] Find Tangent of" << std::endl;
    std::cout << "[8] Find Cosine of" << std::endl;
    std::cout << "[9] Find Sine of" << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- POWERS --!>" << std::endl;
    std::cout << "[1] Power of" << std::endl;
    std::cout << "[2] Square of" << std::endl;
    std::cout << "[3] Square Root of" << std::endl;
    std::cout << "[4] Simplify Square Root of" << std::endl;
    std::cout << "[5] Cube of" << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- FACTORIALS --!>" << std::endl;
    std::cout << "[1] Factorial of (Up to 9 for now): " << std::endl;
    std::cout << "[2] Number of Paths in a grid going 2 directions: " << std::endl;
    std::cout << "[3] Choose Notation: " << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- FACTORING --!>" << std::endl;
    std::cout << "[1] All Factors of" << std::endl;
    std::cout << "[2] Prime Factor" << std::endl;
    std::cout << "[3] Factoring Trinomials" << std::endl;
    std::cout << "[4] Quadratic Equation" << std::endl;
    std::cout << std::endl;
    std::cout << "<!-- OTHER/UNORGANIZED YET --!>" << std::endl;
    std::cout << "[1] Smaller Number" << std::endl;
    std::cout << "[2] Larger Number" << std::endl;
    std::cout << "[3] Remainder of" << std::endl;
    std::cout << "[4] Round the Number" << std::endl;
    std::cout << "[5] Is Number Prime?" << std::endl;
    std::cout << "[6] Find GCF/GCD of" << std::endl;
    std::cout << "[7] Find LCM of" << std::endl;
    std::cout << "[8] Find Average of" << std::endl;
    std::cout << "[9] Tax calculation" << std::endl;
    std::cout << "[10] Age of" << std::endl;

    std::cout << std::endl;

}

void primeNumber()
{
    int n;
    int i;
    int m;
    int flag = 0;

    std::cout << "Enter number: ";
    std::cin >> n;

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
    std::cout << "Enter number: ";
    std::cin >> number;
    printf("The factors of %d are: ", number);

    while(temp <= number)
    {
        if(not(number % temp))
        {
            std::cout << temp << " ";
        }

        temp++;
    }
    std::cout << std::endl;
}

void getGCF()
{
    int n1, n2;

    std::cout << "Enter first number: ";
    std::cin >> n1;

    std::cout << "Enter second number: ";
    std::cin >> n2;

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
    std::cout << "The GCF/GCD is: " << n1;
}

void getLCM()
{
    int n1, n2, max;

    std::cout << "Enter first number: ";
    std::cin >> n1;

    std::cout << "Enter second number: ";
    std::cin >> n2;

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
    int i, n, n2, last, finalThing;
    last = 0;
    finalThing = 1;
    printf("Enter number to calculate root: ");
    scanf("%d", & n);
    n2 = n;
    for (i = 2; i <= n; ++i) {
        if (n % i == 0) {
            if (i == last) {
                finalThing = finalThing * last;
                last = 0;
            } else {
                last = i;
            }
            n /= i;
            i--;
        }
    }
    n = n2 / (finalThing * finalThing);
    printf("\nThe answer is: %d√%d", finalThing, n);
}

void geometryFunc()
{
    double firstDouble, secondDouble, thirdDouble, doubleAnswer = 0.0, baseArea;
    int optionChose, subOption;
    double triangleBase, triangleHeight, triangleArea;
    std::string stringVar;
    double piNum = 3.1415926535;

    std::cout << "GEOMETRY/ANGLES OPTIONS:" << std::endl;
    std::cout << "[1] Area of: " << std::endl;
    std::cout << "[2] Perimeter of: " << std::endl;
    std::cout << "[3] Volume of: " << std::endl;
    std::cout << "[4] Surface Area of:" << std::endl;
    std::cout << "[5] Circumference" << std::endl;
    std::cout << "[6] Hypotenuse of: " << std::endl;
    std::cout << "[7] Find Tangent of" << std::endl;
    std::cout << "[8] Find Cosine of" << std::endl;
    std::cout << "[9] Find Sine of" << std::endl;
    std::cout << "[0] Exit" << std::endl;

    std::cin >> optionChose;

    switch(optionChose)
    {
        case 1:
            std::cout << "AREA OF: " << std::endl;
            std::cout << "What shape do you want the area of?: " << std::endl;
            std::cout << "[1] Square" << std::endl;
            std::cout << "[2] Rectangle" << std::endl;
            std::cout << "[3] Triangle" << std::endl;
            std::cout << "[4] Circle" << std::endl;
            std::cout << "[5] Trapezoid" << std::endl;
            std::cout << "[6] Parallelogram" << std::endl;
			std::cout << "[0] Exit" << std::endl;

            std::cin >> subOption;

            switch(subOption)
            {
                case 1:
                    std::cout << "AREA OF SQUARE" << std::endl;
                    std::cout << "Enter side length: ";

                    std::cin >> firstDouble;

                    doubleAnswer = firstDouble * firstDouble;

                    printf("The area of your square is: %f\n", doubleAnswer);
                    break;

                case 2:
                    std::cout << "AREA OF RECTANGLE" << std::endl;

                    std::cout << "Enter length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter width: ";
                    std::cin >> secondDouble;

                    doubleAnswer = firstDouble * secondDouble;

                    printf("The area of your rectangle is: %f\n", doubleAnswer);
                    break;

                case 3:
                    std::cout << "AREA OF TRIANGLE" << std::endl;

                    std::cout << "Enter base: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    doubleAnswer = (firstDouble * secondDouble) / 2;

                    printf("The area of your triangle is: %f\n", doubleAnswer);
                    break;

                case 4:
                    std::cout << "AREA OF CIRCLE" << std::endl;

                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    std::cout << std::endl << "Pi is going to be 3.1415926535" << std::endl;

                    doubleAnswer = (firstDouble * firstDouble) * piNum;

                    printf("The area of your circle is: %f\n", doubleAnswer);
                    break;

                case 5:
                    std::cout << "AREA OF TRAPEZOID" << std::endl;

                    std::cout << "Enter base: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter top: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter height: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = ((firstDouble + secondDouble)/2) * thirdDouble;

                    printf("The area of your rectangle is: %f\n", doubleAnswer);
                    break;

                case 6:
                    std::cout << "AREA OF PARALLELOGRAM" << std::endl;

                    std::cout << "Enter base: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    doubleAnswer = firstDouble * secondDouble;

                    printf("The area of your parallelogram is: %f\n", doubleAnswer);
                    break;

				case 0:
					std::cout << "Goodbye!" << std::endl;
					break;

                default:
                    std::cout << "Not an option yet, sorry" << std::endl;
            }
            break;

        case 2:
            std::cout << "PERIMETER OF: " << std::endl;
            std::cout << "What shape do you want the perimeter of?: " << std::endl;
            std::cout << "[1] Square" << std::endl;
            std::cout << "[2] Rectangle" << std::endl;
            std::cout << "[3] Triangle" << std::endl;
            std::cout << "[4] Trapezoid" << std::endl;
            std::cout << "[5] Parallelogram" << std::endl;
            std::cout << "[6] Other (infinite addition)" << std::endl;

            std::cin >> subOption;

            switch(subOption)
            {
                case 1:
                    std::cout << "PERIMETER OF SQUARE" << std::endl;
                    std::cout << "Enter first side length: ";

                    std::cin >> firstDouble;

                    doubleAnswer = firstDouble * 4;

                    printf("The perimeter of your square is: %f\n", doubleAnswer);
                    break;

                case 2:
                    std::cout << "PERIMETER OF RECTANGLE" << std::endl;

                    std::cout << "Enter length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter width: ";
                    std::cin >> secondDouble;

                    doubleAnswer = (firstDouble * 2) + (secondDouble * 2);

                    printf("The perimeter of your rectangle is: %f\n", doubleAnswer);
                    break;

                case 3:
                    std::cout << "PERIMETER OF TRIANGLE" << std::endl;

                    std::cout << "Enter side 1: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter side 2: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter side 3: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = firstDouble + secondDouble + thirdDouble;

                    printf("The perimeter of your triangle is: %f\n", doubleAnswer);
                    break;

                case 4:
                    std::cout << "PERIMETER OF TRAPEZOID" << std::endl;

                    std::cout << "Enter base: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter top: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter sides: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = firstDouble + secondDouble + (thirdDouble * 2);

                    printf("The perimeter of your trapezoid is: %f\n", doubleAnswer);
                    break;

                case 5:
                    std::cout << "PERIMETER OF PARALLELOGRAM" << std::endl;

                    std::cout << "Enter base: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    doubleAnswer = (firstDouble * 2) + (secondDouble * 2);

                    printf("The perimeter of your parallelogram is: %f\n", doubleAnswer);
                    break;

                case 6:
                    std::cout << "INFINITE ADDITION" << std::endl;
                    while(stringVar != "quit") {
                        std::cout << "The current sum is: "<< doubleAnswer << std::endl;
                        std::cout << "Continue adding or enter \"quit\" to quit: ";
                        std::cin >> stringVar;
                        doubleAnswer += atof(stringVar.c_str());
                    }
                    break;

                case 0:
                    std::cout << "Goodbye!" << std::endl;
                    break;

                default:
                    std::cout << "Sorry not a thing yet" << std::endl;
            }
            break;

        case 3:
            std::cout << "VOLUME OF: " << std::endl;
            std::cout << "What shape do you want the volume of?: " << std::endl;
            std::cout << "[1] Cube" << std::endl;
            std::cout << "[2] Rectangular Prism" << std::endl;
            std::cout << "[3] Triangular Prism" << std::endl;
            std::cout << "[4] Sphere" << std::endl;
            std::cout << "[5] Regular Cylinder" << std::endl;
            std::cout << "[6] Regular Cone" << std::endl;
            std::cout << "[7] B * H * D" << std::endl;
            std::cout << "[0] Exit" << std::endl;

            std::cin >> subOption;

            switch(subOption)
            {
                case 1:
                    std::cout << "VOLUME OF CUBE" << std::endl;
                    std::cout << "Enter side length: ";
                    std::cin >> firstDouble;

                    doubleAnswer = (firstDouble * firstDouble * firstDouble);

                    printf("The volume of the cube is: %f\n", doubleAnswer);
                    break;

                case 2:
                    std::cout << "VOLUME OF RECTANGULAR PRISM" << std::endl;

                    std::cout << "Enter base length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height length: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter depth length: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = (firstDouble * secondDouble * thirdDouble);
                    printf("The volume of your rectangular prism is: %f\n", doubleAnswer);
                    break;

                case 3:
                    std::cout << "VOLUME OF TRIANGULAR PRISM" << std::endl;
                    std::cout << "Enter base length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height length: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter depth length: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = ((firstDouble * secondDouble) / 2) * thirdDouble;
                    printf("The volume of your triangular prism is: %f\n", doubleAnswer);
                    break;

                case 4:
                    std::cout << "VOLUME OF SPHERE" << std::endl;
                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    doubleAnswer = (4/3) * piNum * (firstDouble * firstDouble * firstDouble);
                    printf("The volume of your sphere is: %f\n", doubleAnswer);
                    break;

                case 5:
                    std::cout << "VOLUME OF REGULAR CYLINDER" << std::endl;
                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    doubleAnswer = secondDouble * piNum * (firstDouble * firstDouble);
                    printf("The volume of your cylinder is: %f\n", doubleAnswer);
                    break;

                case 6:
                    std::cout << "VOLUME OF REGULAR CONE" << std::endl;
                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    doubleAnswer =  (secondDouble * piNum * (firstDouble * firstDouble)) / 3;
                    printf("The volume of your cylinder is: %f\n", doubleAnswer);
                    break;

                case 7:
                    std::cout << "B * H * D" << std::endl;
                    std::cout << "Enter base length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height length: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter depth length: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = (firstDouble * secondDouble * thirdDouble);
                    printf("The volume of your prism is: %f\n", doubleAnswer);
                    break;

                case 0:
                    std::cout << "Goodbye!" << std::endl;
                    break;

                default:
                    std::cout << "Sorry not a thing yet" << std::endl;
            }
            break;

        case 4:
            std::cout << "SURFACE AREA" << std::endl;
            std::cout << "What shape do you want the surface area of?: " << std::endl;
            std::cout << "[1] Cube" << std::endl;
            std::cout << "[2] Rectangular Prism" << std::endl;
            std::cout << "[3] Triangular Prism" << std::endl;
            std::cout << "[4] Right Pyramid" << std::endl;
            std::cout << "[5] Right Cylinder" << std::endl;
            std::cout << "[6] Right Circular Cone" << std::endl;
            std::cout << "[7] Sphere" << std::endl;
            std::cout << "[8] Hemisphere" << std::endl;
            std::cout << "[0] Exit" << std::endl;

            std::cin >> subOption;

            switch(subOption)
            {
                case 1:
                    std::cout << "SURFACE AREA OF CUBE" << std::endl;

                    std::cout << "Enter side length: ";
                    std::cin >> firstDouble;

                    secondDouble = pow(firstDouble, 2);
                    doubleAnswer = 6 * secondDouble;

                    printf("The surface area of the cube is %f", doubleAnswer);
                    break;

                case 2:
                    std::cout << "SURFACE AREA OF RECTANGULAR PRISM" << std::endl;

                    std::cout << "Enter base length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height length: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter depth length: ";
                    std::cin >> thirdDouble;

                    doubleAnswer = 2 * ((firstDouble * secondDouble) + (secondDouble * thirdDouble) + (thirdDouble * firstDouble));

                    printf("The surface area of the rectangular prism is %f", doubleAnswer);
                    break;

                case 3:
                    std::cout << "SURFACE AREA OF TRIANGULAR PRISM" << std::endl;

                    std::cout << "Enter triangle base: ";
                    std::cin >> triangleBase;

                    std::cout << "Enter triangle height: ";
                    std::cin >> triangleHeight;

                    std::cout << "Enter first side length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter second side length: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter length/depth: ";
                    std::cin >> thirdDouble;

                    triangleArea = triangleBase * triangleHeight;

                    doubleAnswer = triangleArea + ((firstDouble + secondDouble + triangleBase) * thirdDouble);

                    printf("The surface area of the triangular prism is %f", doubleAnswer);
                    break;

                case 4:
                    std::cout << "SURFACE AREA OF RIGHT PYRAMID" << std::endl;

                    std::cout << "Enter base length: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter base width: ";
                    std::cin >> secondDouble;

                    std::cout << "Enter triangle base: ";
                    std::cin >> triangleBase;

                    std::cout << "Enter triangle height: ";
                    std::cin >> triangleHeight;

                    triangleArea = 2 * (triangleBase * triangleHeight);

                    doubleAnswer = (firstDouble * secondDouble) * triangleArea;

                    printf("The surface area of the right pyramid is %f", doubleAnswer);
                    break;

                case 5:
                    std::cout << "SURFACE AREA OF CYLINDER" << std::endl;

                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    baseArea = 2 * piNum * firstDouble * secondDouble;

                    doubleAnswer = baseArea + (2 * piNum * (firstDouble * firstDouble));

                    printf("The surface area of the cylinder is %f", doubleAnswer);
                    break;

                case 6:
                    std::cout << "SURFACE AREA OF CONE" << std::endl;

                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    std::cout << "Enter height: ";
                    std::cin >> secondDouble;

                    baseArea = firstDouble + sqrt((secondDouble * secondDouble) + (firstDouble * firstDouble));


                    doubleAnswer = piNum * firstDouble * baseArea;

                    printf("The surface area of the cone is %f", doubleAnswer);
                    break;

                case 7:
                    std::cout << "SURFACE AREA OF A SPHERE" << std::endl;

                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    doubleAnswer = 4 * piNum * pow(firstDouble, 2);

                    printf("The surface area of the sphere is %f", doubleAnswer);
                    break;

                case 8:
                    std::cout << "SURFACE AREA OF A HEMISPHERE" << std::endl;

                    std::cout << "Enter radius: ";
                    std::cin >> firstDouble;

                    doubleAnswer = 3 * piNum * pow(firstDouble, 2);

                    printf("The surface area of the hemisphere is %f", doubleAnswer);
                    break;

                case 0:
                    std::cout << "Goodbye!" << std::endl;
                    break;

                default:
                    std::cout << "Sorry, not an option yet" << std::endl;
            }
            break;

        case 5:
            std::cout << "CIRCUMFERENCE OF A CIRCLE" << std::endl;
            std::cout << "Enter radius: ";
            std::cin >> firstDouble;

            doubleAnswer = 2 * firstDouble * piNum;
            printf("The circumference of the circle is: %f\n", doubleAnswer);
            break;

        case 6:
            std::cout << "HYPOTENUSE" << std::endl;
            std::cout << "Enter a: ";
            std::cin >> firstDouble;
            std::cout << "Enter b: ";
            std::cin >> secondDouble;
            doubleAnswer = hypot(firstDouble, secondDouble);
            printf("C is %f", doubleAnswer);
            break;

        case 7:
            std::cout << "TANGENT" << std::endl;
            std::cout << "Enter number: ";
            std::cin >> firstDouble;
            doubleAnswer = tan(firstDouble);
            printf("The tangent of %f is %f", firstDouble, doubleAnswer);
            break;

        case 8:
            std::cout << "COSINE" << std::endl;
            std::cout << "Enter number: ";
            std::cin >> firstDouble;
            doubleAnswer = cos(firstDouble);
            printf("The cosine of %f is %f", firstDouble, doubleAnswer);
            break;

        case 9:
            std::cout << "SINE" << std::endl;
            std::cout << "Enter number: ";
            std::cin >> firstDouble;
            doubleAnswer = sin(firstDouble);
            printf("The sine of %f is %f", firstDouble, doubleAnswer);
            break;

        case 0:
            std::cout << "Goodbye!" << std::endl;
            break;

        default:
            std::cout << std::endl << "Error: input error" << std::endl;
    }
}

void powersFunc()
{
    int optionChose;

    int firstInt, secondInt, intAnswer;
    double firstDouble, doubleAnswer;

    std::cout << "POWERS" << std::endl;
    printf("What would you like to do? \n");
    std::cout << "[1] Power of" << std::endl;
    std::cout << "[2] Square of" << std::endl;
    std::cout << "[3] Square Root of" << std::endl;
    std::cout << "[4] Simplify Square Root of" << std::endl;
    std::cout << "[5] Cube of" << std::endl;
	std::cout << "[0] Exit" << std::endl;

    std::cin >> optionChose;

    switch(optionChose)
    {
        case 1:
            printf("POWER OF \n");
            std::cout << "Enter first number: ";
            std::cin >> firstInt;
            std::cout << "Enter second number: ";
            std::cin >> secondInt;

            intAnswer = pow(firstInt, secondInt);
            printf("Your answer is %d", intAnswer);
            break;

        case 2:
            printf("SQUARE OF\n");
            std::cout << "Enter number: ";
            std::cin >> firstInt;

            intAnswer = pow(firstInt, 2);
            printf("Your answer is %d", intAnswer);
            break;

        case 3:
            printf("SQUARE ROOT OF \n");
            std::cout << "Enter number: ";
            std::cin >> firstDouble;

            doubleAnswer = sqrt(firstDouble);
            printf("Your answer is %f", doubleAnswer);
            break;

        case 4:
            printf("SIMPLIFY SQUARE ROOT \n");
            simpleRad();
            break;

        case 5:
            printf("CUBE OF\n");
            std::cout << "Enter number: ";
            std::cin >> firstInt;

            intAnswer = pow(firstInt, 3);
            printf("Your answer is %d", intAnswer);
            break;

		case 0:
			std::cout << "Goodbye!" << std::endl;
			break;

        default:
            std::cout << "Not an option yet, sorry" << std::endl;
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

    std::cout << "FACTORIALS" << std::endl;
    std::cout << "[1] Factorial of (Up to 9 for now): " << std::endl;
    std::cout << "[2] Number of Paths in a grid going 2 directions: " << std::endl;
    std::cout << "[3] Choose Notation: " << std::endl;
    std::cout << "[0] Exit" << std::endl;

    std::cin >> choseOption;

    if(choseOption == 1)
    {
        std::cout << "FACTORIAL OF (UP TO 9 FOR NOW)" << std::endl;
        std::cout << "Enter number: ";

        std::cin >> factorialNum;

        factorialClass factorialObj1(factorialNum);
        std::cout << "The factorial of " << factorialNum << " is " << factorialObj1.calculateFactorial() << std::endl;
    }
    else if(choseOption == 2)
    {
        std::cout << "GRID 2 WAY PATHWAYS" << std::endl;

        std::cout << "Enter number of spaces on bottom: ";
        std::cin >> factorialNum1;

        std::cout << "Enter number of spaces on side: ";
        std::cin >> factorialNum2;

        addedFactorialNum = factorialNum1 + factorialNum2;

        factorialClass factorialSum(addedFactorialNum);

        factorialClass gridObj1(factorialNum1);
        factorialClass gridObj2(factorialNum2);

        gridAnswer = factorialSum.calculateFactorial() / (gridObj1.calculateFactorial() * gridObj2.calculateFactorial());

        std::cout << gridAnswer << std::endl;
    }
    else if(choseOption == 3)
    {
        std::cout << "CHOOSE NOTATION" << std::endl;

        std::cout << "Enter x (xCy): ";
        std::cin >> factorialNum1;

        std::cout << "Enter y (xCy): ";
        std::cin >> factorialNum2;

        addedFactorialNum = factorialNum1 - factorialNum2;

        factorialClass chooseObj1(factorialNum1);

        factorialClass chooseSum(addedFactorialNum);
        factorialClass chooseObj2(factorialNum2);

        cNotationAnswer = chooseObj1.calculateFactorial() / (chooseSum.calculateFactorial() * chooseObj2.calculateFactorial());

        std::cout << "The answer of " << factorialNum1 << "C" << factorialNum2 << " is: " << cNotationAnswer << std::endl;
    }
    else if(choseOption == 0)
    {
        std::cout << "Goodbye!" << std::endl;
    }
    else
    {
        std::cout << "Not an option yet, sorry" << std::endl;
    }
}

void taxFunction()
{
    int optionChose;
    double taxMulti;
    double taxPercent;
    double afterTaxTotal;
    double moneyAmount;

    std::cout << "TAXES" << std::endl;
    std::cout << "What would you like to do?: " << std::endl;
    std::cout << "[1] Ontario Tax" << std::endl;
    std::cout << "[2] Custom Amount" << std::endl;
    std::cout << "[0] Exit" << std::endl;

    std::cin >> optionChose;

    if(optionChose == 1)
    {
        std::cout << "ONTARIO TAX" << std::endl;
        std::cout << "Tax is 13%" << std::endl;

        taxPercent = 13;
        taxMulti = (taxPercent / 100) + 1;

        std::cout << "Enter price: ";
        std::cin >> moneyAmount;

        afterTaxTotal = taxMulti * moneyAmount;

        std::cout << "Your total after tax is: " << afterTaxTotal << std::endl;
    }
    else if(optionChose == 2)
    {
        std::cout << "OTHER TAX" << std::endl;
        std::cout << "Tax is unset" << std::endl;

        std::cout << "Enter tax percent: ";
        std::cin >> taxPercent;

        taxMulti = (taxPercent / 100) + 1;

        std::cout << "Enter price: ";
        std::cin >> moneyAmount;

        afterTaxTotal = taxMulti * moneyAmount;

        std::cout << "Your total after tax is: " << afterTaxTotal << std::endl;
    }
    else if(optionChose == 0)
    {
        std::cout << "Goodbye!" << std::endl;
    }
    else
    {
        printf("Not an option yet, sorry\n");
    }

}

gcfClass::gcfClass(double x, double y)
{
    gcfNumOne = x;
    gcfNumTwo = y;
}

void gcfClass::getGCF()
{
    while(gcfNumOne != gcfNumTwo)
    {
        if(gcfNumOne > gcfNumTwo)
        {
            gcfNumOne = gcfNumOne - gcfNumTwo;
        }
        else
        {
            gcfNumTwo = gcfNumTwo - gcfNumOne;
        }
    }

}

double gcfClass::returnGCF() const
{
    return gcfNumOne;
}

void solveFactors()
{
    int optionDo;
    std::cout << "FACTORING" << std::endl;
    std::cout << "[1] All Factors of" << std::endl;
    std::cout << "[2] Prime Factor" << std::endl;
    std::cout << "[3] Factoring Trinomials" << std::endl;
    std::cout << "[4] Quadratic Equation" << std::endl;
    std::cout << "[0] Exit" << std::endl;

    std::cin >> optionDo;
    if(optionDo == 1)
    {
        printf("FACTORS OF \n");
        getFactors();
    }
    else if(optionDo == 2)
    {
        int ix;
        printf("PRIME FACTOR \n");
        std::cout << "Enter Number: ";
        std::cin >> ix;
        while(ix % 2 == 0)
        {
            std::cout << "2 • ";
            ix = ix / 2;
        }
        for(int i = 3; i <= sqrt(ix); i += 2)
        {
            while(ix % i ==0)
            {
                std::cout << i << " • ";
                ix = ix / i;
            }
        }
        if(ix > 2)
        {
            std::cout << ix << '\t';
        }
    }
    else if(optionDo == 3)
    {
        std::string perfectYes;

        std::cout << "FACTORING TRINOMIALS" << std::endl;
        std::cout << "Is is perfect?: ";
        std::cin >> perfectYes;

        if(perfectYes == "yes" || perfectYes == "Yes" || perfectYes == "y" || perfectYes == "Y" || perfectYes == "YES")
        {
            double b, answer;

            std::cout << "Enter b (ax^2 + bx + c): ";
            std::cin >> b;

            answer = b / 2;

            std::cout << "The factored polynomial is: (x+" << answer << ")^2" << std::endl;
        }
        else
        {
            int subOption;
            std::cout << "NOT PERFECT" << std::endl;
            std::cout << "What would you like to do?: " << std::endl;
            std::cout << "[1] Factor ax^2 + bx + c" << std::endl;
            std::cout << "[2] Factor ax^2 - bx + c" << std::endl;
            std::cout << "[0] Exit" << std::endl;

            std::cin >> subOption;

            if(subOption == 1)
            {
                std::cout << "FACTOR Ax^2 + Bx + C" << std::endl;
                double a, b, c;

                std::cout << "Enter a (ax^2 + bx + c): ";
                std::cin >> a;

                std::cout << "Enter b (ax^2 + bx + c): ";
                std::cin >> b;

                std::cout << "Enter c (ax^2 + bx + c): ";
                std::cin >> c;

                double halfB = b / 2;
                double halfBSquared = pow(halfB, 2);

                double stepThree = (a * c) - halfBSquared;
                double absStepThree = abs(stepThree);
                double stepSqrt = sqrt(absStepThree);

                double termBOne = halfB + stepSqrt;
                double termBTwo = halfB - stepSqrt;

                gcfClass SideOneObj(a, termBOne);
                SideOneObj.getGCF();
                double gcfSideOne = SideOneObj.returnGCF();

                gcfClass SideTwoObj(termBTwo, c);
                SideTwoObj.getGCF();
                double gcfSideTwo = SideTwoObj.returnGCF();

                double BracketTwoA = (a / gcfSideOne);
                double BracketTwoB = (termBOne / gcfSideOne);

                std::cout << "The factor version of this is: ";
                std::cout << "(" << BracketTwoA << "x" << "+" << BracketTwoB << ")";
                std::cout << "(" << gcfSideOne << "x" << "+" << gcfSideTwo << ")";
                std::cout << std::endl;
            }
            else if(subOption == 2)
            {
                std::cout << "FACTOR Ax^2 - Bx + C" << std::endl;
                double a, b, c;

                std::cout << "Enter a (ax^2 - bx + c): ";
                std::cin >> a;

                std::cout << "Enter b (ax^2 - bx + c): ";
                std::cin >> b;

                std::cout << "Enter c (ax^2 - bx + c): ";
                std::cin >> c;

                double halfB = b / 2;
                double halfBSquared = pow(halfB, 2);

                double stepThree = (a * c) - halfBSquared;
                double absStepThree = abs(stepThree);
                double stepSqrt = sqrt(absStepThree);

                double termBOne = (halfB) + stepSqrt;
                double termBTwo = (halfB) - stepSqrt;

                gcfClass SideOneObj(a, termBOne);
                SideOneObj.getGCF();
                double gcfSideOne = SideOneObj.returnGCF();

                gcfClass SideTwoObj(termBTwo, c);
                SideTwoObj.getGCF();
                double gcfSideTwo = SideTwoObj.returnGCF();

                double BracketTwoA = (a / gcfSideOne);
                double BracketTwoB = (termBOne / gcfSideOne);

                std::cout << "The factor version of this is: ";
                std::cout << "(" << BracketTwoA << "x" << "-" << BracketTwoB << ")";
                std::cout << "(" << gcfSideOne << "x" << "-" << gcfSideTwo << ")";
                std::cout << std::endl;
            }
            else if(subOption == 0)
            {
                std::cout << "Goodbye!" << std::endl;
            }
            else
            {
                std::cout << "Sorry not an option" << std::endl;
            }
        }
    }
    else if(optionDo == 4)
    {
        solveQuadraticEq();
    }
    else if(optionDo == 0)
    {
        std::cout << "Goodbye!" << std::endl;
    }
    else
    {
        std::cout << "Not an option" << std::endl;
    }
}

void solveQuadraticEq()
{
    std::cout << "QUADRATIC EQUATION" << std::endl;
    double a, b, c;

    std::cout << "Enter a (ax^2 - bx + c): ";
    std::cin >> a;

    std::cout << "Enter b (ax^2 - bx + c): ";
    std::cin >> b;

    std::cout << "Enter c (ax^2 - bx + c): ";
    std::cin >> c;


    double numSqrt = (pow(b, 2)) - (4 * a * c);
    double finalNumeratorPos = (-1 * b) + numSqrt;
    double finalNumeratorNeg = (-1 * b) - numSqrt;

    double posDenom = finalNumeratorPos / (2 * a);
    double negDenom = finalNumeratorNeg / (2 * a);

    std::cout << "Negative is: " << negDenom << std::endl;
    std::cout << "Positive is: " << posDenom << std::endl;
}
