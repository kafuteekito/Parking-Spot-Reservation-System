## Documentation

### Purpose
The Parking Spot Reservation System is designed to streamline the process of reserving parking spots in a parking lot. It provides users with a simple and intuitive interface to book and cancel parking reservations, while also offering a visual representation of the parking lot to aid in spot identification.

### Design Decisions
- **Modular Design**: The codebase is divided into functions and modules to enhance readability and maintainability.
- **Visual Representation**: A visual map of the parking lot is displayed using ASCII characters to provide users with a clear overview of available and reserved spots.
- **Input Validation**: Input validation is implemented to ensure that users provide valid row and column values when making reservations.

### Algorithms Used
- **Random Car Placement**: The `placeCars()` function uses a random number generator to place a random number of cars in the parking lot upon initialization.

### Data Structures Employed
- **2D Vector**: The parking lot is represented using a 2D vector to organize parking spots in rows and columns.

### Functions/Modules Created
- **`initializeParkingLot()`:** Initializes the parking lot with empty and road spots.
- **`placeCars()`:** Randomly places a number of cars on the parking lot.
- **`display()`:** Displays the visual map of the parking lot.
- **`parkCar()`:** Handles the reservation of parking spots.
- **`unparkCar()`:** Handles the cancellation of parking reservations.
- **`letterToRow()`:** Converts a letter to its corresponding row index.

### How to Use the Software
1. **Compilation and Setup**:
   - Clone the repository.
   - Compile the source code using a C++ compiler.
2. **Running the Program**:
   - Execute the compiled program.
3. **Menu Options**:
   - **Park a Car (1)**: Enter the row (A-F) and column (1-10) to reserve a parking spot.
   - **Unpark a Car (2)**: Enter the row (A-F) and column (1-10) to cancel a parking reservation.
   - **Exit (0)**: Enter '0' to exit the program.

### Installation and Setup Instructions
1. **Clone the Repository**:
   ```
   git clone https://github.com/your-username/parking-spot-reservation.git
   ```
2. **Compile the Source Code**:
   ```
   g++ parking_system.cpp -o parking_system
   ```
3. **Run the Program**:
   ```
   ./parking_system
   ```

