################################################################################
# Automatically-generated file. Do not edit!
################################################################################

PROJ = ASC

-include "..\makefile.init"

all:

clean:
	@rm -f $(GENERATED_FILES)

-include "subdir.mk"
-include "..\makefile.defs"

PCP_FILES :=
EXT_LIBRARIES =

all : "ASC.elf"

"ASC.elf" : $(OBJ_FILES) $(EXT_LIBRARIES) ".ASC.elf.opt"
	@echo Linking to ${@F}
	@"D:\InfineonToolsSetup\Tasking3.5.1\ctc\bin\cctc" -f ".ASC.elf.opt"

".ASC.elf.opt" : .refresh
	@argfile ".ASC.elf.opt" -o "ASC.elf" $(OBJ_FILES) $(EXT_LIBRARIES) $(PCP_FILES) -C"TC1782" -t -Wl-o"${PROJ}.hex":IHEX:4 --hex-format=s "../${PROJ}.lsl" -Wl-OtxycL --no-map-file -Wl--map-file="${PROJ}.mapxml":XML -Wl-mcrfiklSmNOduQ -Wl--error-limit=42 -g -Wl--dep-file=".ASC.elf.d" -Wl--make-target="ASC.elf"
DEPENDENCY_FILES += ".ASC.elf.d"
-include $(DEPENDENCY_FILES)

GENERATED_FILES += "ASC.elf" "ASC.mapxml" "ASC.mdf" ".ASC.elf.opt" "console.log"
-include "..\makefile.targets"

.PHONY : .refresh
