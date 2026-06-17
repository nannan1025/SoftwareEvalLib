/*
* Copyright 2025 Chair of EDA, Technical University of Munich
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*	 http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#include "FIVE_NFW_NPRE_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *FIVE_NFW_NPRE_Monitor_instrCnt;
  uint64_t *FIVE_NFW_NPRE_Monitor_typeId_buffer;
  uint64_t *FIVE_NFW_NPRE_Monitor_pc_buffer;
  uint64_t *FIVE_NFW_NPRE_Monitor_brTarget_buffer;
  uint64_t *FIVE_NFW_NPRE_Monitor_rs1_buffer;
  uint64_t *FIVE_NFW_NPRE_Monitor_rs2_buffer;
  uint64_t *FIVE_NFW_NPRE_Monitor_rd_buffer;
}

extern InstructionMonitorSet* FIVE_NFW_NPRE_InstrMonitorSet;

FIVE_NFW_NPRE_Monitor::FIVE_NFW_NPRE_Monitor(): Monitor("FIVE_NFW_NPRE_Monitor", FIVE_NFW_NPRE_InstrMonitorSet)
{}

void FIVE_NFW_NPRE_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  FIVE_NFW_NPRE_Monitor_instrCnt = &(channel_->instrCnt);
  FIVE_NFW_NPRE_Monitor_typeId_buffer = channel_->typeId;

  FIVE_NFW_NPRE_Monitor_pc_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("pc"));
  FIVE_NFW_NPRE_Monitor_brTarget_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("brTarget"));
  FIVE_NFW_NPRE_Monitor_rs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs1"));
  FIVE_NFW_NPRE_Monitor_rs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2"));
  FIVE_NFW_NPRE_Monitor_rd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rd"));
}


std::string FIVE_NFW_NPRE_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_typeId_buffer;\n";

  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_pc_buffer;\n";
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_brTarget_buffer;\n";
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_rs1_buffer;\n";
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_rs2_buffer;\n";
  ret_strs << "extern uint64_t *FIVE_NFW_NPRE_Monitor_rd_buffer;\n";

  return ret_strs.str();
}
