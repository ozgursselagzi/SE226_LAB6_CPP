#include <iostream>
#include <cmath>

// QUESTION3
using namespace std;

double sum = 0;

void sum_recursive(int n) {

    if (n == 1) {
        sum += 1;
        return;

    } else {
        sum_recursive(n - 1);
        sum += pow(-1, n + 1) / n;
        return;
    }
}

int main() {

    int n;

    cout << "Enter a value for n: ";
    cin >> n;

    sum_recursive(n);
    cout << "The sum of the given equation is: " << sum << endl;

    return 0;
}

// QUESTION4

double sum = 0;

void sum_recursive(int n) {

    if (n == 1) {
        sum += 1;

    }else{
        sum_recursive(n - 1);
        sum += pow(-1, n+1)/n;
    }
}

int main() {

    int n;

    cout << "Enter a value for n: ";
    cin >> n;

    sum_recursive(n);
    cout << "The sum of the given equation is: " << sum << endl;

    return 0;
}

