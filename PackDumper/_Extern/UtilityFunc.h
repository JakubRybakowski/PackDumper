#pragma once

namespace uf
{
	uintptr_t   GetRandomNumber ( uintptr_t Min, uintptr_t Max );
	std::string GetRandomString ( size_t Lenght );

	std::string StrFromTo  ( std::string Str, const std::string& From, const std::string& To );
	void        EraseInStr ( std::string& Str, const std::string& StrToErase );
}

uintptr_t uf::GetRandomNumber ( uintptr_t Min, uintptr_t Max )
{
	std::random_device Random;
	std::default_random_engine Engine ( Random () );
	std::uniform_int_distribution<uintptr_t> Distr ( Min, Max );

	return Distr ( Engine );
}

std::string uf::GetRandomString ( size_t Lenght )
{
	std::string RandomString;

	const char* Str = XOR ( "0123456789abcdfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&*-+" );

	while ( RandomString.size () < Lenght )
	{
		RandomString += Str[uf::GetRandomNumber ( 0, strlen ( Str ) - 1 )];
	}

	return RandomString;
}

std::string uf::StrFromTo ( std::string Str, const std::string& From, const std::string& To )
{
	size_t Off = 0;

	while ( ( Off = Str.find ( From, Off ) ) != std::string::npos )
	{
		Str.replace ( Off, From.length (), To );
		Off += To.length ();
	}

	return Str;
}

void uf::EraseInStr ( std::string& Str, const std::string& StrToErase )
{
	size_t Off = Str.find ( StrToErase );

	if ( Off != std::string::npos )
	{
		Str.erase ( Off, StrToErase.length () );
	}
}