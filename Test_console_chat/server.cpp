#include"Server.h"

bool Server::Registration(string username, string email, string password)
{
	for (auto& user:users)
	{
		if (user._email == email)
		{
			cout << "The user exists! Enter another email address \n";
			return false;
		}
	}
	users.push_back(Client(username, email, password));
	cout << "The user is registered \n";
	return true;
}

Client* Server::Login(string email, string password)
{
	for (auto& user : users)
	{
		if (user._email == email && user._password == password)
		{
			online_users.push_back(&user);
			return &user;
		}
	}
	cout << "Invalid username or password \n";
	return nullptr;
}

void Server::listUsers()
{
	if (users.empty()) {
		cout << "There are no registered users. \n";
		return;
	}
	cout << "List of all users: \n";
	for (const auto& user : users) {
		cout << "Email: " << user._email << ", Name: " << user._username << ", Password: "<<user._password<<"\n";
	}
}