/*
  1. Define the following functions:

  physicsMenu(): Displays the menu options to the user.
  velocity(): Calculates velocity based on user input.
  acceleration(): Calculates acceleration based on user input.
  newtonsSecondLaw(): Calculates Newton's second law based on user input.
  weight(): Calculates weight on Earth based on user input.
  momentum(): Calculates momentum based on user input.
  motion(): Calculates various properties of motion based on user input.
--------------------------------------------------------------------------
2. In the main function:
Declare an integer variable choice and initialize it to 0.
Start a do-while loop that continues until the user enters choice 9.
Inside the loop:
Call the physicsMenu() function to display the menu options.
Read the user's choice into the choice variable.
Use conditional statements (if-else if) to determine the chosen option and call the corresponding function accordingly.
If the user enters choice 7, display a goodbye message and break out of the loop.
If the user enters choice 8, print "reset" to simulate clearing the screen and continue to the next iteration of the loop.
--------------------------------------------------------------------------------------------------------------------------
3.Implement the physicsMenu() function:

Display the menu options using cout.
--------------------------------------------------------------------------------------------------------------------------
4.Implement the velocity() function:

Declare two double variables ds and dt to store the distance and time values, respectively.
Prompt the user to enter the values of ds and dt using cout and read them using cin.
Calculate the velocity by dividing ds by dt and display the result.
--------------------------------------------------------------------------------------------------------------------------
5.Implement the acceleration() function:

Declare three double variables v0, vn, and t to store the initial velocity, final velocity, and time values, respectively.
Prompt the user to enter the values of v0, vn, and t using cout and read them using cin.
Calculate the acceleration by subtracting v0 from vn and dividing the result by t.
Display the calculated acceleration.
--------------------------------------------------------------------------------------------------------------------------
6.Implement the newtonsSecondLaw() function:

Declare two double variables force and mass to store the force and mass values, respectively.
Prompt the user to enter the values of force and mass using cout and read them using cin.
Calculate the acceleration by dividing force by mass.
Display the calculated acceleration.
--------------------------------------------------------------------------------------------------------------------------
7.Implement the weight() function:

Declare a double variable weightInPounds to store the weight in pounds.
Declare two constant double variables gravity and poundsToKilograms to store the gravitational constant and the conversion factor from pounds to kilograms, respectively.
Prompt the user to enter the weight in pounds using cout and read it using cin.
Calculate the weight in kilograms by multiplying weightInPounds by poundsToKilograms.
Calculate the weight on Earth by multiplying the weight in kilograms by gravity.
Display the calculated weight on Earth.
--------------------------------------------------------------------------------------------------------------------------
8.Implement the momentum() function:

Declare two double variables mass and velocity to store the mass and velocity values, respectively.
Prompt the user to enter the values of mass and velocity using cout and read them using cin.
Calculate the momentum by multiplying mass by velocity.
Display the calculated momentum.
--------------------------------------------------------------------------------------------------------------------------
9.Implement the motion() function:

Declare a char variable motionChoice to store the user's choice.
Declare double variables Ma, v0, a, t, and v to store the calculated values.
Display the motion calculator menu options using cout.
Read the user's choice into the motionChoice variable using cin.
Use conditional statements (if-else if) to determine the chosen option and perform the corresponding calculation.
Display the calculated results.
--------------------------------------------------------------------------------------------------------------------------
*/