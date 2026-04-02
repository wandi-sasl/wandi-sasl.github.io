__About__

Wandi is a Secure Adaptable Software Application Logger for C/C\+\+ Programming language\.

__Overview__

Software programs use log messages to show application execution flow\. Often these messages contain critical and sensitive information about the behavior of the application and use of confidential data\. Current approaches to protect these messages is limited to encrypting the message after the application has saved it to disk\. Wandi is a secure adaptable software application logger that address this and other message logging limitations and challenges\.

__Design Approach__

Wandi features are based on the following design methods, it:

- validates and protects log message before and after it is saved to disk\. 
- provides a simple C\-Program print\(\) style function interface to log messages\. 
- decodes the log message string and arguments into element/value pairs\.
- analyzes and validates element/value pairs for erroneous and malicious usage\. 
- separates and encodes element/value pairs to reduce memory and disk usage\. 
- protects element/value pairs to ensure confidentiality, integrity, and authenticity\. 
- ensures only authenticated users view protected log messages\.

List of [Wandi Features i](Secure%20Advenced%20Logger%20Features%20v2.0%2003122026.docx)nclude a Free Version, a Silver Version and a Gold Version\.

How to use [Wandi API functions in your C/C\+\+ program application](Using%20the%20API%20Function%2003052026.docx)\.

- Details for [LoggerStartUp\(\)](API%20LoggerStartUp%2003052026.docx) function\.
- Details for [LoggerAppsMsg\(\)](API%20LoggerAppsMsg%2003052026.docx) function\.
- Details for [LoggerShutDown\(\)](API%20LoggerShutDown%2003052026.docx) function\.

Configure the [LoggerMessageDefines\.txt](Configure%20LoggerMessageDefine.txt.docx) file\.

Install and setup instructions are included with each version\.

