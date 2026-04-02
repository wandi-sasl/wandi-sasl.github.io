__Configure the definition in LoggerMessageDefines\.txt__

__Description__

<a id="_Hlk221819515"></a>LoggerMessageDefines\.txt file \(Figure 1\) contains message\_group and severity id=label pair definitions used by applications\. 

The message\_group is used to represent a grouping of log messages that are included in one or more functions and files\. For example, defining a message\_group pair as 100=DATABASE and using DATABASE in the LoggerAppsMsg\(\) call for database related operations will show all log messages for database processing within a file and across multiple files\. 

The severity is used to represent different levels of log message importance\. For example, grouping log messages as Fatal, Error, Warning, Informational, and Debug\.

\#\*\* Define 1 to 255 unique component id=label pairs \*\*/

LOGGER\_MESSAGE\_GROUP\_START

100=DATABASE

101=User\_Interface

102=Main\_routine

LOGGER\_MESSAGEGROUP\_END

\#\*\* Define from 1 through 5 severity id=label pairs \*\*/

LOGGER\_SEVERITY\_START

1=FATAL

2=ERROR

3=<a id="_Hlk221961398"></a>INFORMATIONAL

LOGGER\_SEVERITY\_END

<a id="_Ref221960079"></a>Figure : Configuration file LoggerMessageDefines\.txt

The message\_group id integer part is a unique number from 1 through 255, and the label part is an alphanumeric text that represents the message\_group name\. 

The severity id integer part is a unique number from 1 through 5, and the label part is an alphanumeric text that represents a severity name\. 

Lines that start with a “\#” sign is treated as a commented line\.

These  id=value pairs are defined in the configuration file $LOGGER\_HOME\_PATH/LoggerSecureVault/LoggerMessageDefines\.txt\.

<a id="_Hlk221803928"></a>During LoggerStartUp\(\) the client validates the id=label pairs and additional error codes are written to the following files \(where <cpid> is the client process id number and <spid>\. Is the sever process id number\):

- /tmp/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerLibClient/LoggerOutput/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<cpid>\-LoggerClientMessages\.txt
- /tmp/<spid>\-LoggerServerMessages\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<spid>\-LoggerServerMessages\.txt

__Example using component and severity ids in C\-Program:__

\#include <stdio\.h>

main\(\)

\{

    LoggerStartUp\(\);

	

      …application code…

    LoggerAppsMsg\(0,100,3,"Message that generates 1 string and 2 integer arguments \[%s\], \[%d\] and \[%d\]","String Argument", 98,99\);

      …application code…

   LoggerShutDown\(\);

\}<a id="_Hlk221531119"></a>

The LoggerClientMsg\(\) function uses 100 and 3 for message\_group id and severity id, respectively\. Those ids are mapped from the id integer to the corresponding label text and generated as “DATABASE” and “INFORMATIONAL” in the output log message\.

02/09/2026 12:01:55 \[3650:sample\_program\] \[DATABASE\] \[INFORMATIONAL\] Message that generates 1 string and 2 integer arguments \[String Argument\], \[98\] and \[99\]

