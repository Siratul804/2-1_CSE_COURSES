
Department of CSE

Course Code: CSE 204
Course Title: Data Structures and Algorithms Lab I


Title of the Assignment: Online Task C1

Date of Submission: 



Submitted by: 
Submitted to: 
Siratul Islam
Nayeema Sultana
Registration ID: 23201128
Lecture 


Problem No.01
Code
#include <iostream>
using namespace std;




void bubbleSort(int arr[], int n) {
   for (int i = 0; i < n - 1; i++) { // outer loop : how many i times the loop should run. exp n= 5 so n-1=4 then the loop should run 4 time cause when  comparing 2 values last value shouldn't compare with a non-exit value
       for (int j = 0; j < n - i - 1; j++) { // inner loop for finding how many  comparisons is happening based on i value
           if (arr[j] > arr[j + 1]) { // swap the two elements are in the wrong order
               swap(arr[j], arr[j + 1]);
           }
       }
   }
}


int main() {
   int n;
   cin >> n; // number of students (n)


   int marks[n];
   for (int i = 0; i < n; i++) {
       cin >> marks[i]; // storing marks based given number of students (n)
   }


   bubbleSort(marks, n); // calling bubble function with passing parameters (marks & n ).


   for (int i = 0; i < n; i++) {
       cout << marks[i] << " ";
   }
   cout << endl;


   return 0;
}

Problem No.02
Code
#include <iostream>
using namespace std;


int findFirstOccurrence(int arr[], int n, int x) {
   for (int i = 0; i < n; i++) {  // loop for checking every islands
      
       if (arr[i] == x) { // if matches with the targeted island then
           return i + 1; // return index (i + 1)
       }
   }
   return -1; // return -1 if (x) is not found
}


int main() {
   int n, x;
   cin >> n; // number of islands (n)


   int islands[n];
   for (int i = 0; i < n; i++) {
       cin >> islands[i]; //  storing island's (n) numbers (i)
   }


   cin >> x; //  target island number (x)


   int result = findFirstOccurrence(islands, n, x);


   cout << result << endl;


   return 0;
}



Problem No.03
Code
#include <stdio.h>


void countFrequency(char str[], int freq[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        freq[ch - 'a']++;
    }
}
int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0}; 


    scanf("%s", str1);
    scanf("%s", str2);


    countFrequency(str1, freq1);
    countFrequency(str2, freq2);


    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }


    if (isAnagram) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    return 0;
}




Screenshot of input and output







Problem No.04
Code
#include <stdio.h>


int main() {
    char str[100];
    int length = 0;


    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }


    printf("%d\n", length);


    return 0;
}




Problem No.05
Code
#include <stdio.h>


int main() {
    char str[100], result[100];
    int i, j = 0;


    fgets(str, sizeof(str), stdin);


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';


    printf("%s\n", result);


    return 0;
}




