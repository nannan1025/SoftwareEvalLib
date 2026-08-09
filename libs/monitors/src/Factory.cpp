
/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

#include "Factory.h" 

#include "Monitor.h"

#include "SIX_NFW_SPRE_Monitor.h"
#include "SHAKTI_C_Monitor.h"
#include "ROCKET_Monitor.h"
#include "CV32E40P_CORE_Monitor.h"
#include "CVA6_Monitor.h"
#include "AssemblyTrace_Monitor.h"
#include "CVA6_QWEN_1_Monitor.h"
#include "LAMP_Monitor.h"
#include "FOUR_NFW_NOPRE_Monitor.h"
#include "CV32E40P_LLM_Monitor.h"
#include "FIVE_NFW_NPRE_Monitor.h"
#include "FIVE_FW_DYPRE_Monitor.h"
#include "RC_Monitor.h"
#include "CV32E40P_QWEN_1_Monitor.h"
#include "CVA62_Monitor.h"
#include "InstructionTrace_RV64_Monitor.h"
#include "CV32E40P_Monitor.h"

namespace SwEvalMonitors
{

int Factory::getVariantHandle(std::string varName_)
{
    	if(varName_ == "SIX_NFW_SPRE"){ return SIX_NFW_SPRE; }
	if(varName_ == "SHAKTI_C"){ return SHAKTI_C; }
	if(varName_ == "ROCKET"){ return ROCKET; }
	if(varName_ == "CV32E40P_CORE"){ return CV32E40P_CORE; }
	if(varName_ == "CVA6"){ return CVA6; }
	if(varName_ == "AssemblyTrace"){ return AssemblyTrace; }
	if(varName_ == "CVA6_QWEN_1"){ return CVA6_QWEN_1; }
	if(varName_ == "LAMP"){ return LAMP; }
	if(varName_ == "FOUR_NFW_NOPRE"){ return FOUR_NFW_NOPRE; }
	if(varName_ == "CV32E40P_LLM"){ return CV32E40P_LLM; }
	if(varName_ == "FIVE_NFW_NPRE"){ return FIVE_NFW_NPRE; }
	if(varName_ == "FIVE_FW_DYPRE"){ return FIVE_FW_DYPRE; }
	if(varName_ == "RC"){ return RC; }
	if(varName_ == "CV32E40P_QWEN_1"){ return CV32E40P_QWEN_1; }
	if(varName_ == "CVA62"){ return CVA62; }
	if(varName_ == "InstructionTrace_RV64"){ return InstructionTrace_RV64; }
	if(varName_ == "CV32E40P"){ return CV32E40P; }

    return -1;
}

Monitor* Factory::getMonitor(int var_)
{
  switch((var_t)var_)
  {
    	case SIX_NFW_SPRE: return new SIX_NFW_SPRE_Monitor();
	case SHAKTI_C: return new SHAKTI_C_Monitor();
	case ROCKET: return new ROCKET_Monitor();
	case CV32E40P_CORE: return new CV32E40P_CORE_Monitor();
	case CVA6: return new CVA6_Monitor();
	case AssemblyTrace: return new AssemblyTrace_Monitor();
	case CVA6_QWEN_1: return new CVA6_QWEN_1_Monitor();
	case LAMP: return new LAMP_Monitor();
	case FOUR_NFW_NOPRE: return new FOUR_NFW_NOPRE_Monitor();
	case CV32E40P_LLM: return new CV32E40P_LLM_Monitor();
	case FIVE_NFW_NPRE: return new FIVE_NFW_NPRE_Monitor();
	case FIVE_FW_DYPRE: return new FIVE_FW_DYPRE_Monitor();
	case RC: return new RC_Monitor();
	case CV32E40P_QWEN_1: return new CV32E40P_QWEN_1_Monitor();
	case CVA62: return new CVA62_Monitor();
	case InstructionTrace_RV64: return new InstructionTrace_RV64_Monitor();
	case CV32E40P: return new CV32E40P_Monitor();
 
    default: return nullptr;
  }
}

} //namespace: SwEvalMonitors
