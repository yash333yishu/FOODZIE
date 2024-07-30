

#include <iostream>
#include <vector>
#include <cctype>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

// Function to Clear Screen
void clearScreen()
{
	#ifdef _WIN32
		system("cls");
		
	#elif __linux__
		system("clear");
		
	#endif
}


// Start of Order class
class Order {
	private:
		char option; 
		int quantity; 
		string customerName;
		string customerAddress; 
		vector <int> orderQuantity; 
		vector <string> orderNames; 
		vector <float> orderPrices; 
		int n = 0; 
		
	public:
		// Method Prototyping
		void orderAgain();
		void startMenu();
		void confirmOrder();
		void cancelOrder();
		void confirmShow();
		void showOrder();
		void receipt();
		void errorPrompt();
		void pizza();
		void maggi();
		void chicken();
		void burger();
		void rolls();
		void drinks();
};
// End of Order class


// Start of pizza() method of class Order
// Method to ask the User for the choice of pizza they want
void Order:: pizza() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIEE | Pizza ---";
	
	cout << "\n\n\t [Choice 1] Onion Pizza \t Price 90.00";
	cout << "\n\t [Choice 2] Chicken Pizza \t Price 130.00";
	cout << "\n\t [Choice 3] Corn Pizza  \t Price 80.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	// Pushing the number of quantity entered by the user to the vector orderQuantity
	orderQuantity.push_back(quantity); 
	
	n++;
	

	switch (option)
	{
		
		case '1':
			orderNames.push_back("Onion Pizza");
			orderPrices.push_back(quantity * 90.00);
			break;

		case '2':
			orderNames.push_back("Chicken Pizza");
			orderPrices.push_back(quantity * 130.00);
			break;
			
		case '3':
			orderNames.push_back("Corn Pizza");
			orderPrices.push_back(quantity * 80.00);
			break;
			
		// Else, call the errorPrompt() method to display an error statement
		
		default:
			errorPrompt();
			break;
	}
	
	// Ask the User if to confirm to show his/her Orders
	confirmShow();
}
// End of pizza() method of the class Order


// Start of maggi() method of class Order
// Method to ask the User for the 3 different choices of maggi to be Ordered
void Order:: maggi() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE | Maggi ---";
	
	cout << "\n\n\t [Choice 1] Chicken Maggi \t Price 30.00";
	cout << "\n\t [Choice 2] Egg Maggi \t\t Price 25.00";
	cout << "\n\t [Choice 3] Fried Maggi \t Price 20.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Chicken Maggi");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '2':
			orderNames.push_back("Egg Maggi");
			orderPrices.push_back(quantity * 25.00);
			break;
			
		case '3':
			orderNames.push_back("Fried Maggi");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of maggi() method of class Order


// Start of chicken() method of class Order
void Order:: chicken() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE | Chicken ---";
	
	cout << "\n\n\t [Choice 1] Chilli Chicken \t Price 100.00";
	cout << "\n\t [Choice 2] Butter Chicken \t Price 90.00";
	cout << "\n\t [Choice 3] Kadhai Chicken \t Price 80.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Chilli Chicken");
			orderPrices.push_back(quantity * 100.00);
			break;
			
		case '2':
			orderNames.push_back("Butter Chicken");
			orderPrices.push_back(quantity * 90.00);
			break;
			
		case '3':
			orderNames.push_back("Kadhai Chicken");
			orderPrices.push_back(quantity * 80.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of chicken() method of class Order


// Start of burger() method of class Order
// Method to ask the User for the 6 different choices or flavors of Chicken to be Ordered
void Order:: burger() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE | Burger ---";
	
	cout << "\n\n\t [Choice 1] Veg Burger \t Price 40.00";
	cout << "\n\t [Choice 2] Egg Burger \t Price 50.00";
	cout << "\n\t [Choice 3] Chicken Burger \t Price 70.00";
	cout << "\n\t [Choice 4] Chicken Cheese Burger \t Price 80.00";
	cout << "\n\t [Choice 5] Longer Burger \t Price 60.00";
	cout << "\n\t [Choice 6] Paneer Burger \t Price 55.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Veg Burger");
			orderPrices.push_back(quantity * 40.00);
			break;
			
		case '2':
			orderNames.push_back("Egg Burger");
			orderPrices.push_back(quantity * 50.00);
			break;
			
		case '3':
			orderNames.push_back("Chicken Burger");
			orderPrices.push_back(quantity * 70.00);
			break;
			
		case '4':
			orderNames.push_back("Chicken Cheese Burger");
			orderPrices.push_back(quantity * 80.00);
			break;
			
		case '5':
			orderNames.push_back("Longer Burger");
			orderPrices.push_back(quantity * 60.00);
			break;
			
		case '6':
			orderNames.push_back("Paneer Burger");
			orderPrices.push_back(quantity * 55.00);
			break;		
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of burger() method of class Order


// Start of rolls() method of class Order
// Method to Ask the User for the 3 different choices of the food rolls to be Ordered
void Order:: rolls() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE | Rolls ---";
	
	cout << "\n\n\t [Choice 1] Egg Roll \t Price 60.00";
	cout << "\n\t [Choice 2] Chicken Roll \t Price 80.00";
	cout << "\n\t [Choice 3] Mutton Roll \t Price 100.00";
	
	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Egg Roll");
			orderPrices.push_back(quantity * 60.00);
			break;
			
		case '2':
			orderNames.push_back("Chicken Roll");
			orderPrices.push_back(quantity * 80.00);
			break;
			
		case '3':
			orderNames.push_back("Mutton Roll");
			orderPrices.push_back(quantity * 100.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of rolls() method of the class Order


// Start of drinks() method of the class Order
// Method to ask the user for the 9 different types of drinks to be ordered
void Order:: drinks() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE | Drinks ---";
	
	cout << "\n\n\t [Choice 1] 250 ml Mango Shake \t\t Price 30.00";
	cout << "\n\t [Choice 2] 250 ml Melon Shake \t\t Price 30.00";
	cout << "\n\t [Choice 3] 250 ml Coconut Shake \t Price 30.00";
	cout << "\n\t [Choice 4] 250 ml Coca-Cola Softdrink \t Price 20.00";
	cout << "\n\t [Choice 5] 250 ml Sprite Softdrink \t Price 20.00";
	cout << "\n\t [Choice 6] 250 ml Banana Shake \t Price 40.00";
	cout << "\n\t [Choice 7] 250 ml Chocolate Shake \t Price 45.00";
	cout << "\n\t [Choice 8] 250 ml Drinking Water \t Price 10.00";
	cout << "\n\t [Choice 9] 250 ml Energy Drink \t Price 25.00";	

	cout << "\n\n\t Enter your choice: ";
	cin >> option;
	
	cout << "\n\t How many quantities? ";
	cin >> quantity;
	
	orderQuantity.push_back(quantity); 
	
	n++;
	
	// Start of Switch-Case Statement
	switch (option)
	{
		case '1':
			orderNames.push_back("Mango Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '2':
			orderNames.push_back("Melon Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '3':
			orderNames.push_back("Coconut Shake");
			orderPrices.push_back(quantity * 30.00);
			break;
			
		case '4':
			orderNames.push_back("Coca-cola Softdrink");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '5':
			orderNames.push_back("Sprite Softdrink");
			orderPrices.push_back(quantity * 20.00);
			break;
			
		case '6':
			orderNames.push_back("Banana Shake");
			orderPrices.push_back(quantity * 40.00);
			break;
			
		case '7':
			orderNames.push_back("Chocolate Shake");
			orderPrices.push_back(quantity * 45.00);
			break;
			
		case '8':
			orderNames.push_back("Drinking Water");
			orderPrices.push_back(quantity * 10.00);
			break;
			
		case '9':
			orderNames.push_back("Energy Drink");
			orderPrices.push_back(quantity * 25.00);
			break;
			
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
	
	confirmShow();
}
// End of drinks() method of class Order



// Method to ask the user if to order another food
void Order:: orderAgain()
{
	char choice; 

	
	cout << "\n\t Order another food? (Y/N)? ";
	cin >> choice;
	

	switch (toupper(choice))
	{
		// IF User enter Y/y, proceed again to main menu
		case 'Y':
			startMenu();
			break;
			
		// IF User enter N/n, ask the User if to confirm his/her all food orders
		case 'N':
			// Asking the User if to confirm his/her all food order
			cout << "\n\t Confirm all food orders? (Y/N)? ";
			cin >> choice;
			
			// Start of Switch-Case Statement
			switch (toupper(choice)) 
			{
				// IF User enter Y/y, proceed to confirmOrder() method of class Order
				case 'Y':
					confirmOrder();
					break;
				
				
				case 'N':
					// Clearing all the elements inside the vectors
					n = 0; // Resetting the control variable to 0
					orderQuantity.clear();
					orderNames.clear();
					orderPrices.clear();
					
					// Displaying the cancelled statement
					cout << "\n\t Your all food orders has been cancelled.";
					cout << "\n\t Thank you for having FOODZIE!";
					
					// Ask the User to press enter to return to main menu
					cout << "\n\n\t Press enter to return to main menu...";
					
					cin.ignore();
					getchar();
					
					// After entering enter, the program will proceed back to main menu
					startMenu();
					break;
					
				
				default:
					errorPrompt();
					break; 
			}
			
		default: 
			errorPrompt();
			break; 
	}	
}



// Start of confirmShow() method of class Order
// Method to ask the User if to confirm to show his/her order to the console
void Order:: confirmShow()
{
	char choice; 

	cout << "\n\t Show all food order? (Y/N)? ";
	cin >> choice;
	
	// Start of Switch-Case Statement
	switch (toupper(choice))
	{
		
		case 'Y':
			showOrder();
			break;
			
		
		case 'N':
			orderAgain();
			break;
			
		
		default: 
			errorPrompt();
			break; 
	}
	// End of Switch-Case Statement
}
// End of confirmShow() method of class Order


// Start of receipt() method of class Order
// Method to show the receipt of the orders of the User
void Order::receipt()
{
	clearScreen();
	
	cout << "RECEIPT: \n";
	
	cout << "\n--------------------------\n";
	
	cout << "\n\t --- FOODZIE ---";
	cout << "\n G 34,BAILEY ROAD,PATNA";
	
	cout << "\n\n Customer Name: " << customerName;
	cout << "\n Address: " << customerAddress;
	
	cout << "\n\n Orders: \n";
	
	// Loop to show the orders of the User
	for (int i = 0; i < n; i++)
	{
		cout << "\t" <<orderQuantity[i] << " " << orderNames[i] << "\t " << "Price " << orderPrices[i] << ".00";
		cout << "\n";		
	}
	
	// accumulate() method from <numeric> library is used for calculating total value 
	cout << "\n TOTAL PRICE: Price " << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00";
	
	cout << "\n\n Thank you for ordering with FOODZIE!\n";
	
	cout << "\n--------------------------------------------------------------\n";
	
	// Clearing all the elements inside the vectors
	// Since the order has been already successful
	n = 0;
	orderQuantity.clear();
	orderNames.clear();
	orderPrices.clear();
	
	// Notifying the User the time it will be delivered
    int time=10+(rand()%10);
	cout << "\n NOTE: Your order will be delivered in "<<time<<" minutes.\n";
	cout << "\n Press enter to continue...";
	getchar();
	// Returning to Main Menu
	startMenu();
}

// Start of showOrder() method of class Order
// Method to show all the food ordered by the User
void Order::showOrder()
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE --- ";
	cout << "\n\t\t *** Show Orders ***";
	
	
	if (n == 0)
	{
		cout << "\n\n\t You have no order yet!";
		

		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed back again to main menu
			case 'Y':
				startMenu();
				break;
				
			// ELSE IF User enter N/n, display a thank you message and exit the program
			case 'N':
				cout << "\n\t Thank you for having FOODZIE!";
				exit(0);
				break;
				
			// ELSE, proceed to errorPrompt() method of class Order
			// To display an error statement and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	
	else
	{
		cout << "\n\n\t Orders: \n";
		
		// Loop the show all the food ordered by the User
		for (int i = 0; i < n; i++)
		{
			cout << "\t\t" <<orderQuantity[i] << " " << orderNames[i] << "\t " << "Price " << orderPrices[i] << ".00";
			cout << "\n";		
		}
	
		cout << "\n\t TOTAL PRICE: Price " << accumulate(orderPrices.begin(), orderPrices.end(), 0) << ".00\n";
		
		// Calling the orderAgain() method of class Order
		// To ask if the User will order another food
		orderAgain();
	}
}
// End of showOrder() method of class Order


// Start of cancelOrder() method of class Order
// Method to ask the User if to cancel his/her current orders
void Order:: cancelOrder()
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE --- ";
	cout << "\n\t\t *** Cancel Order ***";
	
	if (n == 0)
	{
		cout << "\n\n\t You have no order yet!";
		
		// Asking the User if to return to main menu
		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed again back to main menu
			case 'Y':
				startMenu();
				break;
				
			// ELSE IF User enter N/n, display a thank you message
			// Then exit the program
			case 'N':
				cout << "\n\t Thank you for having FOODZIE!";
				exit(0);
				break;
				
			// ELSE, proceeed to errorPrompt() method of class Order
			// To display an error message and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	

	else
	{
		// Asking the User if to cancel his/her all orders
		cout << "\n\n\t Cancel all orders? (Y/N)? ";
		cin >> option;
			
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed to this block
			// To clear all the elements and notify the User that his/her order has been cancelled
			case 'Y':
				// Clearing all the elements inside the vectors
				// Since the User cancelled his/her all orders
				n = 0;
				orderQuantity.clear();
				orderNames.clear();
				orderPrices.clear();
				
				// Notifying the User that his/her order has been cancelled
				cout << "\n\t Your order has been cancelled.";
				
				// Asking the User if to return to main menu
				cout << "\n\t Go back to main menu? (Y/N)? ";
				cin >> option;
			
				// Start of Switch-Case Statement
				switch (toupper(option))
				{
					// IF User enter Y/y, proceed again to main menu
					case 'Y':
						startMenu();
						break;
					
					// ELSE IF User enter N/n, display a thank you message
					// And exit the program
					case 'N':
						cout << "\n\t Thank you for having FOODZIE!";
						exit(0);
						break;
					
					default:
						errorPrompt();
						break;
				}
				// End of Switch-Case Statement
				break;
					

			case 'N':
				cout << "\n\t Your order has been not cancelled.";
				cout << "\n\t Press enter to return to main menu...";
				cin.ignore();
				getchar();
				// Returning to Main Menu
				startMenu();
				break;
		
			// ELSE, call the errorPrompt() method of class Order
			// To display an error message and exit the program
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
}
// End of cancelOrder() method of class Order


// Start of confirmOrder() method of class Order
void Order::confirmOrder() 
{
	clearScreen();
	
	cout << "\n\t --- FOODZIE --- ";
	cout << "\n\t\t *** Confirm Order ***";
	
	if (n == 0)
	{
		cout << "\n\n\t You have not made any order yet!";
		
		// Asking the User if to return to main menu
		cout << "\n\t Go back to main menu? (Y/N)? ";
		cin >> option;
		
		// Start of Switch-Case Statement
		switch (toupper(option))
		{
			// IF User enter Y/y, proceed again to main menu
			case 'Y':
				startMenu();
				break;
			
			// ELSE IF User enter N/n, display a thank you message
			// And exit the program
			case 'N':
				cout << "\n\t Thank you for having FOODZIE!";
				exit(0);
				break;
				
			default:
				errorPrompt();
				break;
		}
		// End of Switch-Case Statement
	}
	

	else
	{
		cin.ignore();
		
		// Asking the User for his/her Full Name
		cout << "\n\n Enter your full name: ";
		getline(cin, customerName);
	
		// Asking the User the address on where the foods are to be delivered
		cout << " Enter the delivery address : ";
		getline(cin, customerAddress);
		
		// Then calling the receipt() method of class Order
		// To form the receipt
		receipt();
	}
}
// End of confirmOrder() method of class Order


// Start of errorPrompt() method of class Order
// Method to display an error message and exit the program
void Order::errorPrompt()
{
	cout << "\n\t ERROR! Invalid Input!";
	cout << "\n\t ALL FOOD ORDERS HAS BEEN CANCELLED!";
	cout << "\n\n\t Exiting the program...\n";
	exit(1);
}
// End of errorPrompt() method of class Order


// Start of startMenu() method of class Order
// The MAIN MENU
void Order::startMenu()
{
	// Clear the screen
	clearScreen();
	
	cout << "\n\t\t ---- FOODZIE ----";
	cout << "\n\t\t *** Main Menu ***";
	
	cout << "\n\n\t [Option 1] Pizza";
	cout << "\n\t [Option 2] Maggi";
	cout << "\n\t [Option 3] Chicken";
	cout << "\n\t [Option 4] Burger";
	cout << "\n\t [Option 5] Rolls";
	cout << "\n\t [Option 6] Drinks";
	
	cout << "\n\n\t [Option A] CONFIRM ORDER";
	cout << "\n\t [Option B] CANCEL ORDER";
	cout << "\n\t [Option C] SHOW ORDERS";
	
	// Asking the User's Option
	cout << "\n\n\t Enter your option: ";
	cin >> option;
	
	// Start of Switch-Case Statement
	switch (toupper(option))
	{
		// IF user enter 1, proceed to pizza() method
		case '1':
			pizza();
			break;
			
		// ELSE IF user enter 2, proceed to maggi() method
		case '2':
			maggi();
			break;
		
		// ELSE IF user enter 3, proceed to chicken() method
		case '3':
			chicken();
			break;
			
		// ELSE if user enter 4, proceed to burger() method
		case '4':
			burger();
			break;
			
		// ELSE IF user enter 5, proceed to rolls() method
		case '5':
			rolls();
			break;
			
		// ELSE IF user enter 6, proceed to drinks() method
		case '6':
			drinks();
			break;
			
		// ELSE IF user enter A/a, proceed to confirmOrder() method
		case 'A':
			confirmOrder();
			break;
			
		// ELSE IF user enter B/b, proceed to cancelOrder()_method
		case 'B':
			cancelOrder();
			break;
		
		// ELSE IF user enter C/c, proceed to showOrder() method
		case 'C':
			showOrder();
			break;
			
		// ELSE, call the errorPrompt() method
		// To display an error statement and exit the program
		default:
			errorPrompt();
			break;
	}
	// End of Switch-Case Statement
}
// End of startMenu() method of class Order



// Driver Code
int main()
{
	// Creating object myOrder of class Order
	Order myOrder;
	
	// Calling the startMenu() method of object myOrder
	myOrder.startMenu();
	return 0;
}



// ----------------------------------------- END  ------------------------------------------ //