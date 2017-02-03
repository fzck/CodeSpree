#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    double mealcost = 0.00;
    int tip = 0, tax = 0, total = 0;
    cin >> mealcost >> tip >> tax;
    
    total = ((mealcost * tip/100) + (mealcost * tax/100) + mealcost);
    
    cout << "The total meal cost is "<<total<<" dollars.";
    
    return 0;
}
