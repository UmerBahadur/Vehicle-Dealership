#include<windows.h>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void rent_buy();
struct Customer {
	string name, address;
	long long int  phone, cnic;
}user;
int total = 0;
void rent_suv()
{
	int srno;
	string types[] = { "1) Kia Sportage\t", "2) Mitsubishi Pajero","3) Toyota RAV4\t", "4) Hyundai Tucson", "5) Lexus RX\t" };
	string headings[] = { "\nCARS AVAILABLE", "       4 HOURS    ", "\t1 DAY   ", "\t1 WEEK" };
	//prices ( 4HOURS, 1 DAY, 1 WEEK );
	int price_list_suv[5][3] = { {6000, 36000, 252000}, {5000, 30000, 210000}, {7000, 42000, 294000}, {4000, 24000, 168000}, {10000, 60000, 420000} };
	int k = 0;
	for (int i = 0; i < 4; i++)
		std::cout << headings[i];
	cout << endl;
	for (int row = 0; row < 5; row++)
	{
		cout << types[row];
		for (int col = 0; col < 3; col++)
		{
			cout << "\t" << price_list_suv[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;

}
void rent_sedan()
{
	int srno;
	string types[] = { "1) Toyota Corolla", "2) Honda Civic\t","3) 2022 Audi A3\t", "4) 2022 Honda Accord", "5) 2022 Lexus ES" };
	string headings[] = { "\nCARS AVAILABLE", "       4 HOURS    ", "\t1 DAY   ", "\t1 WEEK" };
	//prices ( 4HOURS, 1 DAY, 1 WEEK );
	int price_list_sedan[5][3] = { {4000, 24000, 168000}, {4000, 24000, 168000}, {6000, 36000, 252000}, {5000, 30000, 210000}, {8000, 48000, 336000} };
	int k = 0;
	for (int i = 0; i < 4; i++)
		std::cout << headings[i];
	cout << endl;
	for (int row = 0; row < 5; row++)
	{
		cout << types[row];
		for (int col = 0; col < 3; col++)
		{
			cout << "\t" << price_list_sedan[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void rent_sports()
{
	int srno;
	string types[] = { "1) Subaru BRZ\t", "2) Toyota Supra\t","3) Ford Mustang\t", "4) Nissan GT-R\t", "5) Ferrari F8\t" };
	string headings[] = { "\nCARS AVAILABLE", "       4 HOURS    ", "\t1 DAY   ", "\t1 WEEK" };
	//prices ( 4HOURS, 1 DAY, 1 WEEK );
	int price_list_sports[5][3] = { {4000, 24000, 168000}, {4000, 24000, 168000}, {5000, 30000, 210000}, {6000, 36000, 252000}, {8000, 48000, 336000} };
	int k = 0;
	for (int i = 0; i < 4; i++)
		std::cout << headings[i];
	cout << endl;
	for (int row = 0; row < 5; row++)
	{
		cout << types[row];
		for (int col = 0; col < 3; col++)
		{
			cout << "\t" << price_list_sports[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void selection_rent()
{
	system("color 3f");
	int price_list_suv[5][3] = { {6000, 36000, 252000}, {5000, 30000, 210000}, {7000, 42000, 294000}, {4000, 24000, 168000}, {10000, 60000, 420000} };
	int price_list_sedan[5][3] = { {4000, 24000, 168000}, {4000, 24000, 168000}, {6000, 36000, 252000}, {5000, 30000, 210000}, {8000, 48000, 336000} };
	int price_list_sports[5][3] = { {4000, 24000, 168000}, {4000, 24000, 168000}, {5000, 30000, 210000}, {6000, 36000, 252000}, {8000, 48000, 336000} };
	int array[3][5][3] = { { {6000, 36000, 252000}, {5000, 30000, 210000}, {7000, 42000, 294000}, {4000, 24000, 168000}, {10000, 60000, 420000} } ,
		{ {4000, 24000, 168000}, {4000, 24000, 168000},{6000, 36000, 252000}, {5000, 30000, 210000}, {8000, 48000, 336000} } ,
		{ {4000, 24000, 168000}, {4000, 24000, 168000}, {5000, 30000, 210000}, {6000, 36000, 252000}, {8000, 48000, 336000} } };
	int type, size, order = 0, car, choice, more_purchase;
	while (1)
	{
		cout << "\nSelect car type \n1) suv \n2) sedan \n3) sports \nEnter the desired srno:  ";
		cin >> type;
		switch (type)
		{
		case 1:
			rent_suv();
			cout << "\nEnter the SRNO of car you want to rent:  ";
			cin >> car;
			cout << "\nHow long do you want to rent: \n1) = 4 hours   2) = 1 day    3) = 1 week :   ";
			cin >> size;
			cout << "\nPrice : " << price_list_suv[car - 1][size - 1] << endl;
			break;
		case 2:
			rent_sedan();
			cout << "\nEnter the SRNO of car you want to rent: ";
			cin >> car;
			cout << "\nHow long do you want to rent: \n1) = 4 hours   2) = 1 day    3) = 1 week :   \nChoice:";
			cin >> size;
			cout << "\nPrice : " << price_list_sedan[car - 1][size - 1] << endl;
			break;
		case 3:
			rent_sports();
			cout << "\nEnter the SRNO of car you want to rent: ";
			cin >> car;
			cout << "\nHow long do you want to rent: \n1) = 4 hours   2) = 1 day    3) = 1 week:   ";
			cin >> size;
			cout << "\nPrice : " << price_list_sports[car - 1][size - 1] << endl;
			break;
		}
		cout << "\nConfirm purchase: \n1) YES \t 2)NO \nChoice:  ";
		cin >> choice;
		if (choice == 1)
		{
			total = total + array[type - 1][car - 1][size - 1];
			cout << "\nDo you want to make more purchases: \n1 = YES\t2 = NO \nChoice:  ";
			cin >> more_purchase;
			if (more_purchase == 2)
				break;
			else if (more_purchase == 1)
				rent_buy();
		}
		else
		{
			cout << "Do you want to make any other purchases: \n1 = YES\t2 = NO \n Choice:  ";
			cin >> more_purchase;
			if (more_purchase == 2)
				break;
			else if (more_purchase == 1)
				rent_buy();
		}
		break;
	}
}
void buy_suv()
{
	string types[] = { "1) Kia Sportage\t", "2) Mitsubishi Pajero","3) Toyota RAV4\t", "4) Hyundai Tucson", "5) Lexus RX\t" };
	string headings = "\nCARS AVAILABLE \t \tPrice    ";
	int buying_price_list_suv[5] = { 6000000, 4500000, 7500000, 5500000, 13000000 };
	cout << headings;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << types[i] << "\t" << buying_price_list_suv[i] << endl;
	}

}
void buy_sedan()
{
	string types[] = { "1) Toyota Corolla", "2) Honda Civic\t","3) 2022 Audi A3\t", "4) 2022 Honda Accord", "5) 2022 Lexus ES" };
	string headings = "\nCARS AVAILABLE \t \tPrice    ";
	int buying_price_list_sedan[5] = { 4000000, 4500000, 7500000, 6500000, 12000000 };
	cout << headings;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << types[i] << "\t" << buying_price_list_sedan[i] << endl;
	}

}
void buy_sports()
{
	string types[] = { "1) Subaru BRZ\t", "2) Toyota Supra\t","3) Ford Mustang\t", "4) Nissan GT-R\t", "5) Ferrari F8\t" };
	string headings = "\nCARS AVAILABLE \t \tPrice    ";
	int buying_price_list_sports[5] = { 4000000, 8000000, 7500000, 8000000, 10000000 };
	cout << headings;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << types[i] << "\t" << buying_price_list_sports[i] << endl;
	}

}
void selection_buy()
{
	int buying_price_list_suv[5] = { 6000000, 4500000, 7500000, 5500000, 13000000 };
	int buying_price_list_sedan[5] = { 4000000, 4500000, 7500000, 6500000, 12000000 };
	int buying_price_list_sports[5] = { 4000000, 8000000, 7500000, 8000000, 10000000 };
	int array[3][5] = { { 6000000, 4500000, 7500000, 5500000, 13000000 } ,{ 4000000, 4500000, 7500000, 6500000, 12000000 } ,{ 4000000, 8000000, 7500000, 8000000, 10000000 } };
	int type, size, order = 0, car, choice, more_purchase;
	while (1)
	{
		cout << "\nSelect car type \n1) SUV \n2) Sedan \n3) Sports \nEnter the desired srno:  ";
		cin >> type;
		switch (type)
		{
		case 1:
			buy_suv();
			cout << "\nEnter the SRNO of car you want to purchase:  ";
			cin >> car;
			cout << "\nPrice : " << buying_price_list_suv[car - 1] << endl;
			break;
		case 2:
			buy_sedan();
			cout << "\nEnter the SRNO of car you want to purchase:  ";
			cin >> car;
			cout << "\nPrice : " << buying_price_list_sedan[car - 1] << endl;
			break;
		case 3:
			buy_sports();
			cout << "\nEnter the SRNO of car you want to purchase:  ";
			cin >> car;
			cout << "\nPrice : " << buying_price_list_sports[car - 1] << endl;
			break;
		}

		cout << "\nConfirm purchase: \n1) YES \t 2)NO \nChoice:  ";
		cin >> choice;
		if (choice == 1)
		{
			total = total + array[type - 1][car - 1];
			cout << "\nDo you want to make more purchases: \n1 = YES\t2 = NO \nChoice:  ";
			cin >> more_purchase;
			if (more_purchase == 2)
				break;
			else if (more_purchase == 1)
				rent_buy();
		}
		else
		{
			cout << "Do you want to make any other purchases: \n1 = YES\t2 = NO \n Choice:  ";
			cin >> more_purchase;
			if (more_purchase == 2)
				break;
			else if (more_purchase == 1)
				rent_buy();
		}
		break;
	}

}
void creating_file() {
	ofstream data;
	data.open("information.txt", ios::app);
	if (!data)
		cout << "File Not Created ";
	else {
		data << "\nCustomer's Name : " << user.name << endl;
		data << "Customer's CNIC number :" << user.cnic << endl;
		data << "Customer's Phone number :  " << user.phone << endl;
		data << "Customer's Address : " << user.address << endl;
		data << "Customer's Total Bill : " << total << endl;
	}
	data.close();
}
void rent_buy() {
	int options;
	cout << "\nPress 1 to buy a car ";
	cout << "\nPress 2 to rent a car : " << endl;
	cin >> options;
	if (options == 1)
		selection_buy();
	else
		selection_rent();
}
void customer_info() {
	char ws = cin.get();
	cout << "\nKindly provide following Information \n";
	cout << "Enter Your Full Name : ";
	getline(cin, user.name);
	cout << "Enter Your CNIC number (Without dashes) : ";
	cin >> user.cnic;
	cout << "Enter Your Phone Number : ";
	cin >> user.phone;
	ws = cin.get();
	cout << "Enter Your Address : ";
	getline(cin, user.address);
	cout << endl;
	cout << "Total amout to pay: " << total << endl;
	creating_file();
}
int main()
{
	system("color 3f");
	cout << "\n\t\t\t\t***************************************\n\t\t\t\t***************************************\n";
	cout << "\t\t\t\tWELCOME TO Exclusive Vehicle Dealership";
	cout << "\n\t\t\t\t***************************************\n\t\t\t\t***************************************\n";

	rent_buy();
	if (total != 0) {
		customer_info();
	}
	else
		cout << " !!!! You haven't made any purchase !!!! ";
	cout << "\n\t\t\t\t***************************************\n\t\t\t\t***************************************\n";
	cout << "\t\t\t\t      Thanks for trusting us.";
	cout << "\n\t\t\t\t***************************************\n\t\t\t\t***************************************\n";
	system("pause");
}
