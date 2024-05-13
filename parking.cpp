#include <iostream>
#include <vector>
#include <fstream>
#include <limits>

using namespace std;

const int ROWS = 6;
const int COLS = 10;

// Define parking lot data structure
vector<vector<int>> parkingLot(ROWS, vector<int>(COLS, 0));

// Function to clear the console
void clear()
{
	printf("\33[2J\33[1;1H");
}   

// This function shows a map of parking spaces
void display() {
    cout << "Parking Lot:\n";
    cout << "   ";
    for (int i = 1; i <= COLS; i++) {
        cout << i << "  ";
    }
    cout << endl;
    for (int i = 0; i < ROWS; i++) {
        char let = 'A' + i;
        cout << let << " ";
        for (int j = 0; j < COLS; j++) {
            if (parkingLot[i][j] == 1) cout << "[X]"; // Reserved or parked spot  
            else if (parkingLot[i][j] == 2) cout << "[*]"; // Empty spot
            else cout << "[-]"; // Road
        }
        cout << endl;
    }
}

// This function for booking parking spaces
void parkCar(int row, int col) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        if (parkingLot[row][col] == 2) {
            parkingLot[row][col] = 1;
            char let = 'A' + row;
            cout << let << col + 1 << " reserved successfully." << endl;
        } else if(parkingLot[row][col] == 1) {
            cout << "Spot already occupied." << endl;
        } else {
            cout << "You can't park your car here."<<endl;
        }
    } else {
        cout << "Invalid spot." << endl;
    }
}

// This function for cancel parking reservation
void unparkCar(int row, int col) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        if (parkingLot[row][col] == 1) {
            parkingLot[row][col] = 2;
            cout << "Car unparked successfully." << endl;
        } else {
            cout << "Spot already empty." << endl;
        }
    } else {
        cout << "Invalid spot." << endl;
    }
}

//This function reveals parking space: [-] is road (cars drive along this trajectory),
//free parking space marked [*] and reserved or taken space marked [X] 
void initializeParkingLot() {
        for(int i = 0; i < ROWS; i++) {
            for(int j = 0; j < COLS; j++) {
                if (i==0 && j!=0) {
                    parkingLot[i][j] = 2;
                } else if (i==1 && j==9) {
                    parkingLot[i][j] = 2;
                } else if (i==2 && j!=0 && j!=8) {
                    parkingLot[i][j] = 2;
                } else if (i==3 && j!=0 && j!=8) {
                    parkingLot[i][j] = 2;
                } else if (i==4 && j==9) {
                    parkingLot[i][j] = 2;
                } else if (i==5) {
                    parkingLot[i][j] = 2;
                } else {
                    parkingLot[i][j] = 0;
                }
            }
        }
}

// This function reads the initial parking lot state from a file
void readParkFromFile(const string &filename) {
    ifstream inputFile(filename);
    if (inputFile)
    {
        for (int i = 0; i < ROWS; ++i)
        {
            for (int j = 0; j < COLS; ++j)
            {
                inputFile >> parkingLot[i][j];
            }
        }
        inputFile.close();
    }
    else
    {
        cerr << "Error opening input file." << endl;
    }
}

// This function writes the updated parking lot state to a file
void writeParkToFile(const string &filename)
{
    ofstream outputFile(filename);
    if (outputFile)
    {
        for (int i = 0; i < ROWS; ++i)
        {
            for (int j = 0; j < COLS; ++j)
            {
                outputFile << parkingLot[i][j] << " ";
            }
            outputFile << endl;
        }
        outputFile.close();
    }
    else
    {
        cerr << "Error opening output file." << endl;
    }
}

// This function convert from letter to number
int letterToRow(char letter) {
    int row = toupper(letter) - 'A';
    if (row >= 0 && row < ROWS) {
        return row;
    } else {
        return -1;
    }
}

int main() {
    clear();
    initializeParkingLot(); 
    readParkFromFile("input.txt");
    
    int choice, col;
    char row;
    bool exitProgram = false;
    
    while (!exitProgram) {
        display();
        cout << "This is Parking Spot Reservation System program" << endl;
        cout << "You can book your car on [*] spots and [X] spots are already reserved" << endl;
        cout << "Press 1 to park a car and 2 to unpark a car, or 0 to exit: ";
        
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a valid choice (1, 2, or 0): ";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        switch (choice) {
            case 1: {
                bool validInput = false;
                while (!validInput) {
                    cout << "Enter the row (A-F) and column (1-10) to unpark the car: ";
                    cin >> row >> col;
                    int rowNumber = letterToRow(row);
                    if (rowNumber != -1 && col >= 1 && col <= 10) {
                        parkCar(rowNumber, col - 1); 
                        writeParkToFile("output.txt");
                        validInput = true;
                    } else {
                        cout << "Invalid input. Please enter a valid row (A-F) and column (1-10)." << endl;
                    }
                }
                break;
            }
            case 2: {
                bool validInput = false;
                while (!validInput) {
                    cout << "Enter the row (A-F) and column (1-10) to unpark the car: ";
                    cin >> row >> col;
                    int rowNumber = letterToRow(row);
                    if (rowNumber != -1 && col >= 1 && col <= 10) {
                        unparkCar(rowNumber, col - 1); 
                        writeParkToFile("output.txt");
                        validInput = true;
                    } else {
                        cout << "Invalid input. Please enter a valid row (A-F) and column (1-10)." << endl;
                    }
                }
                break;
            }
            case 0:
                char confirmExit;
                cout << "Are you sure you want to exit? (Y/N): ";
                cin >> confirmExit;
                if (confirmExit == 'Y' || confirmExit == 'y') {
                    cout << "Exiting program." << endl;
                    exitProgram = true;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
