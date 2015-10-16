// Name: Nicholas Rosas
// Date: 10-15-15
// Project: Functions Practice (Pass by Reference)

#include <iostream> // input and output
#include <cassert> // to use assert()

using namespace std;
// ********************************************************
void sort(int& numA, int& numB, int& numC);
// Summary: Sorts three numbers in increasing order.
// Precondition: Values are passed in are between 0-100 (inclusive).
// Postcondition: Values are returned from least to greatest
//
// ********************************************************
//

// ********************************************************
void numDigits(int valA, int& n);
// Summary: Determines the number of digits in an integer
// Precondition: Value passed in is integers between -10000 - 10000
// Postcondition: The number of digits is stored in the reference variable
//
// ********************************************************
//

// ********************************************************
void computeSphere(double& a, double& v, double r);
// Summary: Calculates area (a), volume(v).
// Precondition: Values passed in are double greater than 0 and less than 10000 (inclusive)
// Postcondition: There are two reference variable to store the area and volume of a shpere
//
// ********************************************************
//

// ********************************************************
// swaps the entered values, values passed in are positive integer values
void swap(int& A, int& B);
// Summary: Swaps the values passed in.
// Precondition: Two values are passed in to swap
// Postcondition: Both variables are reference variables to store the value to swap to
//
// ********************************************************
//

int main()
{
    const double E = 0.001;
    int valA = 10, valB = 20, valC = 40, temporary;
    int valD = 10, valE = 55, valF = 46, valG = -786, valH;
    int valI = -4525, valJ;
    double area, volume, radius = 5.2;
    double area2, volume2, radius2 = 4.0;
    
    sort(valA, valB, valC);
    assert(valC > valB);
    assert(valB > valA);
    
    sort(valD, valE, valF);
    assert( ((valF > valE) && (valE > valD)) == true);
    
    numDigits(valG, valH);
    assert(valH == 3);
    
    numDigits(valI, valJ);
    assert(valJ == 4);
    
    computeSphere(area, volume, radius);
    assert( (area - 339.7943744) < E);
    assert( (volume - 588.97691561) < E);
    
    computeSphere(area2, volume2, radius2);
    assert( (area2 - 201.06176) < E);
    assert( (volume2 - 268.0234666) < E);
    
    temporary = valA;
    swap(valA, valB);
    assert(valB == temporary);
    
    cout << "Ran to here!" << endl;
    

    

    return 0;
}


void sort(int& numA, int& numB, int& numC)
{
    assert( ((numA >= 0) && (numA <= 100)) == true);
    assert( ((numB >= 0) && (numB <= 100)) == true);
    assert( ((numC >= 0) && (numC <= 100)) == true);
    
    const int numOfNumbers = 3;
    for(int ix = 0; ix < numOfNumbers; ix++)
    {
       if(numA > numB)
        {
           swap(numA, numB);
        }
        if(numB > numC)
        {
           swap(numB, numC);
        }
    }
        
}

void numDigits(int valA, int& n)
{
    assert( ( (valA >= -10000) && (valA <= 10000) ) == true);
    bool isNotFin = true;
    n = 0;
    int number = valA;
    
    while(isNotFin)
    {
        number = number / 10;
        n++;
        if(number == 0)
        {
            isNotFin = false;
        }
    }
        
}

void computeSphere(double& a, double& v, double r)
{
    assert( ( (r >= 0) && (r <= 10000) ) == true);
    
    const double PI = 3.14159;
    
    a = 4 * PI * r * r;
    v = (4 / 3) * PI * r * r *r;
}

void swap(int& A, int& B)
{
    int temp;
    
    temp = A;
    A = B;
    B = temp;

}



