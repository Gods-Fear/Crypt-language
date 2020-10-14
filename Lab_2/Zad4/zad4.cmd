@echo off

Zad1.exe /s %*
IF %ERRORLEVEL% LSS 10 echo Przekazano: %ERRORLEVEL%
IF %ERRORLEVEL% EQU 11 echo Brak parametrow
IF %ERRORLEVEL% EQU 12 echo Parametr %1 nie jest cyfra
IF %ERRORLEVEL% EQU 13 echo Niewlasciwa wartosc parametru %1 