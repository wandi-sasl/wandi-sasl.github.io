__Use LoggerStartUp\(\) in an application__

__Synopsis__

int LoggerStartUp\(\)

__Description__

Initializes internal data structure and starts the logger services\. 

LoggerStartUp\(\) returns 0 on success and \-1 on error\. <a id="_Hlk221803928"></a>When an error occurs additional error codes are written to the following files \(where <cpid> is the client process id number and <spid>\. Is the sever process id number\):

- /tmp/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerLibClient/LoggerOutput/<cpid>\-LoggerClientMessage\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<cpid>\-LoggerClientMessages\.txt
- /tmp/<spid>\-LoggerServerMessages\.txt
- $LOGGER\_HOME\_PATH/LoggerServer/LoggerOutput/<spid>\-LoggerServerMessages\.txt

When an error occurs, the application does not need to return\(\) or exit\(\)\. This API function is failed safe to allow applications to continue processing\.

__Example Usage__

If\( LoggerStartUp\(\) == \-1 \)

\{

     printf\(“Refer to additional error codes for further details\\n”\);

\}<a id="_Hlk221531119"></a>

