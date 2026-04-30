<div align="center">
  
## Free version of Wandi-SASL C-Program utility that validates and protects application log messages during development and deployment

</div>
Software applications use log messages to monitor, analyze and diagnose execution flow. Often these messages contain critical and sensitive information about the behavior and use. Current approaches do not do enough to protect this information. Wandi-SASL provides a secure and adaptable approach to address this and many other logging limitations and challenges.

This freeversion of Wandi-SASL capabilities are based on a [Patent Software Design Technology](https://www.istech.com) that:

1. uses a simple C-Program print() style function interface.
2. analyzes for erroneous and malicious use[^1].
3. protects before and after saved to disk.
4. ensures confidentiality, integrity, and authenticity.

How to use [Wandi-SASL API functions in C/C++ Program application.](Wandi-SASL-Using-API-Function.pdf)
* Details for [LoggerStartUp()](Wandi-SASL-API-LoggerStartUp-Function.pdf) function.
* Details for [LoggerAppsMsg()](Wandi-SASL-API-LoggerAppsMsg-Function.pdf) function.
* Details for [LoggerShutDown()](Wandi-SASL-API-LoggerShutDown-Function.pdf) function.

Setup [LoggerMessageDefines.txt](Wandi-SASL-LoggerMessageDefines.pdf) file used by Wandi-SASL API functions.

Refer to [Wandi-SASL-examples.c](Wandi-SASL-examples.c) for application examples.

List of [Wandi-SASL Capabilities](https://www.istech.com/?page_id=570) for Free, Silver, and Gold versions.
[^1]: Wandi-SASL Free Version support capabilities 1 and 2 only.
