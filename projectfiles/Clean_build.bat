::cd ..

:: Clean output
del *.crf /s /q
del *.d /s /q
del *.o /s /q
del *.axf /s /q
del *.lnp /s /q
del *.sct /s /q
del *.htm /s /q
del *._2i /s /q
del *.hex /s /q
del *.txt /s /q
del *.c /s /q

:: Clean DebugConfig
del *.dbgconf /s /q

:: Clean Listing
del *.map /s /q
del *.lst /s /q

:: Clean Keil bak
del *.bak /s /q
del *.uvguix.* /s /q
del *.uvgui.* /s /q
::del *.uvoptx /s /q
del *.dep /s /q

::@pause
