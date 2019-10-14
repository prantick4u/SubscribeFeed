#################################################################
#                                                               #
#                 CustomLogger build Makefile                   #
#                    Author : prantick4u                        #
#                    Date :   11/08/2019                        #
#                                                               #
#                                                               #
#                                                               #
#                                                               #
#################################################################
# Executable name and location
TARGET_DIR :=  Output
APP        := CustomLogger.exe
TARGET     :=  $(TARGET_DIR)/$(APP)

# Compiler
CXX := g++

# Build options
CXXFLAGS  :=  -O2 -Wall -fmessage-length=0 -Wno-write-strings -fPIC -fno-common -rdynamic -std=c++14
LDFLAGS :=  -Bsymbolic-functions


# Includes: Application
INCEXT        := hpp
INC_PATHS_APP := $(shell find $(SRCDIR) -name '*.$(INCEXT)' -exec dirname {} \; | uniq| sed /Sources/s/^/-I/)


# Application sources
SRCEXT   := cpp
SRCFILES := $(shell find $(SRCDIR) -name '*.$(SRCEXT)')


# Object file list
OBJS = $(SRCFILES:.cpp=.o)

# Library files 
LIBS     := -lm
  
# -------- Rules ---------

all: $(TARGET)

rebuild: clean $(TARGET)

clean:
	@echo
	@echo -------------------------------------------------------------------------------
	@echo Cleaning
	@echo -------------------------------------------------------------------------------
	@rm -fv $(OBJS)
	@rm -frv $(TARGET_DIR)
	@echo done
	@echo

$(TARGET): $(OBJS)
	@echo -------------------------------------------------------------------------------
	@echo Generating  target: $(TARGET)
	@echo -------------------------------------------------------------------------------
	@mkdir -p $(TARGET_DIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(LIBS) $^ -o $@
	@echo done
	@echo

%.o: %.cpp
	@echo -------------------------------------------------------------------------------
	@echo Compiling: $<
	@echo -------------------------------------------------------------------------------
	$(CXX) $(CXXFLAGS) $(INC_PATHS_APP) -c  $< -o $@
	@echo done
	@echo

# -------------------------------------------------------------------------------
# End of File
# -------------------------------------------------------------------------------