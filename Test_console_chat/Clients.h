#pragma once
#include<iostream>
#include<string>

class Client
{
public:
	std::string _username;
	std::string _email;
	std::string _password;

	Client(std::string username, std::string email, std::string password):_username(username),_email(email),_password(password){}
};