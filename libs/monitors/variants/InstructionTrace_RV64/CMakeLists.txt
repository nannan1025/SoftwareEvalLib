
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/InstructionTrace_RV64_Monitor.cpp
	src/InstructionTrace_RV64_InstructionMonitors.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
