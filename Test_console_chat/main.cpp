#include"Server.h"

int main()
{
	Server test;
	bool active=true;

	while (active)
	{
		string username, email, password;
		int action;
		cout << "1 - Registaration \n";
		cout << "2 - Login \n";
		cout << "3 - Online users \n";
		cout << "4 - All users \n";
		cin >> action;

		switch (action)
		{
		case 1:
		{
			cout << "Welcome to registration \n";

			cout << "Username: " << "\n";
			cin >> username;
			cout << "Email: " << "\n";
			cin >> email;
			cout << "Passwrod: " << "\n";
			cin >> password;

			test.Registration(username, email, password);
			break;
		}
		case 2:
		{
			cout << "Welcome! \n";
			cout << "Email: " << "\n";
			cin >> email;
			cout << "Passwrod: " << "\n";
			cin >> password;
			Client* user = test.Login(email, password);
			if (user)
			{
				cout << "Hello! " << user->_username << "\n";
			}
			break;
		}
		case 3:
		{
			test.onlineUsers();
			break;
		}
		case 4:
		{
			test.listUsers();
			break;
		}

		default:
			active = false;
			cout << "Programm quit \n";
			cout << "test change" << "\n";
			break;
		}
	}
}