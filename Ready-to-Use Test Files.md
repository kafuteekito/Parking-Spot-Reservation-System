## Ready-to-Use Test Files

### Purpose
The test files provided below are designed to validate the functionality of the Parking Spot Reservation System. They cover various scenarios to ensure that the program behaves as expected under different conditions.

### Test File 1: test_reservation.txt
```
1
A 2
1
A 3
0
Y
```
- **Description**: This test case verifies the reservation of parking spots in the first row. It reserves spots at column 1 and column 2, and then exits the program.

### Test File 2: test_cancellation.txt
```
1
C 3
2
C 3
0
Y
```
- **Description**: This test case checks the cancellation of a parking reservation. It first reserves a spot at row B, column 3, and then cancels the reservation for the same spot before exiting.

### Test File 3: test_invalid_input.txt
```
3
1  
X 3
1
A 12
0
Y
```
- **Description**: This test case covers scenarios with invalid input. It attempts to park a car at an invalid row (X) and an invalid column (12), and then exits the program.

### Test File 4: test_full_lot.txt
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
- **Description**: This test case attempts to reserve all parking spots in the first row. After reserving all spots, it exits the program.

### Test File 5: test_random.txt
```
1
C 4
2
E 7
1
D 3
0
Y
```
- **Description**: This test case randomly reserves parking spots at different locations and then exits the program.

### How to Use the Test Files
1. Create a text file with one of the test cases provided above.
2. Save the text file with an appropriate name (e.g., test_reservation.txt).
3. Run the program and redirect the input from the test file:
   ```
   ./parking_system < test_reservation.txt
   ```

### Expected Output
After running each test file, observe the output to ensure that the program behaves correctly according to the specified test case. Verify that reservations are made, canceled, or rejected as expected, and that the program exits gracefully after completing the test scenario.
