# Parking-Spot-Reservation-System

#### Parking Spot Reservation System
This is a simple C++ program for managing parking spot reservations in a parking lot. 
Users can book parking spots for their cars or unpark them if they decide to leave.
The program provides a visual representation of the parking lot, allowing users to see available spots and those already reserved.

#### Features
- Parking Reservation: Users can book parking spots by specifying the row and column where they want to park their cars.
- Parking Cancellation: Users can cancel their parking reservations, freeing up the spot for others.
- Visual Representation: The program displays a visual map of the parking lot, making it easy for users to see available and occupied spots.
- Input Validation: Input is validated to ensure that users provide valid row and column values.
- Exit Option: Users can exit the program at any time by entering '0' and confirming their choice.

#### Menu Options:
1. **Park a Car** (1): Enter the row (A-F) and column (1-10) to reserve a parking spot.
2. **Unpark a Car** (2): Enter the row (A-F) and column (1-10) to cancel a parking reservation.
3. **Exit** (0): Enter '0' to exit the program.

#### Screenshots:
![main page](https://github.com/kafuteekito/Parking-Spot-Reservation-System/assets/150647815/14f3ebfa-a9a7-4d15-a3ab-5d3ff1c0f163)

**1) Main Page:**
- **Description:** This screenshot depicts the main page of the program when it is initially run. It shows the parking lot layout with various parking spots marked as empty (`[*]`), reserved (`[X]`), and roads (`[-]`).

![functions showcase](https://github.com/kafuteekito/Parking-Spot-Reservation-System/assets/150647815/bab121b5-1670-4497-9cf3-22ada760458b)

**2) Parking and Unparking Car on A2:**
- **Description:** This screenshot illustrates the parking lot after a car has been parked and subsequently unparked at the location A2.
- **Interpretation:** 
    - **Parking:** Initially, the parking spot A2 was empty (`[*]`). Upon parking a car, the status of A2 changes to reserved (`[X]`), indicating that a car is now parked in that spot.
    - **Unparking:** After unparking the car from spot A2, the status reverts to empty (`[*]`), allowing other vehicles to occupy the spot.
