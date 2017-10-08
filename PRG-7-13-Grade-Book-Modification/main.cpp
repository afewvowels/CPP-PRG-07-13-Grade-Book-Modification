//
//  main.cpp
//  PRG-7-13-Grade-Book-Modification
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Modify the grade book application in Programming Challenge 12 so it drops each
//  students lowest score when determining the test score averages and letter grades.

#include <iostream>
#include <iomanip>

using namespace std;

const int INT_STUDENTS = 5;
const int INT_TESTS = 4;

void enterStudentNames(string[]);
void enterTestScores(const string[], int[], int[], int[], int[], int[]);
void calculateAverage(const string[], const int[], const int[], const int[], const int[] ,const int[], float[]);
void calculateGrades(const string[], const float[], char[]);
void displayResults(const string[], const float[], const char[]);

int main()
{
    string strStudentNameArray[INT_STUDENTS];
    
    char chrStudentTestScores[INT_STUDENTS];
    
    int intStudent1[INT_TESTS];
    int intStudent2[INT_TESTS];
    int intStudent3[INT_TESTS];
    int intStudent4[INT_TESTS];
    int intStudent5[INT_TESTS];
    
    float fltStudentAverages[INT_STUDENTS];
    
    cout << fixed << showpoint << setprecision(1);
    
    enterStudentNames(strStudentNameArray);
    
    enterTestScores(strStudentNameArray, intStudent1, intStudent2, intStudent3, intStudent4, intStudent5);
    
    calculateAverage(strStudentNameArray, intStudent1, intStudent2, intStudent3, intStudent4, intStudent5, fltStudentAverages);
    
    calculateGrades(strStudentNameArray, fltStudentAverages, chrStudentTestScores);
    
    displayResults(strStudentNameArray, fltStudentAverages, chrStudentTestScores);
    
    return 0;
}

void enterStudentNames(string strStudentNameArray[])
{
    int intStudent;
    
    intStudent = 1;
    
    for(int student = 0 ; student < INT_STUDENTS ; student++)
    {
        cout << "Please enter the student " << intStudent << "'s name: ";
        cin >> strStudentNameArray[student];
        
        intStudent++;
    }
}

void enterTestScores(const string strStudentNameArray[], int intStudent1[], int intStudent2[], int intStudent3[], int intStudent4[], int intStudent5[])
{
    int intTest;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[0] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent1[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[1] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent2[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[2] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent3[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[3] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent4[test] = intTest;
    }
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        cout << "Please enter " << strStudentNameArray[4] << "'s score for test " << test + 1 << ": ";
        cin >> intTest;
        while(!cin || intTest < 0 || intTest > 100)
        {
            cout << "Please enter a test score between 0 and 100: ";
            cin.clear();
            cin.ignore();
            cin >> intTest;
        }
        intStudent5[test] = intTest;
    }
}

void calculateAverage(const string strStudentNameArray[], const int intStudent1[], const int intStudent2[], const int intStudent3[], const int intStudent4[], const int intStudent5[], float fltStudentAverages[])
{
    float fltTestAverage;
    float fltLowestScore;
    
    fltTestAverage = 0; // Initialize accumulator value
    fltLowestScore = 100; // Initialize accumulator value
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent1[test];
        if(intStudent1[test] < fltLowestScore)
        {
            fltLowestScore = intStudent1[test];
        }
    }
    
    fltStudentAverages[0] = (fltTestAverage - fltLowestScore) / (static_cast<float>(INT_TESTS) - 1.0f);
    fltTestAverage = 0; // Re-initialize accumulator value for next student
    fltLowestScore = 100; // Re-initialize accumulator value for next student
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent2[test];
        if(intStudent2[test] < fltLowestScore)
        {
            fltLowestScore = intStudent2[test];
        }
    }
    
    fltStudentAverages[1] = (fltTestAverage - fltLowestScore) / (static_cast<float>(INT_TESTS) - 1);
    fltTestAverage = 0;
    fltLowestScore = 100;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent3[test];
        if(intStudent3[test] < fltLowestScore)
        {
            fltLowestScore = intStudent3[test];
        }
    }
    
    fltStudentAverages[2] = (fltTestAverage - fltLowestScore) / (static_cast<float>(INT_TESTS) - 1);
    fltTestAverage = 0;
    fltLowestScore = 100;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent4[test];
        if(intStudent4[test] < fltLowestScore)
        {
            fltLowestScore = intStudent4[test];
        }
    }
    
    fltStudentAverages[3] = (fltTestAverage - fltLowestScore) / (static_cast<float>(INT_TESTS) - 1);
    fltTestAverage = 0;
    fltLowestScore = 100;
    
    for(int test = 0 ; test < INT_TESTS ; test++)
    {
        fltTestAverage += intStudent5[test];
        if(intStudent5[test] < fltLowestScore)
        {
            fltLowestScore = intStudent5[test];
        }
    }
    
    fltStudentAverages[4] = (fltTestAverage - fltLowestScore) / (static_cast<float>(INT_TESTS) - 1);
}

void calculateGrades(const string strStudentNameArray[], const float fltStudentAverages[], char chrStudentTestScores[])
{
    for(int i = 0 ; i < INT_STUDENTS ; i++)
    {
        if(fltStudentAverages[i] <= 100 && fltStudentAverages[i] >= 90)
            chrStudentTestScores[i] = 'A';
        else if(fltStudentAverages[i] <= 89 && fltStudentAverages[i] >= 80)
            chrStudentTestScores[i] = 'B';
        else if(fltStudentAverages[i] <= 79 && fltStudentAverages[i] >= 70)
            chrStudentTestScores[i] = 'C';
        else if(fltStudentAverages[i] <= 69 && fltStudentAverages[i] >= 60)
            chrStudentTestScores[i] = 'D';
        else if(fltStudentAverages[i] <= 59)
            chrStudentTestScores[i] = 'F';
    }
}

void displayResults(const string strStudentNameArray[], const float fltStudentAverages[], const char chrStudentTestScores[])
{
    for(int student = 0 ; student < INT_STUDENTS ; student++)
    {
        cout << strStudentNameArray[student] << "'s average test score was " << fltStudentAverages[student] << " which is a(n) " << chrStudentTestScores[student] << endl;
    }
}

