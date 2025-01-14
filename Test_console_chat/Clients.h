#pragma once
#include<iostream>
#include<string>
using std::string;

class Client
{
public:
	std::string _username;
	std::string _email;
	std::string _password;

	Client(string username, string email, string password):_username(username),_email(email),_password(password){}
};