::////////////////////////////////////////////////////////////////////////////////////////////////////
:: -s4	行缩进用4个空格
:: -p	操作符两端出入空格
:: -f	在两行不相关的代码之间插入空行，如import和public class之间、public class和成员之间等
:: -U	移除括号两端多余空格
:: -S   switch 与case不同列,case缩进
:: -d	只在括号外面插入空格
:: -D	只在括号里面插入
:: -P	在括号两边插入空格。
::
::-----	AStyle -h 可获取更多帮助信息 -------  
::
::////////////////////////////////////////////////////////////////////////////////////////////////////


@echo on
@color 0a

::".\AStyle\bin\AStyle.exe" .\src/*.c .\inc/*.h  --style=ansi -s4 -S -H -N -L -m0 -M40 -Z -R -c -n %f

@set para=.\*.c .\*.h  --style=ansi -s4 -j -p -U -S -H -N -L -xV -xf -xh -m0 -M40 -Z -R -c -n %f

@IF EXIST "D:\program files\AStyle\bin\AStyle.exe" (
@set App="D:\program files\AStyle\bin\AStyle.exe"
@echo
) ELSE (
	IF EXIST ".\AStyle\bin\AStyle.exe" (
		@set App=".\AStyle\bin\AStyle.exe"
		@echo
	) ELSE (
		IF EXIST AStyle.exe (
			@set App="AStyle.exe"
			@echo
		) ELSE (
			IF EXIST ".\Tool\AStyle.exe" (
				@set App=".\Tool\AStyle.exe"
				@echo
			)
		)
	)
)

@IF DEFINED App (
@%App% %para%
@echo %App%
) ELSE (
@echo Don't find Astyle.exe application.
@pause
)

@color 0f 
