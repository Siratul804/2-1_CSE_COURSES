#include <iostream>
using namespace std;

int main() {
    string backStack[100];
    string forwardStack[100];
    int backTop = -1;
    int forwardTop = -1;

    string currentPage = "Home"; 

    int choice; 
    string url; 

    
    while (true) {
        cout << "\n--- Browser Navigation ---" << endl;
        cout << "Current page: " << currentPage << endl;
        cout << "1. Visit a new page" << endl;
        cout << "2. Go back" << endl;
        cout << "3. Go forward" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option (1-4): ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                
                cout << "Enter URL to visit: ";
                cin >> url;

                
                backStack[++backTop] = currentPage;

                
                forwardTop = -1;

                
                currentPage = url;

                cout << "Visited: " << currentPage << endl;
                break;

            case 2:
                
                if (backTop == -1) {
                    cout << "Cannot go back, no previous page." << endl;
                } else {
                    
                    forwardStack[++forwardTop] = currentPage;

                    currentPage = backStack[backTop--];

                    cout << "Went back to: " << currentPage << endl;
                }
                break;

            case 3:
                if (forwardTop == -1) {
                    cout << "Cannot go forward, no next page." << endl;
                } else {
                    
                    backStack[++backTop] = currentPage;

                    currentPage = forwardStack[forwardTop--];

                    cout << "Went forward to: " << currentPage << endl;
                }
                break;

            case 4:
                cout << "Exiting browser. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid option. Please choose between 1 and 4." << endl;
        }
    }

    return 0;
}
