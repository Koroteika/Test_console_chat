#include"Server.h"

int main()
{
	Server test;
	bool active=true;

	while (active)
	{
		int action;
		cout << "1 - Registaration \n";
		cout << "2 - Login \n";
		cin >> action;

		switch (action)
		{
		case 1:
		{
			cout << "Welcome to registration \n";

			string username, email, password;

			cout << "Email: " << "\n";
			cin >> email;
			cout << "Username: " << "\n";
			cin >> username;
			cout << "Passwrod: " << "\n";
			cin >> password;

			test.Registration(email, username, password);
			break;
		}
		default:
			active = false;
			cout << "Programm quit \n";
			break;
		}
	}
	test.listUsers();

}