#pragma once
#include"Clients.h"
#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

class Server
{
public:
	vector<Client> users;
	vector<Client*> online_users;
public:
	bool Registration(string username, string email, string password);
	Client* Login(string email, string password);
	void listUsers();

};

