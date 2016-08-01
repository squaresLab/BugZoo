#makefile for grep version v0

ARISTOTLE_DIR = /nfs/spectre/u5/aristot/v3

default:
	@echo
	@echo   Make options:
	@echo
	@echo   build:      build grep.exe
#@echo   build-st:   build grep.int.exe and grep.st.int.exe
#@echo   build-bt:   build grep.int.exe and grep.bt.int.exe
	@echo 

build:        
	@echo 
	@echo Building regular executable ...
	@gcc $(COMPILE_PARAMETERS) -I. -o  grep.exe grep.c 
	@echo done
build-st:        
	@echo 
	@echo Building statement trace instrumented executable ...
	@cfe grep.c
	@il-st-2 grep.c
	@gcc -g -I$(ARISTOTLE_DIR)/headers/ -o grep.int.exe grep.int.c -L$(ARISTOTLE_DIR)/lib/sunos5/ -lIPF_st -lglobalfunc -lm
	@cp -f grep.int.exe grep.st.int.exe
	@chmod u+x grep.st.int.exe
	@echo done
build-bt:        
	@echo 
	@echo Building branch trace instrumented executable ...
	@cfe grep.c
	@il-bt-2 grep.c
	@gcc -g -I$(ARISTOTLE_DIR)/headers/ -o grep.int.exe grep.int.c -L$(ARISTOTLE_DIR)/lib/sunos5/ -lIPF_bt -lglobalfunc -lm
	@cp -f grep.int.exe grep.bt.int.exe
	@chmod u+x grep.bt.int.exe
	@echo done
