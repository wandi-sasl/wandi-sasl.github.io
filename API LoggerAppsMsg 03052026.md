__Use LoggerAppsMsg\(\) in an application__

__Synopsis__

int	LoggerAppsMsg\(devProd, message\_group, severity, message\_string, __…__ \)

int	devProd;

int	message\_group;

int	severity;

char	\*message\_string;

__Description__

LoggerAppsMsg\(\) decomposes the argument parameters, <a id="_Hlk222047241"></a>validates the parameters for errors, encode the data to reduce storage capacity, and securely protects the data to ensure confidentiality, integrity, and authenticity\.<a id="_Hlk221819515"></a>

The devProd integer parameter is either 1 or 2, where 1 means that the log message should be generated when the code is executing in a development environment, and 2 means that the log message should be generated when the code is executing in a production environment\. *Note: there is a runtime option that enables message with 1 and 2 to be generated in a development and production environment, or message with 2 to be generated in a production environment only\. This prevents flooding production environment with unnecessary messages used during software development\.*

The message\_group integer parameter is a unique integer id value from the list of  id=value pairs as defined in the configuration file <a id="_Hlk91933297"></a><a id="_Hlk221868105"></a>$LOGGER\_HOME\_PATH/LoggerSecureVault/LoggerMessageDefines\.txt\. <a id="_Hlk221975938"></a>Refer to the LoggerMessageDefines\.txt document to understand the details about the component id=label pair\.

The severity integer parameter is a unique integer id value from the list of  id=value pairs defined in the configuration file $LOGGER\_HOME\_PATH/LoggerSecureVault/LoggerMessageDefines\.txt\. Refer to the LoggerMessageDefines\.txt document to understand the details about the severity id=label pair\.

The message\_string string parameter is a string that is <a id="_Hlk222047872"></a>derived from the <a id="_Hlk91927203"></a>C\-Programming Language printf\(\) style format specification that comprises string text with string format specifiers \(e\.g\., “%s” for string, “%d” for integer\), and corresponding argument data values \(e\.g\., “Company” for string, 999 for integer\)\.

The reminder of the LoggerAppsMsg\(\) function parameters \(as indicated by “…”\) are the argument data values are derived from the C\-Programming Language printf\(\) style format specification\.

LoggerAppsMsg\(\) returns 0 on success and \-1 on error\. <a id="_Hlk221803928"></a>When an error occurs additional error codes are written to the following files \(where <cpid> is the application process id number and <spid>\. Is the sever process id number\):

- /tmp/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerLibClient/LoggerOutput/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<cpid>\-LoggerClientMessages\.txt
- /tmp/<spid>\-LoggerServerMessages\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<spid>\-LoggerServerMessages\.txt

When an error occurs, the application does not need to return\(\) or exit\(\)\. This API function is failed safe to allow applications to continue processing\.

__Example Usage__

If\( LoggerAppsMsg\(1,100,3,"Message that generates 1 string and 2 integer arguments \[%s\], \[%d\] and \[%d\]","String Argument", 98,99\) == \-1 \)

\{

     printf\(“Refer to additional error codes for further details\\n”\);

\}<a id="_Hlk221531119"></a>

Generates the following formatted output log message:

02/09/2026 12:01:55 \[3650:sample\_program\] \[DATABASE\] \[INFORMATIONAL\] Message that generates 1 string and 2 integer arguments \[String Argument\], \[98\] and \[99\]

