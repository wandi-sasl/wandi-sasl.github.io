## Wandi-SASL validates and protects application log messages
Software programs use log messages to show application execution flow. Often these messages contain critical and sensitive information about the behavior of the application and use of confidential data. Current approaches is limited to encrypting messages after the application has saved it to disk. Wandi-SASL adaptable and secure approach addresses many logging limitations and challenges.

Wandi-SASL capabilities are based on the following design methodology:
* provides a simple C-Program print() style function interface to log messages.
* validates and protects log message before and after it is saved to disk.
* decodes the log message string and arguments into element/value pairs.
* analyzes and validates element/value pairs for erroneous and malicious usage.
* separates and encodes element/value pairs to reduce memory and disk usage.
* protects element/value pairs to ensure confidentiality, integrity, and authenticity.
* ensures only authenticated users view protected log messages.

List of [Wandi-SASL capabilities](https://wandi-sasl.github.io/code.list.docx) for Free version, Silver version, Gold version.

How to use the [Wandi-SASL API functions in your C-Program application.](https://www.istech.com)
* Details for [LoggerStartUp()](https://www.istech.com) function.
* Details for [LoggerAppsMsg()](https://www.istech.com) function.
* Details for [LoggerShutDown()](https://www.istech.com) function.

Configure the [LoggerMessageDefines.txt](https://www.istech.com) file.

Install and setup instructions are provided with each requested version.
