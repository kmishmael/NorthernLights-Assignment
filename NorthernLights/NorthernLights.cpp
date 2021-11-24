#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cmath>
#include <tuple>
#define PI 3.142

using namespace std;

//Function Declarations
string splashScreen();
void initialize();
void functionsList();
void calcFunctions();
int inputInteger(string param);
tuple <int, int> inputIntegers();

//void functionChoice();
//Arithmetic functions
void addNumbers();
void subractNumbers();
void multiplyNumbers();
void divideNumbers();
void logofNumber();
void sineofAngle();
void cosofAngle();
void tanofAngle();
void squareofNumber();
void rootofNumber();
int flowResponse();
float toRadian(int angle);
double toDegree(float radian);
void log10Inverse();
void sineInverse();
void cosInverse();
void tanInverse(); //atan
void sineH();//sinh
void cosineH();
void TanH();
void cosecAngle();
void secAngle(); //use your maths concepts
void cotanAngle();
void naturalLog();
void exponential(); //use exp()
void hypotenuse();
void manhattanDistance();
void degtoRadian();
void RadiantoDegree();
void celctoFaren(); //use F =(9/5)*C + 32

bool flow = true;
int main()
{
    initialize();
    do {
        functionsList();
        calcFunctions();
        flowResponse();
    } while (flow == true);
    return 0;
}

string splashScreen()
{
    const char *splash = 
        "                                                                                                            \n"
        "                       ##      ## ######## ##        ######   #######  ##     ## ########                   \n"
        "                       ##  ##  ## ##       ##       ##    ## ##     ## ###   ### ##                         \n"
        "                       ##  ##  ## ##       ##       ##       ##     ## #### #### ##                         \n"
        "                       ##  ##  ## ######   ##       ##       ##     ## ## ### ## ######                     \n"
        "                       ##  ##  ## ##       ##       ##       ##     ## ##     ## ##                         \n"
        "                       ##  ##  ## ##       ##       ##    ## ##     ## ##     ## ##                         \n"
        "                        ###  ###  ######## ########  ######   #######  ##     ## ########                   \n"
        "                                                                                                            \n"
        "                                                                                                            \n"
        "                                  ########  #######     ##     ## ##    ##                                  \n"
        "                                     ##    ##     ##    ###   ###  ##  ##                                   \n"
        "                                     ##    ##     ##    #### ####   ####                                    \n"
        "                                     ##    ##     ##    ## ### ##    ##                                     \n"
        "                                     ##    ##     ##    ##     ##    ##                                     \n"
        "                                     ##    ##     ##    ##     ##    ##                                     \n"
        "                                     ##     #######     ##     ##    ##                                     \n"
        "                                                                                                            \n"
        "                                                                                                             \n"
        "            ######     ###    ##        ######  ##     ## ##          ###    ########  #######  ########     \n"
        "           ##    ##   ## ##   ##       ##    ## ##     ## ##         ## ##      ##    ##     ## ##     ##    \n"
        "           ##        ##   ##  ##       ##       ##     ## ##        ##   ##     ##    ##     ## ##     ##    \n"
        "           ##       ##     ## ##       ##       ##     ## ##       ##     ##    ##    ##     ## ########     \n"
        "           ##       ######### ##       ##       ##     ## ##       #########    ##    ##     ## ##   ##      \n"
        "           ##    ## ##     ## ##       ##    ## ##     ## ##       ##     ##    ##    ##     ## ##    ##     \n"
        "            ######  ##     ## ########  ######   #######  ######## ##     ##    ##     #######  ##     ##    \n"
        "                                                                                                             \n"
        "                 ~By Kibet Ismael                                                                           \n"
        "                               ---------------------PLEASE  WAIT!-------------------------                   \n";
    return splash;

}
void initialize()
{
    cout << splashScreen() << flush;
    time_t start = time(&start);
    while (difftime(time(NULL), start) < 3.0);
    {}
    system("CLS");
}
void functionsList()
{
    cout << "\t[1] Addition\t\t\t\t[6]  Sine" << endl;
    cout << "\t[2] Subraction\t\t\t\t[7]  Cosine" << endl;
    cout << "\t[3] Multiplication\t\t\t[8]  Tan" << endl;
    cout << "\t[4] Division\t\t\t\t[9]  Square" << endl;
    cout << "\t[5] Logarithms\t\t\t\t[10] Square Root" << endl;
    cout << "\t[11] Log Inverse\t\t\t\t[12] Sine Inverse" << endl;
    cout << "\t[13] Cos Inverse\t\t\t\t[14] Tan Inverse" << endl;
    cout << "\t[15] Natural Log\t\t\t\t[16] Exponential" << endl;
}
void calcFunctions()
{
    int choice;
    cout << "Choose a function: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        addNumbers();
        break;
    case 2:
        subractNumbers();
        break;
    case 3:
        multiplyNumbers();
        break;
    case 4:
        divideNumbers();
        break;
    case 5:
        logofNumber();
        break;
    case 6:
        sineofAngle();
        break;
    case 7:
        cosofAngle();
        break;
    case 8:
        tanofAngle();
        break;
    case 9:
        squareofNumber();
        break;
    case 10:
        rootofNumber();
        break;
    default:
        cout << "UH OH! ERROR! I CAN'T DO THAT YET :)\n";
    }
}
int flowResponse()
{
    char response;
    char c_flow;
    do
    {
        cout << "Do you wish to continue (Y/N): ";
        cin >> response; /*to get response from user if they wish to continue or not. Also, there is an
        exception to catch error if the user inputs an invalid choice.*/
        if (response == 'y' || response == 'Y') {
            flow = true;
            c_flow = false;
            //break;
        }
        else if (response == 'n' || response == 'N') {
            cout << "IT WAS FUN. GOODBYE THO :) AND HAVE A GREAT DAY \n";
            flow = false;
            c_flow = false;
            return 0;
        }
        else {
            cout << "Invalid Choice \n";
            c_flow = true;
            flow = false;

        }
    } while (c_flow == true);
}
float toRadian(int angle)
{
    return angle*PI/180;
}
int inputInteger(string param)
{
    int a;
    cout << "Enter your " + param + ": ";
    cin >> a;
    return a;
}
tuple <int, int> inputIntegers()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    std::tuple <int, int> set1 = make_tuple(a, b);
    return set1;
}
float toRadian(float angle)
{
    return angle*PI/180;
}
//Arithmetic functions/*
void addNumbers()
{
    int num;
    int sum = 0;
    int numbers;
    cout << "Enter the number of values to add: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the next number: ";
        cin >> numbers;
        sum = sum + numbers;
        cout << "Preview sum is: "<< sum << endl;
    }
    cout << "The final sum is: " << sum << endl;
}
void subractNumbers()
{
    int a, b;
    tie(a, b) = inputIntegers();
    cout << "The difference of the Numbers is: " << a - b << endl;
}
void multiplyNumbers()
{
    int a, b;
    tie(a, b) = inputIntegers();
    cout << "The Product of the Numbers is: " << a * b << endl;
}
void divideNumbers()
{
    int a, b;
    tie(a, b) = inputIntegers();
    cout << "The Quotient of the Numbers is: " << a / b << endl;
}
void logofNumber()
{
    int a = inputInteger("Number");
    cout << log10(a) << endl;
}
void sineofAngle()
{
    int a = inputInteger("Angle");
    double radian = toRadian(a);
    cout << sin(radian) << endl;
}
void cosofAngle()
{
    int a = inputInteger("Angle");
    double radian = toRadian(a);
    cout << cos(radian) << endl;
}
void tanofAngle()
{
    int a = inputInteger("Angle");
    double radian = toRadian(a);
    cout << tan(radian) << endl;
}
void squareofNumber()
{
    int a = inputInteger("Number");
    cout << a*a << endl;
}
void rootofNumber()
{
    int a = inputInteger("Number");
    cout << sqrt(a) << endl;
}

double toDegree(float radian)
{
    return radian * 180 / PI;
}
void log10Inverse() {
    double logi;
    cout << "Enter the value: ";
    cin >> logi;
    double base = 10;
    double logi = pow(base, logi);
    cout << "The inverse of log is: " << logi << endl;
}
void sineInverse();
void cosInverse();
void tanInverse();//use atan