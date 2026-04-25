<div align="center">
  
## Wandi-SASL is a C-Program utility that validates and protects application log messages during development and deployment

</div>
Software applications use log messages to monitor, analyze and diagnose execution flow. Often these messages contain critical and sensitive information about the behavior and use. Current approaches do not do enough to protect this information. Wandi-SASL provides a secure and adaptable approach to address this and many other logging limitations and challenges.

Wandi-SASL capabilities are based on a Patent Software Design Technology that:
1. uses a simple C-Program print() style function interface.
2. analyzes for erroneous and malicious use[^1].
3. protects before and after saved to disk.
4. ensures confidentiality, integrity, and authenticity.

How to use Wandi-SASL API functions in C/C++ Program application.
* Details for [LoggerStartUp()](https://www.istech.com) function.
* Details for [LoggerAppsMsg()](https://www.istech.com) function.
* Details for [LoggerShutDown()](https://www.istech.com) function.

Setup LoggerMessageDefines.txt file used by Wandi-SASL API functions.

Refer to Wandi-SASL-examples.c.pdf for application examples.

Current and expanding Wandi-SASL capabilities for Free, Silver, and Gold versions.
[^1]: Wandi-SASL Free Version support capabilities 1 and 2 only.
