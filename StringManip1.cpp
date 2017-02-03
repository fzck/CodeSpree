#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int T, i;
    string S;
    cin >> T;
    
    while (T > 0){
        
        cin >> S;
       
        string ss1 = "", ss2 = "";
        
        for (int i=0; i < S.length(); i++){
               if (i %2 == 0)
                    ss1 += S[i];
                else
                    ss2 += S[i];
        } 
            
        cout << ss1+" "+ss2 <<endl;
        
        T--;
    }
    
    
    
    
    return 0;
}
