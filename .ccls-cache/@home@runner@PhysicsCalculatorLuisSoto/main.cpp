/*
This program will consist of a menu of options that will allow the user to choose from a variety of calculations.
Velcoity, accleration, Newton's second law, weight on Earth, momentum, motion, and exit.
Physics_Calculator_Luis_Soto.
 */

#include <iostream>
#include <iomanip>
using namespace std; 

void physicsMenu(); 
void velocity(); 
void acceleration();
void motion(); 
void newtonsSecondLaw();
void weight();
void momentum();

int main() 
{
  int choice = 0;
  do
  {
      physicsMenu(); // call the show menu function
      cin >> choice; 
      if(choice == 1)// call the velocity() function
      {
        velocity(); 
      }
      else if(choice == 2)// call the acceleration() function
      {
        acceleration(); 
      }
      else if(choice == 3) // call the newtonsSecondLaw() function
      {
        newtonsSecondLaw();
      }
    else if (choice == 4) // call the weight() function
    {
      weight(); 
    }
    else if (choice == 5) // call the momentum() function 
    {
       momentum(); 
    } 
    else if (choice == 6)// call the motion() function
    {
      motion(); 
    }
    else if (choice == 7) // Will exit the program
    {
      cout << "Bye Bye!!!" << endl;
      break;
    }
    else if (choice == 8) // will clear the screen
    {
      cout << "reset\n";
      continue;
    }
  }while(choice != 9);   
  return 0; 
}

void physicsMenu() // Prompts menu for user to choose options.
{
  cout << "\nWHATS GOING ON PHYSICS MANIACS, HERE'S YOUR MENU OPTIONS!!!" << endl;
  cout << "1. calc velocity\n";
  cout << "2. calc acceleration\n";
  cout << "3. calc newton's 2nd law\n";
  cout << "4. calc weight\n";
  cout << "5. calc momentum\n";
  cout << "6. calc motion\n";
  cout << "7. Exit\n";
  cout << "8. clear screen\n";
  cout << "Enter your choice: ";
}

void velocity() // calculates velocity
{
  double ds = 0.0, dt = 0.0; // ds = ds (distance)
  cout << "Velocity Calculator";
  cout << "Enter ds (d = ds): ";
  cin >> ds; 
  cout << "Enter dt (d = dt): ";
  cin >> dt; 
  cout << "Velocity = " << ds / dt << endl;

}

void acceleration() //calcs acceleration
{
  double v0, vn, t; // v0 = initial velocity, vn = final velocity, t = time
  cout << "Enter initial velocity (m/s): ";
  cin >> v0;
  cout << "Enter final velocity (m/s): ";
  cin >> vn;
  cout << "Enter time (s): ";
  cin >> t;
  double a = (vn - v0) / t;
  cout << "Acceleration: " << a << " m/s^2" << endl;
}

void newtonsSecondLaw() //calculates newton's 2nd law

{
  double force, mass; // force = force, mass = mass
  cout << "Enter the force (in newtons): ";
  cin >> force;
  cout << "Enter the mass (in kilograms): ";
  cin >> mass;
  double acceleration = force / mass;
  cout << "Acceleration: " << acceleration << " m/s^2" << endl;
}
void weight() //calculates weight(earth)
{
  double weightInPounds;
  const double gravity = 9.8;
  const double poundsToKilograms = 0.45359237;
  cout << "Enter the weight of the object (in pounds): ";
  cin >> weightInPounds;
  double weightInKilograms = weightInPounds * poundsToKilograms;
  double weightOnEarth = weightInKilograms * gravity;
  cout << "Weight on Earth: " << weightOnEarth << " newtons" << endl; 
}

void momentum() // calcuates momentum
{
  double mass, velocity;
  cout << "Enter the mass (in kilograms): ";
  cin >> mass;
  cout << "Enter the velocity (in meters per second): ";
  cin >> velocity;
  double momentum = mass * velocity;
  cout << "Momentum: " << momentum << " kg·m/s" << std::endl;
}

void motion() // calcuates motion
{
  char motionChoice = '\0';
  double Ma = 0.0, v0 = 0.0, a = 0.0, t = 0.0, v = 0.0;
  cout << "\nMotion Calculator Menu\n";
  cout << "A. Ma = solve for v" << endl;
  cout << "B. Ms = solve for s" << endl;
  cout << "C. Mv2 = solve for v^2" << endl;
  cout << "D. Mv = solve for v_bar" << endl;
  cin >> motionChoice;
  // solves for Ma
  if(motionChoice == 'A' || motionChoice == 'a')
  {
    cout << "Enter initial velocity v0: ";
    cin >> v0; 
    cout << "Enter initial acceleration(a): ";
    cout << "Enter initial time (t): ";
    cin >> t; 
    v = v0 + (a * t); 
    cout << "Velocity = " << v << endl;
    Ma = v; 
  }
    // solves for Ms
  else if (motionChoice == 'B' || motionChoice == 'b')
  {
    cout << "Enter initial velocity (v0): ";
    cin >> v0;
    cout << "Enter time (t): ";
    cin >> t;
    cout << "Enter acceleration (a): ";
    cin >> a;
    double Ms = v0 * t + 0.5 * a * t * t;
    cout << "Displacement (Ms) = " << Ms << endl;
  }
    //solves for Mv2
  else if (motionChoice == 'c' || motionChoice == 'C')
  {
    cout << "Enter initial velocity (v0): ";
    cin >> v0;
    cout << "Enter aceleration (a): ";
    cin >> a;
    cout << "Enter disance (t):";
    cin >> t;
    double Mv2 = v0 * v0 + 2 * a * t;
    cout << "Velocity (Mv2) = " << Mv2 << endl;

  }
    //solves for Mv
   else if (motionChoice == 'd' || motionChoice == 'D')
   {
     double mass, velocity;
     cout << "Enter the mass (in kg): ";
     cin >> mass;
     cout << "Enter the velocity (in m/s): ";
     cin >> velocity;
     double motion = mass * velocity;
     cout << "Motion (mv): " << motion << " kg·m/s" << endl;
   }
      
  }