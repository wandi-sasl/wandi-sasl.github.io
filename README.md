# Wandi: Secure Adaptable Software Logger
Software programs use log messages to show application execution flow. Often these messages contain critical and sensitive information about the behavior of the application and use of confidential data. Current approaches to protect these messages is limited to encrypting the message after the application has saved it to disk. Wandi is a secure adaptable software logger that address this and other message logging limitations and challenges.

Wandi capabilities are based on the following design methods, it:
* validates and protects log message before and after it is saved to disk.
* provides a simple C-Program print() style function interface to log messages.
* decodes the log message string and arguments into element/value pairs.
* analyzes and validates element/value pairs for erroneous and malicious usage.
* separates and encodes element/value pairs to reduce memory and disk usage.
* protects element/value pairs to ensure confidentiality, integrity, and authenticity.
* ensures only authenticated users view protected log messages.

List of [Wandi capabilities](https://www.istech.com) for Free version, Silver version, Gold version.

How to use the [Wandi API functions in your C-Program application.](https://www.istech.com)
* Details for [LoggerStartUp()](https://www.istech.com) function.
* Details for [LoggerAppsMsg()](https://www.istech.com) function.
* Details for [LoggerShutDown()](https://www.istech.com) function.

Configure the [LoggerMessageDefines.txt](https://www.istech.com) file.

Install and setup instructions are provided with each requested version.
