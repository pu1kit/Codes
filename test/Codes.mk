##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Codes
ConfigurationName      :=Debug
WorkspacePath          := "D:\Code\Codes"
ProjectPath            := "D:\Code\Codes\test"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=pulkit
Date                   :=07/07/2015
CodeLitePath           :="D:\Program Files\CodeLite"
LinkerName             :=D:/Anaconda/MinGW/bin/g++.exe
SharedObjectLinkerName :=D:/Anaconda/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Codes.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=D:/Anaconda/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/Anaconda/MinGW/bin/ar.exe rcu
CXX      := D:/Anaconda/MinGW/bin/g++.exe
CC       := D:/Anaconda/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/Anaconda/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/MCHEF.CPP$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/MCHEF.CPP$(ObjectSuffix): MCHEF.CPP $(IntermediateDirectory)/MCHEF.CPP$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Code/Codes/test/MCHEF.CPP" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MCHEF.CPP$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MCHEF.CPP$(DependSuffix): MCHEF.CPP
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MCHEF.CPP$(ObjectSuffix) -MF$(IntermediateDirectory)/MCHEF.CPP$(DependSuffix) -MM "MCHEF.CPP"

$(IntermediateDirectory)/MCHEF.CPP$(PreprocessSuffix): MCHEF.CPP
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MCHEF.CPP$(PreprocessSuffix) "MCHEF.CPP"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


