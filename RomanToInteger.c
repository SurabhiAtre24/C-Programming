/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Convert Roman numbers to Integers
*/

#include<stdio.h>
#include<string.h>

int RomantoInt(char Roman[]);

int main()
{
    char Roman[15];
    printf("Enter the Roman number: ");
    //Accept the Roman number as a string
    gets(Roman);
    RomantoInt(Roman);

    return 0;
}

int RomantoInt(char *Roman)
{
    int i = 0, Value = 0, prevValue = 0, Integer = 0, Rank = 0, prevRank = 8;;
    /*
    Value           Roman to Int value
    prevValue       Int value of prev Roman symbol
    Integer         Final integer value
    Rank            Rank represents the value of the Roman symbol, smallest to highest. eg I is 1, V is 5, so V has a higher Rank to I
    prevRank        Rank of the previous Roman
    */

    //Iteration loop of Roman characters
    for(i = 0; i < strlen(Roman); i++)
    {
        switch(Roman[i])            //giving value and rank to Roman symbols
        {
            case 'I':
                Value = 1;
                Rank = 1;
                break;

            case 'V':
                Value = 5;
                Rank = 2;
                break;

            case 'X':
                Value = 10;
                Rank = 3;
                break;

            case 'L':
                Value = 50;
                Rank = 4;
                break;

            case 'C':
                Value = 100;
                Rank = 5;
                break;

            case 'D':
                Value = 500;
                Rank = 6;
                break;

            case 'M':
                Value = 1000;
                Rank = 7;
                break;

            default:                                //incase of invalid input
                printf("\nWRONG INPUT!!\n");
                return 0;                                   //end of program
        }

        if(prevRank < Rank)                         //if Rank of the prev Roman is less than Rank of the current Roman character...
        {
            Integer -= prevValue*2;                 //The final value is decresed by the prev Roman number. Example: I = 1, V = 5... IV = 4
        }                                           //IMP! We subtract the prevValue twice here because it gets added in the previous loop. 

        prevRank = Rank;
        prevValue = Value;                          //set all prev values to current values in preparation of the next interation
        Integer += Value;                           //Current value gets added to the final integer
    }

    printf("\n\nRoman: %s\nInteger: %d\n\n", Roman, Integer);       //print the final output
}