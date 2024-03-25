#include <iostream>
#include <iomanip>

void PhysicsMenu();
void Velocity();
void Acceleration();
void Motion();
void NewtonsSecondLaw();
void Weight();
void Momentum();

using namespace std;

void PhysicsMenu()
{
    cout << "Please choose an option to find a calculation" << endl;
    cout << "1. Velocity" << endl;
    cout << "2. Acceleration" << endl;
    cout << "3. Motion" << endl;
    cout << "4. Newton's Second Law" << endl;
    cout << "5. Weight(Earth)" << endl;
    cout << "6. Momentum" << endl;
    cout << "Enter option: ";
}

void Velocity()
{
    double ds = 0.0, dt = 0.0; 
    cout << "Velocity Calculator" << endl;
    cout << "Enter ds (d = ds): ";
    cin >> ds;
    cout << "Enter dt (d = dt): ";
    cin >> dt;
    cout << "Velocity = " << ds / dt << endl;
}
void Acceleration()
{
    // Define the Acceleration function here
}
void Motion()
{
    // Define the Motion function here
}
void NewtonsSecondLaw()
{
    // Define the NewtonsSecondLaw function here
}
void Weight()
{
    // Define the Weight function here
}
void Momentum()
{
    // Define the Momentum function here
}


int main()
{
    int choice = 0;
    do
    {
        PhysicsMenu();
        cin >> choice;
        if (choice == 1)
        {
            Velocity();
        }
        else if (choice == 2)
        {
            Acceleration();
        }
        else if (choice == 3)
        {
            Motion();
        }
        else if (choice == 4)
        {
            NewtonsSecondLaw();
        }
        else if (choice == 5)
        {
            Weight();
        }
        else if (choice == 6)
        {
            Momentum();
        }
    } while (choice != 8);

    return 0;
}