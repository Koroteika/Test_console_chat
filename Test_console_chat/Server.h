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
public:
	bool Registration(string username, string email, string password);
    // Вывод списка всех пользователей
	void listUsers();

};

