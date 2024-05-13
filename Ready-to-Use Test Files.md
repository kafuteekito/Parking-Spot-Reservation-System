## Ready-to-Use Test Files

### Purpose
The test files provided below are designed to validate the functionality of the Parking Spot Reservation System. They cover various scenarios to ensure that the program behaves as expected under different conditions.

Certainly! Here are the input files along with their corresponding expected output for three test scenarios:

### Test 1: Reservation of Parking Spots
**Input File: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 2 2 2 2 2 2 2 0 2 
0 2 2 2 2 2 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 2 
```

**Input in Console: **
```
1
C 2
1
D 6
0
Y
```

**Output: **
```
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][*][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][*][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1 
Enter the row (A-F) and column (1-10) to unpark the car: C 2
C2 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][*][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: D 6
D6 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 0
Are you sure you want to exit? (Y/N): Y 
Exiting program.
```

**Output file: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 2 
```
- **Description**: This test case verifies the reservation of parking spots in the third row column 2 and forth row column 6. It reserves spots, and then exits the program.
  
### Test 2: Cancellation of Parking Reservation
**Input file: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 2 
```

**Input In Console: **
```
1
C 4
2
C 4
0
Y
```
**Output: **
```
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: C 4
C4 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][X][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 2
Enter the row (A-F) and column (1-10) to unpark the car: C 4
Car unparked successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 0
Are you sure you want to exit? (Y/N): Y
Exiting program.
```
**Output file:**
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 2 
```

- **Description**: This test case checks the cancellation of a parking reservation. It first reserves a spot at row C, column 4, and then cancels the reservation for the same spot before exiting.
  
### Test 3: Invalid Input Handling
**Input file: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 2
```


**Input In Console: **
```
3
1  
X 3
A 12
f 10
0
Y
```

**Output: **
```
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 3
Invalid choice. Please try again.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][*]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: X 3
Invalid input. Please enter a valid row (A-F) and column (1-10).
Enter the row (A-F) and column (1-10) to unpark the car: A 12
Invalid input. Please enter a valid row (A-F) and column (1-10).
Enter the row (A-F) and column (1-10) to unpark the car: f 10
F10 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 0
Are you sure you want to exit? (Y/N): Y
Exiting program.
```

**Output file: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 1 
```
- **Description**: This test case covers scenarios with invalid input. It attempts to park a car at an invalid row (X) and an invalid column (12), and then finally parks car in F10, then exits the program.
  

### Test 4: Reserve full lot
**Input file: **
```
0 2 2 2 2 2 2 2 2 2 
0 0 0 0 0 0 0 0 0 2 
0 1 2 2 2 2 2 2 0 2 
0 2 2 2 2 1 2 2 0 2 
0 0 0 0 0 0 0 0 0 2 
2 2 2 2 2 2 2 2 2 1
```

**Input In Console: **
```
1
A 1
1
A 2
1
A 3
1
A 4
1
A 5
1
A 6
1
A 7
1
A 8
1
A 9
1
A 10
0
Y
```

**Output: **
```
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 1
You can't park your car here.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][*][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 2
A2 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10  
A [-][X][*][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 3
A3 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][*][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 4
A4 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][*][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 5
A5 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][*][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 6
A6 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][X][*][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 7
A7 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][X][X][*][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 8
A8 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][X][X][X][*][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 9
A9 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][X][X][X][X][*]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 1
Enter the row (A-F) and column (1-10) to unpark the car: A 10
A10 reserved successfully.
Parking Lot:
   1  2  3  4  5  6  7  8  9  10
A [-][X][X][X][X][X][X][X][X][X]
B [-][-][-][-][-][-][-][-][-][*]
C [-][X][*][*][*][*][*][*][-][*]
D [-][*][*][*][*][X][*][*][-][*]
E [-][-][-][-][-][-][-][-][-][*]
F [*][*][*][*][*][*][*][*][*][X]
This is Parking Spot Reservation System program
You can book your car on [*] spots and [X] spots are already reserved
Press 1 to park a car and 2 to unpark a car, or 0 to exit: 0
Are you sure you want to exit? (Y/N): Y
Exiting program.
```
- **Description**: This test case attempts to reserve all parking spots in the first row. After reserving all spots, it exits the program.

### How to Use the Test Files
1. Copy the text from file.
2. Run the programm in C++ compiler.
3. Paste the input from the test file:

### Expected Output
After running each test file, observe the output to ensure that the program behaves correctly according to the specified test case. Verify that reservations are made, canceled, or rejected as expected, and that the program exits gracefully after completing the test scenario.
