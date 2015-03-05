################################################################################
# Automatically-generated file. Do not edit!
################################################################################

C_FILES += "..\ASC0.c"
OBJ_FILES += "ASC0.o"
"ASC0.o" : "..\ASC0.c" ".ASC0.o.opt"
	@echo Compiling ${<F}
	@"D:\InfineonToolsSetup\Tasking3.5.1\ctc\bin\cctc" -f ".ASC0.o.opt"

".ASC0.o.opt" : .refresh
	@argfile ".ASC0.o.opt" -o "ASC0.o" "..\ASC0.c" -C"TC1782" -t -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-Ogs -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=-gcc,-volatile,+strings --switch=auto --align=0 --default-near-size=0 --default-a0-size=0 --default-a1-size=0 -O2 --tradeoff=4 --compact-max-size=200 -g --source -c --dep-file=".ASC0.o.d" -Wc--make-target="ASC0.o"
DEPENDENCY_FILES += ".ASC0.o.d"

C_FILES += "..\cstart.c"
OBJ_FILES += "cstart.o"
"cstart.o" : "..\cstart.c" ".cstart.o.opt"
	@echo Compiling ${<F}
	@"D:\InfineonToolsSetup\Tasking3.5.1\ctc\bin\cctc" -f ".cstart.o.opt"

".cstart.o.opt" : .refresh
	@argfile ".cstart.o.opt" -o "cstart.o" "..\cstart.c" -C"TC1782" -t -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-Ogs -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=-gcc,-volatile,+strings --switch=auto --align=0 --default-near-size=0 --default-a0-size=0 --default-a1-size=0 -O2 --tradeoff=4 --compact-max-size=200 -g --source -c --dep-file=".cstart.o.d" -Wc--make-target="cstart.o"
DEPENDENCY_FILES += ".cstart.o.d"

C_FILES += "..\MAIN.c"
OBJ_FILES += "MAIN.o"
"MAIN.o" : "..\MAIN.c" ".MAIN.o.opt"
	@echo Compiling ${<F}
	@"D:\InfineonToolsSetup\Tasking3.5.1\ctc\bin\cctc" -f ".MAIN.o.opt"

".MAIN.o.opt" : .refresh
	@argfile ".MAIN.o.opt" -o "MAIN.o" "..\MAIN.c" -C"TC1782" -t -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-Ogs -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=-gcc,-volatile,+strings --switch=auto --align=0 --default-near-size=0 --default-a0-size=0 --default-a1-size=0 -O2 --tradeoff=4 --compact-max-size=200 -g --source -c --dep-file=".MAIN.o.d" -Wc--make-target="MAIN.o"
DEPENDENCY_FILES += ".MAIN.o.d"

C_FILES += "..\sync_on_halt.c"
OBJ_FILES += "sync_on_halt.o"
"sync_on_halt.o" : "..\sync_on_halt.c" ".sync_on_halt.o.opt"
	@echo Compiling ${<F}
	@"D:\InfineonToolsSetup\Tasking3.5.1\ctc\bin\cctc" -f ".sync_on_halt.o.opt"

".sync_on_halt.o.opt" : .refresh
	@argfile ".sync_on_halt.o.opt" -o "sync_on_halt.o" "..\sync_on_halt.c" -C"TC1782" -t -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-Ogs -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=-gcc,-volatile,+strings --switch=auto --align=0 --default-near-size=0 --default-a0-size=0 --default-a1-size=0 -O2 --tradeoff=4 --compact-max-size=200 -g --source -c --dep-file=".sync_on_halt.o.d" -Wc--make-target="sync_on_halt.o"
DEPENDENCY_FILES += ".sync_on_halt.o.d"


GENERATED_FILES += "ASC0.o" ".ASC0.o.opt" ".ASC0.o.d" "ASC0.src" "ASC0.lst" "cstart.o" ".cstart.o.opt" ".cstart.o.d" "cstart.src" "cstart.lst" "MAIN.o" ".MAIN.o.opt" ".MAIN.o.d" "MAIN.src" "MAIN.lst" "sync_on_halt.o" ".sync_on_halt.o.opt" ".sync_on_halt.o.d" "sync_on_halt.src" "sync_on_halt.lst"
