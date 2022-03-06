// Names scores

// Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, 
// begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, 
// multiply this value by its alphabetical position in the list to obtain a name score.
// For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. 
// So, COLIN would obtain a score of 938 × 53 = 49714.
// What is the total of all the name scores in the file?

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

#define NAMELEN 12

int main() {

    char c;
    char tempName[NAMELEN];
    char namesArr[5200][NAMELEN]; // hold names from file
    int numNames = 0; //number of names in file
    int sorted;
    int tempScore;
    int finalScore = 0;
    int i = 0;

    FILE *fp = fopen("p022_names.txt", "r"); // open file for reading

    while ( (c = fgetc(fp)) != EOF ){ //insert name in array
        if (c == ','){
            namesArr[numNames][i] = '\0';
             i = 0;
            numNames ++;
        } else if (c != '"'){
            namesArr[numNames][i] = c;
            i++;
        }
    }

    namesArr[numNames][i] = '\0';

    fclose(fp); // close file

    sorted = 1;
    while ( sorted == 1){ // sorted name
        sorted = 0;
        for (i = 0; i < numNames; i++){
            if (strcmp(namesArr[i], namesArr[i+1]) > 0){
                
                strcpy(tempName,namesArr[i]);
                strcpy(namesArr[i],namesArr[i+1]);
                strcpy(namesArr[i+1],tempName);

                sorted = 1;
            } 
        }
    }

    for (i = 0; i <= numNames; i++){
        tempScore = 0;
        for (int j = 0; j < NAMELEN; j++){
            if(namesArr[i][j] != '\0'){
                tempScore += ( (namesArr[i][j] - 'A') + 1);
            }else
                break;
        }
        finalScore += (tempScore * (i +1));
        // cout << "Name: " << namesArr[i] << " Score: " << tempScore * (i +1) << endl; if you want to see al name and score
    }

    cout << "\nFinal Score: " << finalScore << endl;    
}