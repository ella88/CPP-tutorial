#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void add_number(vector<double>& nums);
void print_numbers(const vector<double>& nums);
double get_mean(const vector<double>& nums);
double get_min(const vector<double>& nums);
double get_max(const vector<double>& nums);
void find_numbers_in_range(const vector<double>& nums);
void display_menu();

int main()
{
    vector<double> numbers {};
    char selection {};
    do {
        display_menu();
        cout << "\nPlease enter your selection:";
        cin >> selection;
        switch(selection) {
        case 'p':
        case 'P':
            print_numbers(numbers);
            break;
        case 'A':
        case 'a':
            add_number(numbers);
            break;
        case 'M':
        case 'm':
            get_mean(numbers);
            break;
        case 's':
        case 'S':
            get_min(numbers);
            break;
        case 'L':
        case 'l':
            get_max(numbers);
            break;
        case 'r':
        case 'R':
            find_numbers_in_range(numbers);
            break;
        case 'q':
        case 'Q':
            cout << "Good Bye~";
            break;
        default:
            cout << "Invalid input, try again!" << endl;
        }
    } while(selection != 'q' && selection != 'Q');

    return 0;
}

// display menu
void display_menu()
{
    cout << "\nP - Print numbers in list;" << endl;
    cout << "A - Add numbers in list;" << endl;
    cout << "M - Get the mean of numbers in list;" << endl;
    cout << "S - Get the smallest number in list;" << endl;
    cout << "L - Get the largest number in list;" << endl;
    cout << "R - Print the numbers in specific range;" << endl;
    cout << "Q - Quit;" << endl;
}

// add number
void add_number(vector<double>& nums)
{
    double num {};
    cout << "Please enter the number: ";
    cin >> num;
    nums.push_back(num);
    cout << num << " has been added to number list";
}

// display number in list
void print_numbers(const vector<double>& nums)
{
    cout << "[ ";
    for(auto num : nums) {
        cout << num << " ";
    }
    cout << "]" << endl;
}

// calculate mean
double get_mean(const vector<double>& nums)
{
    double sum { 0 };
    for(auto num : nums) {
        sum += num;
    }
    double mean {};
    if(nums.size()>0) {
        mean = sum / nums.size();
        cout << "The mean of the number list is: " << mean<<endl;
    }
    else{
        cout<<"The number list is empty, add number first."<<endl;
    }
    
    return mean;
}

// get the min number in list
double get_min(const vector<double>& nums)
{
    double the_min { INT_MAX };
    for(auto num : nums) {
        the_min = min(the_min, num);
    }
    cout << "The smallest number in the number list is: " << the_min;
    return the_min;
}

// get the max number in list
double get_max(const vector<double>& nums)
{
    double the_max { INT_MIN };
    for(auto num : nums) {
        the_max = max(the_max, num);
    }
    cout << "The largest number in the number list is: " << the_max;
    return the_max;
}

// find numbers in a range a-b, inclusive , and print
void find_numbers_in_range(const vector<double>& nums)
{
    int left { 0 };
    int right { 0 };
    cout << "Please enter the range, left and right: ";
    cin >> left >> right;
    while(right <= left) {
        cout << "Left bound must not be bigger than right bound.";
        cout << "Please re-enter the left and right:";
        cin >> left >> right;
        cout<<left<<"--"<<right<<endl;
    }
    vector<int> in_range {};
    for(size_t i { 0 }; i < nums.size(); ++i) {
        if(nums[i] >= left && nums[i] <= right) {
            in_range.push_back(nums[i]);
        }
    }

    cout << "The numbers in range " << left << " and " << right << " :" << endl;
    for(auto num : in_range) {
        cout << num << " ";
    }
    cout << endl;
}
