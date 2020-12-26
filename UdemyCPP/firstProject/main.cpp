#include <iostream>
#include <vector>
#include <cctype>
extern int x;
using namespace std;

int main()
{
    //    char chars[] {'a','b','c','d','e','f'};
    //    cout<<"The first char is: "<<chars[0]<<endl;
    //    cout<<"The second char is: "<<chars[1]<<endl;
    //    cout<<"Enter a new character: ";
    //    cin>>chars[3];
    //    cout<<"The 4th character is: "<<chars[3];

    vector<char> chars { 'a', 'e', 'i', 'u', 'o' };
    //    cout<<chars[0]<<endl;
    //    cout<<chars[3]<<endl;
    //    cout<<chars.at(3)<<endl;
    //    cout<<chars.size()<<endl;
    //    cout<<"size of chars: "<<chars.size();
    //    cout<<"Please enter three characters: ";
    //    char toAdd{'a'};
    //    cin>>toAdd;
    //    chars.push_back(toAdd);
    //    cin>>toAdd;
    //    chars.push_back(toAdd);
    //    cin>>toAdd;
    //    chars.push_back(toAdd);
    //    cout<<"size of chars: "<<chars.size();
    //    vector<int> vector1;
    //    vector<int> vector2;
    //    vector1.push_back(10);
    //    vector1.push_back(20);
    //    vector2.push_back(100);
    //    vector2.push_back(200);
    //    vector<vector<int>> vector_2d;
    //    vector_2d.push_back(vector1);
    //    vector_2d.push_back(vector2);
    //    cout<<vector_2d.at(0).at(0)<<endl;
    //    cout<<vector_2d.at(1).at(1)<<endl;
    //    vector1[0]=100;
    //    cout<<vector1[0]<<endl;
    //    cout<<vector_2d.at(0).at(0)<<endl;
    //    cout<<vector_2d.at(1).at(1)<<endl;
    //    int num1{10};
    //    int num2{200};
    //    num1=num2=1000;
    //    num2=2000;
    //    cout<<num1<<endl<<num2;
    //     int total{12};
    //     int num1{}, num2{}, num3{};
    //     const int count{3};
    //     cout<< "Enter 3 integers: ";
    //     cin>>num1>>num2>>num3;
    //     total=num1+num2+num3;
    //     double average{0.0};
    //     average = static_cast<double>(total)/count;
    //     cout<< "The average of the 3 integers is: "<<average;
    //    int total{0};
    //    cout<<"Please enter the amount of cents: ";
    //    cin>>total;
    //    int dollar=total/100;
    //    int quater=(total-dollar*100)/25;
    //    int dime = (total-dollar*100-quater*25)/10;
    //    int nickel = (total-dollar*100-quater*25-dime*10)/5;
    //    int penny = total-dollar*100-quater*25-dime*10-nickel*5;
    //    cout<<"You can provide the change as follows: "<<endl;
    //    cout<<"dollars: "<<dollar<<endl;
    //    cout<<"quarters: "<<quater<<endl;
    //    cout<<"dimes: "<<dime<<endl;
    //    cout<<"nickels: "<<nickel<<endl;
    //    cout<<"pennies: "<<penny<<endl;
    //    int score{0};
    //    cout<<"Please enter the grade: ";
    //    cin>>score;
    //    if(score>=0 && score<=100){
    //        if(score>=90)
    //            cout<<"Student got A"<<endl;
    //        else if(score>=80)
    //            cout<<"Student got B"<<endl;
    //        else if(score>=70)
    //            cout<<"Student got C"<<endl;
    //        else if(score>=60)
    //            cout<<"Student got D"<<endl;
    //        else
    //            cout<<"Student failed"<<endl;
    //    }else{
    //        cout<<"Invalid input!"<<endl;
    //    }

    // swicth statement
    //    char grade{};
    //    cout<<"Please enter the letter grade: ";
    //    cin>>grade;
    //    switch(grade){
    //        case 'a':
    //        case 'A':
    //           cout<<"Your need a 90 or above to get A. Study hard!"<<endl;
    //           break;
    //        case 'b':
    //        case 'B':
    //           cout<<"You need 80-89 to get B. Go study!"<<endl;
    //           break;
    //        case 'c':
    //        case 'C':
    //           cout<<"You need 70-79 to get C."<<endl;
    //           break;
    //        case 'f':
    //        case 'F':
    //        {
    //            char confirm{};
    //            cout<<"Are you sure?(Y/N)";
    //            cin>>confirm;
    //            if(confirm=='y'||confirm=='Y')
    //                cout<<"Okay, you don't need study to fail!";
    //            else if(confirm=='N' || confirm=='n')
    //                cout<<"Good, go study!"<<endl;
    //            else
    //                cout<<"Illegal choice.";
    //            break;
    //        }
    //        default:
    //            cout<<"Please re-start!";
    //    }

    //   enum Direction{
    //       up, down, left, right
    //    };
    //
    //    Direction heading{left};
    //
    //    switch(heading){
    //        case left:
    //           cout<<"Going left"<<endl;
    //           break;
    //        case right:
    //           cout<<"Going right"<<endl;
    //           break;
    //        case down:
    //           cout<<"Going down"<<endl;
    //           break;
    //        case up:
    //           cout<<"Going up"<<endl;
    //           break;
    //        default:
    //           cout<<"Okay"<<endl;
    //    }
    //    int num{};
    //    cout<<"Please enter a number: ";
    //    cin>>num;
    //    cout<<num<<" is "<<((num%2==0)?"even":"odd")<<endl;

    //    int num1{}, num2{};
    //    cout<<"Please enter two numbers: ";
    //    cin>>num1>>num2;
    //    cout<<"The larger number is "<<(num1>num2?num1:num2)<<endl;
    // for loop
    //    for(int i{1}, j{1}; i<10 && j<20; i++, j+=2){
    //        cout<<i<<" is a divisor of "<<j<<(j%i==0?" yes":" no")<<endl;
    //
    //    }
    //    char option{};
    //
    //    do{
    //        cout<<"1. Do this"<<endl;
    //        cout<<"2. Do that"<<endl;
    //        cout<<"3. Do something else"<<endl;
    //        cout<<"Q. Quit"<<endl;
    //
    //        cout<<"Please type your choice: ";
    //        cin>>option;
    //        cout<<"You select "<<option<<endl;
    //        switch(option){
    //            case '1':
    //               cout<<"Do this"<<endl;
    //               break;
    //            case '2':
    //               cout<<"Do that"<<endl;
    //               break;
    //            case '3':
    //               cout<<"Do something else"<<endl;
    //               break;
    //            case 'q':
    //            case 'Q':
    //               cout<<"Goodbye...";
    //               break;
    //            default:
    //               cout<<"I don't get it, try again!"<<endl;
    //               break;
    //        }
    //    }while(option!='q'&& option!='Q');
    //
    //    cout<<option;
    //    int num_item{};
    //    cout<<"How many data items do you want to have? ->";
    //    cin>>num_item;
    //    vector<int> data{};
    //    for(int i{0}; i<num_item; ++i){
    //        int num{};
    //        cout<<"Enter data:";
    //        cin>>num;
    //        data.push_back(num);
    //    }
    //    int maxNum{0};
    //    for(auto num:data){
    //        maxNum = (num>maxNum)?num:maxNum;
    //    }
    //    cout<<"\nThe Max num in list is "<<maxNum<<endl;

    // practice
    char selection {};
    vector<int> data {};
    do {
        cout << "--------------------------"<<endl;
        cout << "P - print numbers." << endl;
        cout << "A - add a number." << endl;
        cout << "M - Display mean of the numbers." << endl;
        cout << "S - Display the smallest number in number list." << endl;
        cout << "L - Display the largest number in number list." << endl;
        cout << "Q - Quit." << endl;
        cout << "--------------------------"<<endl;
        cout << "\nPlease enter your selection: ";
        cin >> selection;
        switch(selection) {
        case 'p':
        case 'P': {
            cout << "[ ";
            for(auto num : data) {
                cout << num << " ";
            }
            cout << "]\n";
            break;
        }
        case 'a':
        case 'A': {
            int num {};
            cout << "Please enter the number you want to add: ";
            cin >> num;
            data.push_back(num);
            break;
        }
        case 'm':
        case 'M': {
            if(data.size() > 0) {
                int total { 0 };
                double mean {};
                for(auto num : data) {
                    total += num;
                }
                mean = total / data.size();
                cout << "\nThe mean of number list is " << mean << endl;
            } else {
                cout << "\nList is empty." << endl;
            }
            break;
        }
        case 's':
        case 'S': {
            if(data.size() > 0) {
                int smallest { INT_MAX };
                for(auto num : data) {
                    smallest = min(num, smallest);
                }
                cout << "\nThe smallest number is: " << smallest << endl;
            } else {
                cout << "\nList is empty!" << endl;
            }
            break;
        }
        case 'l':
        case 'L': {
            if(data.size() > 0) {
                int largest { INT_MIN };
                for(auto num : data) {
                    largest = max(num, largest);
                }
                cout << "\nThe largest number is: " << largest << endl;
            } else {
                cout << "\nList is Empty";
            }
            break;
        }
        case 'q':
        case 'Q': {
            cout << "\nGoodbye~" << endl;
            break;
        }
        default:
            cout << "\nInvalid input, try again." << endl;
            break;
        }
        cout<<endl;
    } while(selection != 'q' && selection != 'Q');

    return 0;
}