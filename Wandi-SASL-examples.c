#include	<stdlib.h>
#include	<stdio.h>

extern	int	LoggerStartUp();
extern	int	LoggerAppsMsg();
extern	int	LoggerShutDown();

enum components {
Main=100,
UI=101
};

enum secevirty {
Info=1,
Error=2
};

/***
This program shows how to use LoggerAppsMsg() API 
for Wandi-SASL Free Version capabilities.

Refer to the Wandi-SASL Capabilities section Adjustable Parameters
for further details.
***/

int main()
{
	int	i;
	char	*str = "string value";
	unsigned	int	hex_value = 0x3d59ba4f;
	char	char_value = 'A';

	LoggerStartUp();

	/** These adjustable parameters are fixed for the Free Version **/

	/**
	Number of format string specifiers types per log message.
		1y – Maximum number of format string specifiers types allowed with a message is 6.
	**/
	LoggerAppsMsg(1,Main,Info,"1y - Maximum number of format string specifiers types allowed with a message is 6");
	LoggerAppsMsg(1,Main,Info,">>>> For example: [%d, %d, %d, %d, %d, %s]",91,92,93,94,95,str);
	/**
	Different types of format string specifiers.
		2y – Different types of supported format string specifiers are %s, %d, %f, %c, %x, %p.
	**/
	LoggerAppsMsg(1,Main,Info,"2y - Different types of supported format specifiers are %%s %%d %%f %%c %%x %%p");
	LoggerAppsMsg(1,Main,Info,">>>> For example:  [%s, %d, %f, %c, %x, %p]",str,99,3.4,char_value,hex_value, str);

	/**
	Length for format string specifier %s arguments.
		3y – Maximum length for format string specifier %s argument is 64 characters.
	**/
	LoggerAppsMsg(1,Main,Info,"3y - Maximum length for string specifier [%%s] argument is 64 characters]");

	/**
	Length for message format string.
		4y – Maximum length format string specification is 256 characters.
	**/
	LoggerAppsMsg(1,Main,Info,"4y - Maximum length format string specification is 256 characters");

	/**
	Subset of ASCII characters for both string arguments and output format strings.
		5y - Subset of ASCII characters allowed for format string specification and string argument are upper/lower case alphanumeric and  ! "#$%&'()*+,-./:;<=>?@[]^_{|}~\\ characters.
	**/
	LoggerAppsMsg(1,Main,Info,"5y - Subset of ASCII characters allowed for format string specification and string argument are uppler/lower case alphanumeric and \" !#$%&'()*+,-./:;<=>?@[]^_{|}~\\ characters.");

	/**
	Number of severity id=value pairs and length of value string.
		6y – Maximum number of severity levels is 4 and length of value is 8 characters.
	**/
	LoggerAppsMsg(1,Main,Info,"6y - Maximum number of severity levels is 4 and length of value is 8 characters.");

	/**
	Number of logical message grouping id=value pairs and length of value string.
		7y – Maximum number of logical message groups is 32 and length of value is 16 characters.
	**/
	LoggerAppsMsg(1,Main,Info,"7y - Maximum number of logical message groups is 32 and length of value is 16 characters.");

	LoggerShutDown();

	return(0);
}
