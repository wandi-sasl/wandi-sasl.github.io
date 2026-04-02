__Wandi: Secure Adaptable Software Logger \(SASL\) Capabilities__

*Free*

*Silver*

*Gold*

__Simple APIs__

LoggerStartUp\(\) starts the logger\.

LoggerAppMsg\(\) logs message using printf\(\) format style\.

LoggerShutDown\(\) stops the logger\.

x

x

x

__Robust APIs__

Fail safe APIs to minimize abnormal impact to applications\.

x

x

x

Informational codes provide details about API execution behavior\.

x

x

x

LoggerStartUp\(\) allocates internal data and starts services\.

x

x

x

LoggerAppMsg\(\) analyzes and validates log message\.

x

LoggerAppMsg\(\) analyzes and validates log message, encodes to reduce storage capacity and protects using confidentiality, integrity, and authenticity\.

x

x

LoggerShutDown\(\) frees internal data and stops services\.

x

x

__Adjustable Parameters__

Number of format string specifiers types\.

1y

x

x

Types of format string specifiers\.

2y

x

x

Length for format string specifier %s arguments\.

3y

x

x

Length of generated log message output string\.

4y

x

x

Subset of ASCII characters for both string arguments and output format strings\.

5y

x

x

Number of severity levels and length of name\.

6y

x

x

Number of logical message groupings and length of name\.

7y

x

x

Number of unique format strings\.

x

Multiple sequential log files each limited to N messages\.

x

One log file with the most recent N log messages\.

x

One log file with all log messages\.

x

Generate all log messages during development only\.

x

x

x

Generate all  log messages in production only\.

x

Select log messages for production environment only\.

x

__Fault Prevention__

Invalid NULL, 0, \-1 pointer for %s format string specifier\.

x

x

x

String argument that is not properly NULL terminated\.

x

x

x

Untrusted or malicious format string specifiers\.

x

x

x

Ill\-formed or non\-standard format specifiers\.

x

x

x

__Cybersecurity__

Decompose and encode to protect arguments/value separately\.

x

Encrypt log messages for confidentiality\.

x

Hash and sign log messages for integrity\.

x

Certify log messages for authenticity\.

x

Separation of duties for logging and viewing log messages\.

x

OpenSSL/TLS Certificate Authority support\.

x

OpenSSL/TLS for secure communication\.

x

Error codes reporting instead of verbose text descriptions\.

x

x

x

Log file viewed by only authenticated users\.

x

Fail safe and robust APIs\.

x

x

x

Log message protected before written to disk\.

x

__Reduce Storage__

Encode log messages to reduce RAM storage usage\.

x

Encode log messages to reduce disk storage usage\.

x

Remove duplicate log message format strings to reduce storage needs\.

x

Fixed size circular RAM queue for fast access and  processing\.

x

Fixed size circular RAM queue to report the most recent N number of log messages

__Output Log Message File__

Log message files are protected on disk\.

x

Protected log message files are viewable using a browser command\.

x

Log message file name includes date, timestamp, and sequence number\.

x

x

x

__Deployable Architectures__

Single processor secure deployment\.

x

x

Multi\-processor secure deployment\.

x

Lightweight library for user application\.

x

x

x

Single\-processor unsecure deployment\.

x

x

Multi\-processor unsecure deployment\.

x

__Future Capabilities__

Machine Learning to support near real\-time analysis of log messages\.

Dynamic and near real\-time AI Reporting of log messages\.

__Notes__

Capabilities are fixed and cannot be changed:

- 1y \- Number of format string specifiers types is 8\.
- 2y \- Types of format string specifiers are %s, %d, %f, %c, %s\.
- 3y \- Length for format string specifier %s argument is 32 characters\.
- 4y \- Length of generated log message output string is 3202 characters\.
- 5y \- Subset of ASCII characters for both format strings and string arguments are upper/lower case alphanumeric characters and %,\[\]\(\) =/\+\_\.:;\-><
- 6y \- Number of severity levels and length of name is 4 and 8 characters\.
- 7y \- Number of component groups and length of name is 32 and 8 characters\.

Silver version licenses based on selected fixed parameter values\.

Gold version allow user to configure adjustable parameters\.

