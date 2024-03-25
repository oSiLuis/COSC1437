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
    Motion();
  }
  else if (choice == 5)
  {
    NewtonsSecondLaw();
  }
  else if (choice == 6)
  {
    Weight();
  }
  else if (choice == 7)
  {
    Momentum();
  }
}while (choice != 8);