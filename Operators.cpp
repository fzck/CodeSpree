#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    double mealcost = 0.00, total = 0.00;
    int tip = 0, tax = 0;
    cin >> mealcost >> tip >> tax;
    
    double wtip = (mealcost * tip)/100;
    double wtap = (mealcost * tax)/100;
    
    total =  mealcost + wtip + wtap;
    
    total = round(total);
    
    cout << "The total meal cost is "<<total<<" dollars.";
    
    return 0;
}
