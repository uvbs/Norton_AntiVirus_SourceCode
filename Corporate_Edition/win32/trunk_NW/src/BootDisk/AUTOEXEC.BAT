@echo off
cls
echo  ******************************************************************************
echo  **************** Symantec AntiVirus: Emergency Virus Repair ******************
echo  ******************************************************************************
echo.                                                                             
echo        Press any key to begin automatic operation. If you prefer manual      
echo        operation, press Ctrl-C to exit and type NAVDX /? for information.     
echo.                                                                             
echo  ******************************************************************************
echo.
pause
NAVDX C: /m+ /b+ /REPAIR
echo on
