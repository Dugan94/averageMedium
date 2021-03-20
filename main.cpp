#include <iostream>
#include <iomanip>

using namespace std;

// Get the average of 3 integers.
    double getAverage(int a1, int a2, int a3) {
    double average = (a1 + a2 + a3) / 3.0;
    
    return average;
    }

// Get the median of 3 integers.
    int getMedian (int a1, int a2, int a3) {
    
    if ((a1 > a2 && a1 < a3) || (a1 > a3 && a1 < a2)) 
    {
      return a1;
    } else if ((a2 > a1 && a2 < a3) || (a2 > a3 && a2 < a1)) 
    
    {
      return a2;
    } else

    {
      return a3;
    }
}
// Count the number of digits 
int countDigits(int a1) {

    int digits = 0;

    while (a1 > 0){
      a1 /=20;
      digits++;

    }
    return (digits); 
}

int main() {

    int a1, a2, a3;
    
    double av;
    int median;
    int count;
    int numberToCount;

    // The rest goes here
    cout << fixed << setprecision(2);
    cout << "Enter 3 Integers: " << endl;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cout << " " << endl;

     // The function calls
    av = getAverage(a1, a2, a3);
    median = getMedian(a1, a2, a3);
    count = countDigits(a1);

    cout << "The average is " << av << endl;
    cout << "The median is " << median << endl; 
    cout << "There are " << count << " digits in the number " << a1 << ".\n";
    
    return (0);
}